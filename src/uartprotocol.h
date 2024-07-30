#ifndef UARTPROTOCOL_H
#define UARTPROTOCOL_H

#include <QObject>
#include <QObject>
#include <QVector>
#include <QDebug>


#define MAX_TX_LEN      (256)	        /* 发送缓冲区最大长度 */
#define MAX_RX_LEN      (512) 	        /* 接收缓冲区最大长度 */

#define RX_FRAME_HEAD1      (0xFF)      /* 接收帧头1 */
#define RX_FRAME_HEAD2     	(0xFF)      /* 接收帧头2 */
#define RX_FRAME_ATTR       (0x11)      /* 接收帧属性 */
#define RX_FRAME_TAIL       (0xEE)      /* 接收帧尾 */
#define RX_FRAME_BYTE_LEN   (0x14)      /* 接收帧长字节数 */
#define RX_FRAME_MAX_LEN    (20)        /* 接收帧缓冲区最大长度 */
#define CHK_TIMEOUT         (40)        /* 检查接收帧超时计数值 */

#define TX_FRAME_HEAD1      (0xFF)      /* 发送帧头1 */
#define TX_FRAME_HEAD2      (0xFF)      /* 发送帧头2 */
#define TX_FRAME_ATTR       (0x11)      /* 发送帧属性 */
#define TX_FRAME_BYTE_LEN   (0x14)      /* 发送帧长字节数 */
#define TX_FRAME_TAIL       (0xEE)      /* 发送帧尾 */

/* 发送帧内容结构体 */
typedef struct
{
    quint16 CmdWord;
    quint16 Data[6];

}ST_TXFRM;

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




class UartProtocol
{
public:
    UartProtocol();
    ~UartProtocol();



};


//class UartFIFO{
// private:
//    QVector<QChar *>pRxBuf; /* 指向接收缓冲区的指针 */
//    QChar  bufLen;          /* 环形队列最大长度 */
//    Uint16 LastPos;         /* 环形队列最末尾位置 */
//    Uint16 RdPos;           /* 环形队列读位置 */
//    Uint16 WrPos;           /* 环形队列写位置 */
//    E_CHKSTS eChkSts;       /* 检查接收状态 */
//    Uint16 ChkCnt;          /* 检查接收次数计数值 */
//    Uint16 HandledLen;      /* 记录已处理的长度 */
//    Uint16 RxLen;           /* 记录环形队列接收数据的长度 */
//    bool bNewFrmFlg;        /* 新的接收帧标志 */
//    Uint16 *pRxFrmBuf;      /* 指向接收帧缓冲区指针 */
//    ST_RXFRM *pstRxFrm;     /* 指向接收帧内容结构体指针 */

//};



/* 检查接收有限状态机状态枚举 */
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

///* 接收帧内容结构体 */
//typedef struct
//{
//    Uint16 CmdWord;
//    Uint16 Data[6];
//}ST_RXFRM;

///* 发送参数管理结构体 */
//typedef struct
//{
//    void *pTxStr;
//    Uint16 *pSize;
//}ST_TXSTRUCT;

///* 环形队列管理结构体*/
//typedef struct
//{
//    Uint16 *pRxBuf;         /* 指向接收缓冲区的指针 */
//    Uint16 BufLen;          /* 环形队列最大长度 */
//    Uint16 LastPos;         /* 环形队列最末尾位置 */
//    Uint16 RdPos;           /* 环形队列读位置 */
//    Uint16 WrPos;           /* 环形队列写位置 */
//    E_CHKSTS eChkSts;       /* 检查接收状态 */
//    Uint16 ChkCnt;          /* 检查接收次数计数值 */
//    Uint16 HandledLen;      /* 记录已处理的长度 */
//    Uint16 RxLen;           /* 记录环形队列接收数据的长度 */
//    bool bNewFrmFlg;        /* 新的接收帧标志 */
//    Uint16 *pRxFrmBuf;      /* 指向接收帧缓冲区指针 */
//    ST_RXFRM *pstRxFrm;     /* 指向接收帧内容结构体指针 */
//}ST_RBUFMNG;

//extern ST_RBUFMNG stRBufMng;
//extern void MemCpy(Uint16 *pSrcAddr, Uint16 *pDstAddr, Uint16 Len);
//extern void MemSet(Uint16 *pAddr, Uint16 Val, Uint16 Len);
//extern void Uart_Init(void);



#endif // UARTPROTOCOL_H
