#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Version.h"
#include <QLabel>
#include "QtCore/qmath.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle(SOFTWARE_TITLE);

    m_port = new PortManager(ui->toolBar, ui->actionPort_Settings);




    // ***********   示波器调试  ********************
    m_oscilloscopeView = new OsciView();
    QDockWidget *align = nullptr;
    QDockWidget *dock = new QDockWidget("示波器调试", this);
    dock->setFeatures(QDockWidget::AllDockWidgetFeatures);
    dock->setWidget(m_oscilloscopeView);

    this->addDockWidget(Qt::BottomDockWidgetArea, dock);
    align = dock;

    // ***********   示波器调试  ********************



     // 底部显示接受信息
    m_rxCntLabel = new QLabel("RX: 0 Bytes", this);
    m_txCntLabel = new QLabel("TX: 0 Bytes", this);
    m_portInfoLabel = new QLabel("", this);

    m_rxCntLabel->setMinimumWidth(120);
    m_txCntLabel->setMinimumWidth(120);
    m_portInfoLabel->setMinimumWidth(120);

    m_protocol = new ComProTocol();

    ui->statusBar->addWidget(m_portInfoLabel);
    ui->statusBar->addWidget(m_rxCntLabel);
    ui->statusBar->addWidget(m_txCntLabel);


        QStringList header;
        header << "参数名" << "数值" <<"单位" ;

        ui->tableWidget->setColumnCount(header.size());                        // 设置表格的列数
        ui->tableWidget->setHorizontalHeaderLabels(header);                    // 设置水平头
        ui->tableWidget->setRowCount(20);                                       // 设置总行数
        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);   // 设置表结构默认不可编辑

        ui->tableWidget->verticalHeader()->setVisible(false);

        ui->tableWidget->setShowGrid(false);

        ui->tableWidget->verticalHeader()->setStretchLastSection(true); //均分各行

        ui->tableWidget->horizontalHeader()->setStretchLastSection(true); //最后一列铺满最后

//        QString columName;

//        columName.append("IdFbk") ;

//        QTableWidgetItem *item = new QTableWidgetItem(columName);

//        item->setTextAlignment(Qt::AlignLeft);//文本居左

//        ui->tableWidget->setItem(0,0,item);//添加到表格中指定位置

        ui->tableWidget->setItem(0,0,new QTableWidgetItem("IdFbk"));
        ui->tableWidget->setItem(1,0,new QTableWidgetItem("IqFbk"));
        ui->tableWidget->setItem(2,0,new QTableWidgetItem("spdFbk"));
        ui->tableWidget->setItem(3,0,new QTableWidgetItem("spdRef"));


    connect(ui->portRunAction, SIGNAL(triggered()), this, SLOT(changeRunFlag()));
    connect(ui->portSwitchAction, SIGNAL(triggered()), this, SLOT(onPortSwitchActionTriggered()));
    connect(&m_timer, &QTimer::timeout, this, &MainWindow::onSecTimerTimeout);


    m_t =0;

    m_timer.start(10);

}

MainWindow::~MainWindow()
{
    delete ui;

    delete m_rxCntLabel;
    delete m_txCntLabel;
    delete m_portInfoLabel;

    delete m_port;
    delete m_protocol;
}


// 打开端口
void MainWindow::openPort()
{
    if (m_port->open()) {
        QIcon icon(":/serialTools/images/close.ico");
        ui->portSwitchAction->setIcon(icon);
        ui->portSwitchAction->setText(tr("Close Port"));
        ui->portRunAction->setEnabled(true);
        //m_controller->setEnabled(m_runFlag);
        dispPortStatus(); // 更新端口状态显示
    }
}

void MainWindow::closePort()
{
   if (m_port->isOpen()) {
       m_port->close();
   }
    m_port->close();
    QIcon icon(":/serialTools/images/connect.ico");
    ui->portSwitchAction->setIcon(icon);
    ui->portSwitchAction->setText(tr("Open Port"));
    ui->portRunAction->setEnabled(false);
//   m_controller->setEnabled(false);
    dispPortStatus(); // 更新端口状态显示
}

void MainWindow::changeRunFlag()
{
    if (m_runFlag == true) {
        m_runFlag = false;
        QIcon icon(":/serialTools/images/start.ico");
        ui->portRunAction->setIcon(icon);
        ui->portRunAction->setText(tr("Start Tx/Rx"));
    } else {
        m_runFlag = true;
        QIcon icon(":/serialTools/images/pause.ico");
        ui->portRunAction->setIcon(icon);
        ui->portRunAction->setText(tr("Pause Tx/Rx"));
    }
    //m_controller->setEnabled(m_runFlag);
}


// 打开串口槽函数
void MainWindow::onPortSwitchActionTriggered()
{
    if (ui->portRunAction->isEnabled() == true) { // 现在需要关闭端口
        closePort();
    } else { // 端口关闭时打开端口
        openPort();
    }
}

// 状态栏显示端口状态
void MainWindow::dispPortStatus()
{
    bool status = false;
    QString string;
    QPalette palette;

    status = m_port->portStatus(&string);
    palette.setColor(QPalette::WindowText, status ? Qt::darkGreen : Qt::red);
    m_portInfoLabel->setText(string);
    m_portInfoLabel->setPalette(palette);
}

void MainWindow::onSecTimerTimeout()
{   
    if (m_port->isOpen())
    {
        QByteArray data = m_port->readAll();

        m_protocol->UartInQueue(&data);

        if(m_protocol->UartChkNewFrm())
        {
            uchar buffer[20];

            m_protocol->UartFrmRead(buffer);

            QByteArray byArray = QByteArray((const char*)buffer,20);

            QString str(byArray.toHex());

            ui->PtxtRecMess->appendPlainText(str);
        }



        qint8 s;

//        m_t+=2.0*3.141569*1*10/1000;

//        if(m_t>=2.0*3.141569)
//            m_t=0;

        //s = 128*qSin(m_t);
        m_t = m_t +1;

        s = m_t;

        if(m_t>100)
            m_t=0;

        m_port->write(m_protocol->Uart_TxFrm(s));
    }


//    QByteArray data = m_port->readAll();

//    QString str(data.toHex());

//    ui->PtxtRecMess->appendPlainText(str);

}


void MainWindow::on_actionSend_released()
{

}
