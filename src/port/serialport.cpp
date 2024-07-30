#include "serialport.h"
#include "ui_serialport.h"

SerialPort::SerialPort(QWidget *parent) :
    AbstractPort(parent),
    ui(new Ui::SerialPort)
{
    ui->setupUi(this);

    serialPort = new QSerialPort(this);
    m_scanTimer = new QTimer(this);

    serialPort->setTextModeEnabled(true);

    connect(serialPort, &QSerialPort::readyRead, this, &SerialPort::readyRead);
    connect(m_scanTimer, &QTimer::timeout, this, &SerialPort::onTimerUpdate);
    connect(ui->baudRateBox, &QComboBox::currentTextChanged, this, &SerialPort::setBaudRate);
    connect(ui->portNameBox, SIGNAL(currentIndexChanged(int)), this, SIGNAL(portChanged()));

    autoOpenPortName="";
    scanPort();

    m_scanTimer->start(500);

}


SerialPort::~SerialPort(){

    delete ui;
    delete serialPort;
    delete m_scanTimer;


}

bool SerialPort::open(){

    QString name = ui->portNameBox->currentText().section(' ', 0, 0);

        serialPort->setPortName(name);
        if (serialPort->open(QIODevice::ReadWrite)) {
            ui->portNameBox->setEnabled(false); // 禁止更改串口
            autoOpenPortName = ui->portNameBox->currentText();
            return true;
        }

        QMessageBox err(QMessageBox::Critical,
            tr("Error"),
            tr("Can not open the port!\n"
                "Port may be occupied or configured incorrectly!"),
            QMessageBox::Cancel, this);
        err.exec();
        return false;
    }

void SerialPort::setAutoOpen(bool enable)
{
//    if(enable && serialPort->isOpen()){
//       autoOpenPortName= ui->portNameBox->currentText();
//    }else{
//       autoOpenPortName="";
//    }
}

void SerialPort::close(){

    serialPort->close();
    ui->portNameBox->setEnabled(true); // 允许更改串口

}

bool SerialPort::isOpen(){

    return serialPort->isOpen();
}

QByteArray SerialPort::readAll()
{
    return serialPort->readAll();
}

void SerialPort::write(const QByteArray &data)
{
    serialPort->write(data);
}

bool SerialPort::portStatus(QString *string){
    bool status;
    static const QString parity[] {
        "None", "Even", "Odd", "Space", "Mark", "Unknown"
    };
    static const QString flowControl[] {
        "None", "RTS/CTS", "XON/XOFF", "Unknown"
    };

    // 获取端口名
    *string = ui->portNameBox->currentText().section(" ", 0, 0) + " ";
    if (*string == " ") { // 端口名是空的
        *string = "COM Port ";
    }
    if (serialPort->isOpen()) {
        string->append("OPEND, " + QString::number(serialPort->baudRate()) + "bps, "
            + QString::number(serialPort->dataBits()) + "bit, "
            + parity[serialPort->parity()] + ", "
            + QString::number(serialPort->stopBits()) + ", "
            + flowControl[serialPort->flowControl()]);
        status = true;
    } else {
        string->append("CLOSED");
        status = false;
    }
    return status;

}

void SerialPort::portSetDialog(){
    PortSetBox portSet(serialPort, this);
    portSet.exec();
}


// 扫描端口
void SerialPort::scanPort()
{
    bool sync = false;
    QComboBox *box = ui->portNameBox;
    QVector<QSerialPortInfo> vec;

    //查找可用的串口
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        // 检测端口列表变更
        QString str = info.portName() + " (" + info.description() + ")";
        if (box->findText(str) == -1) {
            sync = true;
        }
        vec.append(info);
    }
    // 需要同步或者ui->portNameBox存在无效端口
    if (sync || box->count() != vec.count()) {
        int len = 0;
        QFontMetrics fm(box->font());
        QString text = box->currentText();
        bool edited = box->findText(text) == -1; // only edit enable (linux)
        box->clear();
        for (int i = 0; i < vec.length(); ++i) {
            QString name = vec[i].portName() + " (" + vec[i].description() + ")";
            box->addItem(name);
            int width = fm.boundingRect(name).width(); // 计算字符串的像素宽度
            if (width > len) { // 统计最长字符串
                len = width;
            }
        }
        // 设置当前选中的端口
        if (!text.isEmpty() && (box->findText(text) != -1 || edited)) {
            box->setCurrentText(text);
        } else {
            box->setCurrentIndex(0);
        }
        // 自动控制下拉列表宽度
        box->view()->setMinimumWidth(len + 16);
    }

//    if(!serialPort->isOpen() && autoOpenPortName.length()>1){
//        if ( (box->findText(autoOpenPortName) != -1 )) {
//            box->setCurrentText(autoOpenPortName);
//            open();
//        }
//    }
}

void SerialPort::onTimerUpdate(){
    if (serialPort->isOpen()) {
        if (serialPort->error() == QSerialPort::NoError) {
            return;
        }
        emit portError();
    }

    scanPort();

}

void SerialPort::setBaudRate(const QString &string)
{
    serialPort->setBaudRate(string.toInt());
}
