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

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class QSettings;

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
