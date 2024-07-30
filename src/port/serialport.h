#ifndef SERIALPORT_H
#define SERIALPORT_H

#include <QWidget>
#include "abstractPort.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QMessageBox>
#include <QTimer>
#include <QString>
#include <QComboBox>
#include <QSettings>
#include <QLineEdit>
#include <QToolBar>
#include <QAbstractItemView>
#include <QRegExpValidator>
#include "portsetbox.h"
namespace Ui {
    class SerialPort;
}

class SerialPort : public AbstractPort
{
    Q_OBJECT
// 公有函数
public:
    explicit SerialPort(QWidget *parent = nullptr);
    ~SerialPort();

    bool open();
    void close();
    QByteArray readAll() ;
    void write(const QByteArray &data);
    bool portStatus(QString *string);
    bool isOpen();
    bool usePortSetDialog() { return true; }
    void portSetDialog();
    void setAutoOpen(bool enable);


// 私有函数
private:
    void scanPort();

// 私有变量
private:
    Ui::SerialPort *ui;
    QSerialPort *serialPort;
    QTimer *m_scanTimer;
    QString autoOpenPortName;

// 私有槽函数
private slots:
    void onTimerUpdate();
    void setBaudRate(const QString &string);

};


class SerialPortFactory : public AbstractPortFactory
{
public:
    AbstractPort* create(QWidget *parent = nullptr) { return new SerialPort(parent); }
    QString type() { return "Serial Port"; }
};

#endif // SERIALPORT_H
