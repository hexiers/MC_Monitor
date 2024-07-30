#ifndef UARTRECEIVE_H
#define UARTRECEIVE_H

#include <QObject>

class UartReceive
{
public:
    UartReceive();

signals:
    void Uart_ChkNewFrm();

private slots:
    void Uart_RxFrm();
};

#endif // UARTRECEIVE_H
