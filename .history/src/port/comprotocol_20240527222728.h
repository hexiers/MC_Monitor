
//! @FilePath: \MC_Monitor\src\port\comprotocol.h
//! @Author: Hex
//! @Date: 2024-02-20 22:16:17
//! @LastEditTime: 2024-05-27 22:27:28
//! @Description: 

#ifndef COMPROTOCOL_H
#define COMPROTOCOL_H

#include <QObject>
#include "fifo.h"

typedef enum
{
    CHK_HEAD1 = 0,
    CHK_HEAD2,
    CHK_ATTR,
    CHK_LEN,
    CHK_TAIL,
    CHK_SUM,
    CHK_WAIT
}E_CHKSTS;

#define RX_FRAME_HEAD1      (0xFF)      /* 接收帧头1 */
#define RX_FRAME_HEAD2     	(0xFF)      /* 接收帧头2 */
#define RX_FRAME_ATTR       (0x11)      /* 接收帧属性 */
#define RX_FRAME_TAIL       (0xEE)      /* 接收帧尾 */
#define RX_FRAME_BYTE_LEN   (0x14)      /* 接收帧长字节数 */
#define RX_FRAME_MAX_LEN    (20)        /* 接收帧缓冲区最大长度 */
#define CHK_TIMEOUT (40)

#define TX_FRAME_HEAD1      (0xFF)      /* 发送帧头1 */
#define TX_FRAME_HEAD2      (0xFF)      /* 发送帧头2 */
#define TX_FRAME_ATTR       (0x11)      /* 发送帧属性 */
#define TX_FRAME_BYTE_LEN   (0x14)      /* 发送帧长字节数 */
#define TX_FRAME_TAIL       (0xEE)      /* 发送帧尾 */



typedef enum
{
    CmdNOCMD = 0x00,
    CmdSTARTCURRLOOP = 0x01,	/* wPara指定目标电流,单位10mA*/
    CmdSTARTSPDLOOP,			/* wPara指定目标转速,单位rpm*/
    CmdSTOPMOTOR,
    CmdREQSTRUCTDATA,
    CmdREQSINGLEDATA,
    CmdOutMT,					/* 退出维护模式*/
    CmdGoMT,					/* 进入维护模式*/
    CmdUPDATEPARA,
    CmdSAVPARA,				/* 将参数存储至EEPROM*/
    CmdDoADCCALIB,			/*  执行模拟量偏置的校正*/
    CmdDoPOSOFFCALIB,			/* 执行电机初始角校正*/
    CmdDoSPDCALIB,			/* 执行速度反馈修正的校正*/
    CmdSTOPCALIB,				/* 停止校正*/
    CmdCLRERR,					/* 故障清0*/
    CmdDoRANDLCALIB, /* 诊断电机的电阻与电感*/
    CmdSetMonitor1,/* 设定监视1*/
    CmdSetMonitor2,/* 设定监视2*/
    CmdDiagHfi,/*整定HFI*/
    CmdDoPOSOFFCALIB2/* 旋转整定初始角*/
} Message_t;

/* 发送帧内容结构体 */
struct ST_TXFRM
{
    quint16 CmdWord;
    quint16 Data[6];

};

union TXFRM{
    quint16 Value[7];
    struct ST_TXFRM conTent;
};


class ComProTocol
{
public:
    ComProTocol();
    ~ComProTocol();

    bool UartChkNewFrm();

    bool UartFrmRead(uchar* data);

    void UartInQueue(QByteArray* byteArray);

    QByteArray Uart_TxFrm(qint8 a);

    QByteArray Uint16To2ByteArray(quint16 *data_uint16,int size);

    QByteArray UartTxBuf_byte;      //发送缓冲数组

private:

    FIFO *m_fifoHandle;

    bool NewFrmFlag,ChkContinueFlg;

    E_CHKSTS ChkStatus; //检查阶段

    int ChkCnt;         //检查次数

private:

    quint16 TxFrmLen,UartFrmLen; //有效帧长，发送帧长

    quint16 UartTxBuf[128];      //发送缓冲数组

    TXFRM pstTxFrm;

    void MemCpy(quint16 *pSrcAddr, quint16 *pDstAddr, quint16 Len);

};

#endif // COMPROTOCOL_H
