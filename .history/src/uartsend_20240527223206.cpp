
//! @FilePath: \MC_Monitor\src\uartsend.cpp
//! @Author: Hex
//! @Date: 2024-02-20 22:16:17
//! @LastEditTime: 2024-05-27 22:25:08
//! @Description: 

#include "uartsend.h"

UartSend::UartSend()
{
   TxFrmLen = TX_FRAME_BYTE_LEN / 2 - 3;
   UartFrmLen = TX_FRAME_BYTE_LEN / 2;

}


void UartSend::Uart_TxFrm(){

        quint16 Sum = 0;
        quint16 *ptrTxBuf = UartTxBuf;

        pstTxFrm.CmdWord = 0x01;
        pstTxFrm.Data[0] =0x02;
        pstTxFrm.Data[1] =0x03;
        pstTxFrm.Data[2] =0x04;
        pstTxFrm.Data[3] =0x05;
        pstTxFrm.Data[4] =0x06;
        pstTxFrm.Data[5] =0x07;

        /* 帧头 */
        *ptrTxBuf++ = ((TX_FRAME_HEAD2 << 8) | TX_FRAME_HEAD1);

        /* 帧长度 属性 */
        *ptrTxBuf++ = ((TX_FRAME_BYTE_LEN << 8) | TX_FRAME_ATTR);

        MemCpy(&pstTxFrm.CmdWord, ptrTxBuf,TxFrmLen);

        ptrTxBuf = &UartTxBuf[2];

        for(quint16 i = 0; i < TxFrmLen; i++)
        {
            Sum = Sum + (*ptrTxBuf & 0xFF) + ((*ptrTxBuf >> 8) & 0xFF);
            ptrTxBuf++;
         }

        /* 帧尾与校验和 */
        *ptrTxBuf = ((TX_FRAME_TAIL << 8) | (Sum & 0xFF));

        for(int i = 0; i < 10; i++)
        {
           qDebug()<<hex<< UartTxBuf[i];
        }


}

/**
 *******************************************************************************
 * @fn      MemCpy
 * @brief   数据缓存区拷贝
 * @param   Uint16 *pSrcAddr    指向源数据缓冲区的指针
 *          Uint16 *pDstAddr    指向目标数据缓冲区的指针
 *          Uint16 Len          需要拷贝的长度(16位为单位)
 * @return  None
 *******************************************************************************
 */
void UartSend::MemCpy(quint16 *pSrcAddr, quint16 *pDstAddr, quint16 Len)
{
    while(Len--)
    {
        *pDstAddr++ = *pSrcAddr++;
    }
}
