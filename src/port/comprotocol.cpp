#include "comprotocol.h"


//! @brief: 
//! @return *
//! @details: 

ComProTocol::ComProTocol()
{
    m_fifoHandle = new FIFO();

    NewFrmFlag = false;

    TxFrmLen = TX_FRAME_BYTE_LEN / 2 - 3;

    UartFrmLen = TX_FRAME_BYTE_LEN / 2;

}

ComProTocol::~ComProTocol(){

    delete m_fifoHandle;

}


bool ComProTocol::UartChkNewFrm(){

    if(m_fifoHandle == NULL) return false;


    int RxLen = m_fifoHandle->available();
    int sIndex=0;
    int Sum=0;
    unsigned char temp_Frm[RX_FRAME_BYTE_LEN];

    //int temp_data=0;

    /* 超时后返回检查帧头 */
    if(NewFrmFlag==false &&\
       ChkStatus!= CHK_HEAD1 &&\
           ChkCnt==0 ) {
        ChkStatus = CHK_HEAD1;}

    do{

        ChkContinueFlg = false;
        switch(ChkStatus)
   {
        case CHK_HEAD1:
        {
            for(sIndex = 0; sIndex <RxLen; sIndex++)
            {
                /* 找到帧头后切到下一个状态找帧头2 */
                if(*m_fifoHandle->front() == RX_FRAME_HEAD1)
                {
                    ChkContinueFlg = true;
                    ChkStatus = CHK_HEAD2;
                    ChkCnt = CHK_TIMEOUT;
                    break;
                }
                else
                {
                    m_fifoHandle->popData(temp_Frm,1);
                }
            }

        }
            break;
        case CHK_HEAD2:
        {
            if(RxLen>= 2)
            {
                /* 帧头2正确时，切下一个状态检查属性 */
                m_fifoHandle->pickData(temp_Frm,2);

                if(temp_Frm[1] == RX_FRAME_HEAD2)
                {
                    ChkStatus = CHK_ATTR;
                }
                else
                {
                    /* 帧头2不正确时，清理之前的帧头1，重新寻找帧头1 */
                    m_fifoHandle->popData(temp_Frm,1);
                    ChkStatus = CHK_HEAD1;
                }

                ChkContinueFlg = true;
            }
        }
        break;

        case CHK_ATTR:
        {
            if(RxLen >= 3)
            {
                /* 属性正确时，切下一个状态检查长度 */
                m_fifoHandle->pickData(temp_Frm,3);

                if(temp_Frm[2] == RX_FRAME_ATTR)
                {
                    ChkStatus = CHK_LEN;
                }
                else
                {
                    /* 属性不正确时，清理之前的帧头1，重新寻找帧头1 */
                    m_fifoHandle->popData(temp_Frm,1);
                    ChkStatus = CHK_HEAD1;
                }

                ChkContinueFlg = true;
            }
        }
        break;

        case CHK_LEN:
        {
            if(RxLen >= 4)
            {
                /* 长度正确时，切下一个状态检查帧尾 */
                m_fifoHandle->pickData(temp_Frm,4);

                if(temp_Frm[3] == RX_FRAME_BYTE_LEN)
                {
                    ChkStatus = CHK_TAIL;
                }
                else
                {
                    /* 长度不正确时，清理之前的帧头1，重新寻找帧头1 */
                    m_fifoHandle->popData(temp_Frm,1);
                    ChkStatus = CHK_HEAD1;
                }

                ChkContinueFlg = true;
            }
        }
        break;

        case CHK_TAIL:
        {
            if(RxLen >= RX_FRAME_BYTE_LEN)
            {
                /* 帧尾正确时，切下一个状态检查校验和 */
                m_fifoHandle->pickData(temp_Frm,RX_FRAME_BYTE_LEN);

                if(temp_Frm[RX_FRAME_BYTE_LEN - 1]  == RX_FRAME_TAIL)
                {
                    ChkStatus = CHK_SUM;
                }
                else
                {
                    /* 帧尾不正确时，清理之前的帧头1，重新寻找帧头1 */
                    m_fifoHandle->popData(temp_Frm,1);
                    ChkStatus = CHK_HEAD1;
                }

                ChkContinueFlg = true;
            }
        }
        break;

        case CHK_SUM:
        {
            /* 按帧长度读取该帧到帧数据缓冲区 */
            m_fifoHandle->pickData(temp_Frm,RX_FRAME_BYTE_LEN);

            /* 计算校验和 */
            Sum = 0;
            for(sIndex = 4; sIndex < RX_FRAME_BYTE_LEN-2; sIndex++)
            {
                Sum += temp_Frm[sIndex];
            }

            /* 校验和正确后，置新消息帧标志为真，等待上层提取帧数据处理 */
            Sum = Sum & 0xFF;

            if(Sum == temp_Frm[RX_FRAME_BYTE_LEN - 2])
            {
                NewFrmFlag = true;

                ChkStatus = CHK_WAIT;

                break;
            }
            else
            {
                /* 校验和不正确时，清理之前的帧头1，重新寻找帧头1 */
                m_fifoHandle->popData(temp_Frm,1);
                ChkStatus = CHK_HEAD1;
            }
            ChkContinueFlg = true;

        }
        break;
        case CHK_WAIT:
        {
            /* 上层处理完接收帧数据后，清理之前处理的内容，重新寻找下一个接收帧 */
            if(NewFrmFlag == false)
            {
                m_fifoHandle->popData(temp_Frm,RX_FRAME_BYTE_LEN);
                ChkCnt = 0;
                ChkStatus = CHK_HEAD1;
                ChkContinueFlg = true;
            }
        }
        break;

        default:
        {
           ChkStatus = CHK_WAIT;
           ChkContinueFlg = true;
        }
        break;
      }
    }while(ChkContinueFlg);

    if(ChkCnt > 0)
    {
       ChkCnt--;
    }

    return NewFrmFlag;
}

