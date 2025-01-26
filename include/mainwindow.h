#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include <QMessageBox>
#include <QTimer>
#include <QDebug>
#include <QDockWidget>

#include <QTableWidget>
#include <QTableWidgetItem>

#include "src/port/serialport.h"
#include "src/port/portmanager.h"
#include "src/port/comprotocol.h"
#include "ui/osciview.h"
#include "ui/ctrlmodeview.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class QSettings;


const QString criticalValTab [][3] = {
    {"SpdRef","0.0","rpm"},
    {"SpdFbk","0.0","rpm"},
    {"SpdOut","0.0","A"},

    {"IdRef","0.0","A"},
    {"IdFbk","0.0","A"},
    {"IqRef","0.0","A"},
    {"IqFbk","0.0","A"},

    {"UdRef","0.0","V"},
    {"UqRef","0.0","V"},
    {"HpVol","0.0","V"},

    {"TmpPdd","0.0","℃"},
    {"TmpMotor","0.0","℃"},
    {"TmpBearing","0.0","℃"},
    {"TmpOil","0.0","℃"},

    {"CtrlMode","0.0","hex"},
    {"OtherSts","0.0","hex"},
    {"FaultNowL","0.0","hex"},
    {"FaultNowH","0.0","hex"},
    {"WarnNowH","0.0","hex"},
    {"WarnNowL","0.0","hex"},
    {"SoftErrCode","0.0","hex"},
    {"SoftWarnCode","0.0","hex"},
    {"MainState","0.0","hex"},
    {"SubState","0.0","hex"},

    {"Lp28Vol1","0.0","V"},
    {"Lp28Vol2","0.0","V"},
    {"Lp5Vol","0.0","V"},
    {"Lp+15Vol","0.0","V"},
    {"Lp-15Vol","0.0","V"},
    {"Lp2.5VolOri","0.0","V"},
    {"Lp0.5VolOri","0.0","V"},
    {"Lp2.5Vol","0.0","V"},
    {"Lp0.5Vol","0.0","V"},

    {"FPGA版本","0.0","hex"},
    {"CPU版本","0.0","hex"}
       };


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void openPort();
    void closePort();



private:
    Ui::MainWindow *ui;

    QTimer m_timer;   // 秒定时器
    bool m_runFlag = true;

    QLabel *m_rxCntLabel, *m_txCntLabel, *m_portInfoLabel;

    PortManager *m_port;

    ComProTocol *m_protocol;

    OsciView *m_oscilloscopeView;

    double m_t;

    void createTablewidgetItems(int rowNo,int colNo,QString varName,int alignID = Qt::AlignHCenter | Qt::AlignVCenter);

private slots:

    void changeRunFlag();
    void onSecTimerTimeout();
    void dispPortStatus();
    void onPortSwitchActionTriggered();


    void on_actionSend_released();

signals:
    void send();

};
#endif // MAINWINDOW_H
