#ifndef UARTSEND_H
#define UARTSEND_H

#include "uartprotocol.h"

class UartSend
{
public:
    UartSend();

    ~UartSend();

private:

    quint16 TxFrmLen,UartFrmLen;


    quint16 UartTxBuf[10];

    ST_TXFRM pstTxFrm;

    static void Uart_Tx(qint16 *pTxData, qint16 Num);

    void MemCpy(quint16 *pSrcqAddr, quint16 *pDstAddr, quint16 Len);

public slots:

    void Uart_TxFrm();


};

#endif // UARTSEND_H