void ComProTocol::MemCpy(quint16 *pSrcAddr, quint16 *pDstAddr, quint16 Len)
{
    while(Len--)
    {
        *pDstAddr++ = *pSrcAddr++;
    }
}

QByteArray ComProTocol::Uart_TxFrm(qint8 a){

//        quint16 Sum = 0;

//        quint16 *ptrTxBuf = UartTxBuf;

//        pstTxFrm.conTent.CmdWord = CmdSTARTCURRLOOP;
//        pstTxFrm.conTent.Data[0] = 0x1;
//        pstTxFrm.conTent.Data[1] = 0x2;
//        pstTxFrm.conTent.Data[2] = 0x3;
//        pstTxFrm.conTent.Data[3] = 0x4;
//        pstTxFrm.conTent.Data[4] = 0x5;
//        pstTxFrm.conTent.Data[5] = 0x6;

//        /* 帧头 */
//        *ptrTxBuf++ = ((TX_FRAME_HEAD2 << 8) | TX_FRAME_HEAD1);

//        /* 帧长度 属性 */
//        *ptrTxBuf++ = ((TX_FRAME_BYTE_LEN << 8) | TX_FRAME_ATTR);

//        MemCpy(&pstTxFrm.Value[0], ptrTxBuf ,TxFrmLen);

//        ptrTxBuf = &UartTxBuf[2];

//        for(quint16 i = 0; i < TxFrmLen; i++)
//        {
//            Sum = Sum + (*ptrTxBuf & 0xFF) + ((*ptrTxBuf >> 8) & 0xFF);
//            ptrTxBuf++;
//         }

//        /* 帧尾与校验和 */
//        *ptrTxBuf = ((TX_FRAME_TAIL << 8) | (Sum & 0xFF));

//        UartTxBuf_byte = Uint16To2ByteArray(UartTxBuf,UartFrmLen);


// 测试上位机画图功能
        UartTxBuf_byte[0] = 0xA3;
        UartTxBuf_byte[1] = 0xA8;
        UartTxBuf_byte[2] = 0x13;
        UartTxBuf_byte[3] = a;


        return UartTxBuf_byte;
}

bool ComProTocol::UartFrmRead(uchar* data){

    bool readOk = false;

    if(NewFrmFlag)
    {
        readOk = (bool)m_fifoHandle->pickData(data,RX_FRAME_BYTE_LEN);

        NewFrmFlag = false;

        return readOk;
    }
    else
        return readOk;
}

QByteArray ComProTocol::Uint16To2ByteArray(quint16 *data_uint16,int size)
{
    QByteArray byteArray;

    byteArray.resize(size*2);

    for(int i=0;i<size;i++)
    {
        byteArray[2*i] = (uchar)(0x00FF & data_uint16[i]);

        byteArray[2*i+1] = (uchar)((0xFF00 & data_uint16[i])>>8);
    }

    return byteArray;
}

void ComProTocol::UartInQueue(QByteArray* byteArray){

    uchar* buffer =reinterpret_cast<uchar*>(byteArray->data());

    int lenth = byteArray->size();

    m_fifoHandle->pushData(buffer,lenth);

}
