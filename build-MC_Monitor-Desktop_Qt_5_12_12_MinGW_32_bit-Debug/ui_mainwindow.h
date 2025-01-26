/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/ctrlmodeview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_Files;
    QAction *actionSave;
    QAction *actionClose;
    QAction *portSwitchAction;
    QAction *portRunAction;
    QAction *actionClear_Buffer;
    QAction *actionPort_Settings;
    QAction *actionTool_Bar;
    QAction *actionStatus_Bar;
    QAction *actionOptions;
    QAction *actionValue_Display;
    QAction *actionVideo_Box;
    QAction *actionStays_on_Top;
    QAction *actionSerial_Port_Test_Tool;
    QAction *actionactionReset;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *criDataGroupBox;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidget;
    QWidget *tab_2;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *FaultGroupBox;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit_29;
    QLineEdit *lineEdit_22;
    QLineEdit *lineEdit_25;
    QLineEdit *lineEdit_31;
    QLineEdit *lineEdit_24;
    QLineEdit *lineEdit_19;
    QLineEdit *lineEdit_30;
    QLabel *label_9;
    QGridLayout *gridLayout_4;
    QLineEdit *lineEdit_34;
    QLineEdit *lineEdit_20;
    QLineEdit *lineEdit_35;
    QLineEdit *lineEdit_32;
    QLabel *label_10;
    QGridLayout *gridLayout_7;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_23;
    QLineEdit *lineEdit_45;
    QLineEdit *lineEdit_44;
    QLineEdit *lineEdit_28;
    QLabel *label_11;
    QGridLayout *gridLayout_8;
    QLineEdit *lineEdit_50;
    QLineEdit *lineEdit_51;
    QLineEdit *lineEdit_52;
    QLineEdit *lineEdit_53;
    QLineEdit *lineEdit_55;
    QLineEdit *lineEdit_48;
    QLineEdit *lineEdit_49;
    QLineEdit *lineEdit_46;
    QLineEdit *lineEdit_47;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_54;
    QLabel *label_15;
    QGroupBox *stateGroupBox;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_16;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_18;
    QLineEdit *lineEdit_8;
    QGroupBox *controlGroupBox;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_11;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_3;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QLCDNumber *lcdNumber_2;
    QLabel *label_3;
    QLCDNumber *lcdNumber_4;
    ctrlModeView *widget;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QSpacerItem *verticalSpacer;
    QGroupBox *paramsGroupBox;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_10;
    QGridLayout *gridLayout_9;
    QLabel *label_16;
    QComboBox *comboBox_2;
    QLabel *label_17;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_18;
    QLineEdit *lineEdit_27;
    QPushButton *actionSend_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *actionSend_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *actionSend_6;
    QPlainTextEdit *PtxtRecMess_2;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_11;
    QGridLayout *gridLayout_10;
    QLabel *label_21;
    QLabel *label_20;
    QPushButton *actionSend_4;
    QComboBox *comboBox_5;
    QComboBox *comboBox_4;
    QTableWidget *tableWidget_2;
    QPlainTextEdit *PtxtRecMess;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QMenu *FILES;
    QMenu *EDIT;
    QMenu *VIEWS;
    QMenu *TOOLS;
    QMenu *HELP;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1693, 1000);
        MainWindow->setMinimumSize(QSize(1693, 1000));
        MainWindow->setMaximumSize(QSize(2000, 1800));
        actionOpen_Files = new QAction(MainWindow);
        actionOpen_Files->setObjectName(QString::fromUtf8("actionOpen_Files"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/serialTools/images/open.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_Files->setIcon(icon);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/serialTools/images/save.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/serialTools/images/close.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon2);
        portSwitchAction = new QAction(MainWindow);
        portSwitchAction->setObjectName(QString::fromUtf8("portSwitchAction"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/serialTools/images/connect.ico"), QSize(), QIcon::Normal, QIcon::Off);
        portSwitchAction->setIcon(icon3);
        portRunAction = new QAction(MainWindow);
        portRunAction->setObjectName(QString::fromUtf8("portRunAction"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/serialTools/images/start.ico"), QSize(), QIcon::Normal, QIcon::Off);
        portRunAction->setIcon(icon4);
        actionClear_Buffer = new QAction(MainWindow);
        actionClear_Buffer->setObjectName(QString::fromUtf8("actionClear_Buffer"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/serialTools/images/clear.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear_Buffer->setIcon(icon5);
        actionPort_Settings = new QAction(MainWindow);
        actionPort_Settings->setObjectName(QString::fromUtf8("actionPort_Settings"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/serialTools/images/port config.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionPort_Settings->setIcon(icon6);
        actionTool_Bar = new QAction(MainWindow);
        actionTool_Bar->setObjectName(QString::fromUtf8("actionTool_Bar"));
        actionTool_Bar->setCheckable(true);
        actionStatus_Bar = new QAction(MainWindow);
        actionStatus_Bar->setObjectName(QString::fromUtf8("actionStatus_Bar"));
        actionStatus_Bar->setCheckable(true);
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/serialTools/images/config.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionOptions->setIcon(icon7);
        actionValue_Display = new QAction(MainWindow);
        actionValue_Display->setObjectName(QString::fromUtf8("actionValue_Display"));
        actionVideo_Box = new QAction(MainWindow);
        actionVideo_Box->setObjectName(QString::fromUtf8("actionVideo_Box"));
        actionStays_on_Top = new QAction(MainWindow);
        actionStays_on_Top->setObjectName(QString::fromUtf8("actionStays_on_Top"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/serialTools/images/pin_up.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionStays_on_Top->setIcon(icon8);
        actionSerial_Port_Test_Tool = new QAction(MainWindow);
        actionSerial_Port_Test_Tool->setObjectName(QString::fromUtf8("actionSerial_Port_Test_Tool"));
        actionactionReset = new QAction(MainWindow);
        actionactionReset->setObjectName(QString::fromUtf8("actionactionReset"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/serialTools/images/reset.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionactionReset->setIcon(icon9);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_8 = new QVBoxLayout(centralwidget);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        criDataGroupBox = new QGroupBox(centralwidget);
        criDataGroupBox->setObjectName(QString::fromUtf8("criDataGroupBox"));
        criDataGroupBox->setMinimumSize(QSize(300, 0));
        criDataGroupBox->setMaximumSize(QSize(450, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(9);
        criDataGroupBox->setFont(font);
        verticalLayout = new QVBoxLayout(criDataGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(criDataGroupBox);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tableWidget = new QTableWidget(tab);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        if (tableWidget->rowCount() < 20)
            tableWidget->setRowCount(20);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setFrameShape(QFrame::StyledPanel);
        tableWidget->setAlternatingRowColors(false);
        tableWidget->setTextElideMode(Qt::ElideLeft);
        tableWidget->setShowGrid(false);
        tableWidget->setGridStyle(Qt::DashLine);
        tableWidget->setRowCount(20);
        tableWidget->setColumnCount(3);
        tableWidget->horizontalHeader()->setMinimumSectionSize(25);
        tableWidget->horizontalHeader()->setDefaultSectionSize(100);
        tableWidget->verticalHeader()->setMinimumSectionSize(20);
        tableWidget->verticalHeader()->setDefaultSectionSize(20);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        horizontalLayout->addWidget(tableWidget);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);


        horizontalLayout_3->addWidget(criDataGroupBox);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        FaultGroupBox = new QGroupBox(centralwidget);
        FaultGroupBox->setObjectName(QString::fromUtf8("FaultGroupBox"));
        FaultGroupBox->setMinimumSize(QSize(400, 0));
        FaultGroupBox->setMaximumSize(QSize(450, 16777215));
        verticalLayout_4 = new QVBoxLayout(FaultGroupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lineEdit_29 = new QLineEdit(FaultGroupBox);
        lineEdit_29->setObjectName(QString::fromUtf8("lineEdit_29"));
        lineEdit_29->setAlignment(Qt::AlignCenter);
        lineEdit_29->setReadOnly(true);
        lineEdit_29->setClearButtonEnabled(false);

        gridLayout_3->addWidget(lineEdit_29, 2, 2, 1, 1);

        lineEdit_22 = new QLineEdit(FaultGroupBox);
        lineEdit_22->setObjectName(QString::fromUtf8("lineEdit_22"));
        lineEdit_22->setAlignment(Qt::AlignCenter);
        lineEdit_22->setReadOnly(true);
        lineEdit_22->setClearButtonEnabled(false);

        gridLayout_3->addWidget(lineEdit_22, 2, 0, 1, 1);

        lineEdit_25 = new QLineEdit(FaultGroupBox);
        lineEdit_25->setObjectName(QString::fromUtf8("lineEdit_25"));
        lineEdit_25->setAlignment(Qt::AlignCenter);
        lineEdit_25->setReadOnly(true);
        lineEdit_25->setClearButtonEnabled(false);

        gridLayout_3->addWidget(lineEdit_25, 1, 2, 1, 1);

        lineEdit_31 = new QLineEdit(FaultGroupBox);
        lineEdit_31->setObjectName(QString::fromUtf8("lineEdit_31"));
        lineEdit_31->setAlignment(Qt::AlignCenter);
        lineEdit_31->setReadOnly(true);
        lineEdit_31->setClearButtonEnabled(false);

        gridLayout_3->addWidget(lineEdit_31, 1, 3, 1, 1);

        lineEdit_24 = new QLineEdit(FaultGroupBox);
        lineEdit_24->setObjectName(QString::fromUtf8("lineEdit_24"));
        lineEdit_24->setAlignment(Qt::AlignCenter);
        lineEdit_24->setReadOnly(true);
        lineEdit_24->setClearButtonEnabled(false);

        gridLayout_3->addWidget(lineEdit_24, 2, 1, 1, 1);

        lineEdit_19 = new QLineEdit(FaultGroupBox);
        lineEdit_19->setObjectName(QString::fromUtf8("lineEdit_19"));
        lineEdit_19->setAlignment(Qt::AlignCenter);
        lineEdit_19->setReadOnly(true);
        lineEdit_19->setClearButtonEnabled(false);

        gridLayout_3->addWidget(lineEdit_19, 1, 0, 1, 1);

        lineEdit_30 = new QLineEdit(FaultGroupBox);
        lineEdit_30->setObjectName(QString::fromUtf8("lineEdit_30"));
        lineEdit_30->setAlignment(Qt::AlignCenter);
        lineEdit_30->setReadOnly(true);
        lineEdit_30->setClearButtonEnabled(false);

        gridLayout_3->addWidget(lineEdit_30, 1, 1, 1, 1);

        label_9 = new QLabel(FaultGroupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        label_9->setFont(font1);
        label_9->setTextFormat(Qt::PlainText);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_9, 0, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout_3);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        lineEdit_34 = new QLineEdit(FaultGroupBox);
        lineEdit_34->setObjectName(QString::fromUtf8("lineEdit_34"));
        lineEdit_34->setAlignment(Qt::AlignCenter);
        lineEdit_34->setReadOnly(true);
        lineEdit_34->setClearButtonEnabled(false);

        gridLayout_4->addWidget(lineEdit_34, 1, 2, 1, 1);

        lineEdit_20 = new QLineEdit(FaultGroupBox);
        lineEdit_20->setObjectName(QString::fromUtf8("lineEdit_20"));
        lineEdit_20->setAlignment(Qt::AlignCenter);
        lineEdit_20->setReadOnly(true);
        lineEdit_20->setClearButtonEnabled(false);

        gridLayout_4->addWidget(lineEdit_20, 1, 0, 1, 1);

        lineEdit_35 = new QLineEdit(FaultGroupBox);
        lineEdit_35->setObjectName(QString::fromUtf8("lineEdit_35"));
        lineEdit_35->setAlignment(Qt::AlignCenter);
        lineEdit_35->setReadOnly(true);
        lineEdit_35->setClearButtonEnabled(false);

        gridLayout_4->addWidget(lineEdit_35, 1, 1, 1, 1);

        lineEdit_32 = new QLineEdit(FaultGroupBox);
        lineEdit_32->setObjectName(QString::fromUtf8("lineEdit_32"));
        lineEdit_32->setAlignment(Qt::AlignCenter);
        lineEdit_32->setReadOnly(true);
        lineEdit_32->setClearButtonEnabled(false);

        gridLayout_4->addWidget(lineEdit_32, 1, 3, 1, 1);

        label_10 = new QLabel(FaultGroupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font1);
        label_10->setTextFormat(Qt::PlainText);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_10, 0, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout_4);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        lineEdit_4 = new QLineEdit(FaultGroupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setAlignment(Qt::AlignCenter);
        lineEdit_4->setReadOnly(true);
        lineEdit_4->setClearButtonEnabled(false);

        gridLayout_7->addWidget(lineEdit_4, 1, 0, 1, 1);

        lineEdit_5 = new QLineEdit(FaultGroupBox);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setAlignment(Qt::AlignCenter);
        lineEdit_5->setReadOnly(true);
        lineEdit_5->setClearButtonEnabled(false);

        gridLayout_7->addWidget(lineEdit_5, 1, 1, 1, 1);

        lineEdit_23 = new QLineEdit(FaultGroupBox);
        lineEdit_23->setObjectName(QString::fromUtf8("lineEdit_23"));
        lineEdit_23->setAlignment(Qt::AlignCenter);
        lineEdit_23->setReadOnly(true);
        lineEdit_23->setClearButtonEnabled(false);

        gridLayout_7->addWidget(lineEdit_23, 1, 3, 1, 1);

        lineEdit_45 = new QLineEdit(FaultGroupBox);
        lineEdit_45->setObjectName(QString::fromUtf8("lineEdit_45"));
        lineEdit_45->setAlignment(Qt::AlignCenter);
        lineEdit_45->setReadOnly(true);
        lineEdit_45->setClearButtonEnabled(false);

        gridLayout_7->addWidget(lineEdit_45, 2, 2, 1, 1);

        lineEdit_44 = new QLineEdit(FaultGroupBox);
        lineEdit_44->setObjectName(QString::fromUtf8("lineEdit_44"));
        lineEdit_44->setAlignment(Qt::AlignCenter);
        lineEdit_44->setReadOnly(true);
        lineEdit_44->setClearButtonEnabled(false);

        gridLayout_7->addWidget(lineEdit_44, 2, 0, 1, 1);

        lineEdit_28 = new QLineEdit(FaultGroupBox);
        lineEdit_28->setObjectName(QString::fromUtf8("lineEdit_28"));
        lineEdit_28->setAlignment(Qt::AlignCenter);
        lineEdit_28->setReadOnly(true);
        lineEdit_28->setClearButtonEnabled(false);

        gridLayout_7->addWidget(lineEdit_28, 1, 2, 1, 1);

        label_11 = new QLabel(FaultGroupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);
        label_11->setTextFormat(Qt::PlainText);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_11, 0, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout_7);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        lineEdit_50 = new QLineEdit(FaultGroupBox);
        lineEdit_50->setObjectName(QString::fromUtf8("lineEdit_50"));
        lineEdit_50->setAlignment(Qt::AlignCenter);
        lineEdit_50->setReadOnly(true);
        lineEdit_50->setClearButtonEnabled(false);

        gridLayout_8->addWidget(lineEdit_50, 2, 0, 1, 1);

        lineEdit_51 = new QLineEdit(FaultGroupBox);
        lineEdit_51->setObjectName(QString::fromUtf8("lineEdit_51"));
        lineEdit_51->setAlignment(Qt::AlignCenter);
        lineEdit_51->setReadOnly(true);
        lineEdit_51->setClearButtonEnabled(false);

        gridLayout_8->addWidget(lineEdit_51, 2, 1, 1, 1);

        lineEdit_52 = new QLineEdit(FaultGroupBox);
        lineEdit_52->setObjectName(QString::fromUtf8("lineEdit_52"));
        lineEdit_52->setAlignment(Qt::AlignCenter);
        lineEdit_52->setReadOnly(true);
        lineEdit_52->setClearButtonEnabled(false);

        gridLayout_8->addWidget(lineEdit_52, 2, 3, 1, 1);

        lineEdit_53 = new QLineEdit(FaultGroupBox);
        lineEdit_53->setObjectName(QString::fromUtf8("lineEdit_53"));
        lineEdit_53->setAlignment(Qt::AlignCenter);
        lineEdit_53->setReadOnly(true);
        lineEdit_53->setClearButtonEnabled(false);

        gridLayout_8->addWidget(lineEdit_53, 3, 0, 1, 1);

        lineEdit_55 = new QLineEdit(FaultGroupBox);
        lineEdit_55->setObjectName(QString::fromUtf8("lineEdit_55"));
        lineEdit_55->setAlignment(Qt::AlignCenter);
        lineEdit_55->setReadOnly(true);
        lineEdit_55->setClearButtonEnabled(false);

        gridLayout_8->addWidget(lineEdit_55, 3, 2, 1, 1);

        lineEdit_48 = new QLineEdit(FaultGroupBox);
        lineEdit_48->setObjectName(QString::fromUtf8("lineEdit_48"));
        lineEdit_48->setAlignment(Qt::AlignCenter);
        lineEdit_48->setReadOnly(true);
        lineEdit_48->setClearButtonEnabled(false);

        gridLayout_8->addWidget(lineEdit_48, 2, 2, 1, 1);

        lineEdit_49 = new QLineEdit(FaultGroupBox);
        lineEdit_49->setObjectName(QString::fromUtf8("lineEdit_49"));
        lineEdit_49->setAlignment(Qt::AlignCenter);
        lineEdit_49->setReadOnly(true);
        lineEdit_49->setClearButtonEnabled(false);

        gridLayout_8->addWidget(lineEdit_49, 1, 3, 1, 1);

        lineEdit_46 = new QLineEdit(FaultGroupBox);
        lineEdit_46->setObjectName(QString::fromUtf8("lineEdit_46"));
        lineEdit_46->setAlignment(Qt::AlignCenter);
        lineEdit_46->setReadOnly(true);
        lineEdit_46->setClearButtonEnabled(false);

        gridLayout_8->addWidget(lineEdit_46, 1, 2, 1, 1);

        lineEdit_47 = new QLineEdit(FaultGroupBox);
        lineEdit_47->setObjectName(QString::fromUtf8("lineEdit_47"));
        lineEdit_47->setAlignment(Qt::AlignCenter);
        lineEdit_47->setReadOnly(true);
        lineEdit_47->setClearButtonEnabled(false);

        gridLayout_8->addWidget(lineEdit_47, 1, 1, 1, 1);

        lineEdit_6 = new QLineEdit(FaultGroupBox);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setAlignment(Qt::AlignCenter);
        lineEdit_6->setReadOnly(true);
        lineEdit_6->setClearButtonEnabled(false);

        gridLayout_8->addWidget(lineEdit_6, 1, 0, 1, 1);

        lineEdit_54 = new QLineEdit(FaultGroupBox);
        lineEdit_54->setObjectName(QString::fromUtf8("lineEdit_54"));
        lineEdit_54->setAlignment(Qt::AlignCenter);
        lineEdit_54->setReadOnly(true);
        lineEdit_54->setClearButtonEnabled(false);

        gridLayout_8->addWidget(lineEdit_54, 3, 1, 1, 1);

        label_15 = new QLabel(FaultGroupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font1);
        label_15->setTextFormat(Qt::PlainText);
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_15, 0, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout_8);


        verticalLayout_7->addWidget(FaultGroupBox);

        stateGroupBox = new QGroupBox(centralwidget);
        stateGroupBox->setObjectName(QString::fromUtf8("stateGroupBox"));
        stateGroupBox->setMinimumSize(QSize(400, 0));
        stateGroupBox->setMaximumSize(QSize(450, 16777215));
        verticalLayout_5 = new QVBoxLayout(stateGroupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineEdit_7 = new QLineEdit(stateGroupBox);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setAlignment(Qt::AlignCenter);
        lineEdit_7->setReadOnly(true);
        lineEdit_7->setClearButtonEnabled(false);

        gridLayout_2->addWidget(lineEdit_7, 0, 0, 1, 1);

        lineEdit_12 = new QLineEdit(stateGroupBox);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setAlignment(Qt::AlignCenter);
        lineEdit_12->setReadOnly(true);
        lineEdit_12->setClearButtonEnabled(false);

        gridLayout_2->addWidget(lineEdit_12, 1, 0, 1, 1);

        lineEdit_15 = new QLineEdit(stateGroupBox);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        lineEdit_15->setAlignment(Qt::AlignCenter);
        lineEdit_15->setReadOnly(true);
        lineEdit_15->setClearButtonEnabled(false);

        gridLayout_2->addWidget(lineEdit_15, 2, 2, 1, 1);

        lineEdit_13 = new QLineEdit(stateGroupBox);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setAlignment(Qt::AlignCenter);
        lineEdit_13->setReadOnly(true);
        lineEdit_13->setClearButtonEnabled(false);

        gridLayout_2->addWidget(lineEdit_13, 2, 0, 1, 1);

        lineEdit_11 = new QLineEdit(stateGroupBox);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setAlignment(Qt::AlignCenter);
        lineEdit_11->setReadOnly(true);
        lineEdit_11->setClearButtonEnabled(false);

        gridLayout_2->addWidget(lineEdit_11, 1, 2, 1, 1);

        lineEdit_14 = new QLineEdit(stateGroupBox);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));
        lineEdit_14->setAlignment(Qt::AlignCenter);
        lineEdit_14->setReadOnly(true);
        lineEdit_14->setClearButtonEnabled(false);

        gridLayout_2->addWidget(lineEdit_14, 2, 1, 1, 1);

        lineEdit_9 = new QLineEdit(stateGroupBox);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setAlignment(Qt::AlignCenter);
        lineEdit_9->setReadOnly(true);
        lineEdit_9->setClearButtonEnabled(false);

        gridLayout_2->addWidget(lineEdit_9, 0, 2, 1, 1);

        lineEdit_10 = new QLineEdit(stateGroupBox);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setAlignment(Qt::AlignCenter);
        lineEdit_10->setReadOnly(true);
        lineEdit_10->setClearButtonEnabled(false);

        gridLayout_2->addWidget(lineEdit_10, 1, 1, 1, 1);

        lineEdit_16 = new QLineEdit(stateGroupBox);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));
        lineEdit_16->setAlignment(Qt::AlignCenter);
        lineEdit_16->setReadOnly(true);
        lineEdit_16->setClearButtonEnabled(false);

        gridLayout_2->addWidget(lineEdit_16, 3, 0, 1, 1);

        lineEdit_17 = new QLineEdit(stateGroupBox);
        lineEdit_17->setObjectName(QString::fromUtf8("lineEdit_17"));
        lineEdit_17->setAlignment(Qt::AlignCenter);
        lineEdit_17->setReadOnly(true);
        lineEdit_17->setClearButtonEnabled(false);

        gridLayout_2->addWidget(lineEdit_17, 3, 1, 1, 1);

        lineEdit_18 = new QLineEdit(stateGroupBox);
        lineEdit_18->setObjectName(QString::fromUtf8("lineEdit_18"));
        lineEdit_18->setAlignment(Qt::AlignCenter);
        lineEdit_18->setReadOnly(true);
        lineEdit_18->setClearButtonEnabled(false);

        gridLayout_2->addWidget(lineEdit_18, 3, 2, 1, 1);

        lineEdit_8 = new QLineEdit(stateGroupBox);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setAlignment(Qt::AlignCenter);
        lineEdit_8->setReadOnly(true);
        lineEdit_8->setClearButtonEnabled(false);

        gridLayout_2->addWidget(lineEdit_8, 0, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout_2);


        verticalLayout_7->addWidget(stateGroupBox);


        horizontalLayout_3->addLayout(verticalLayout_7);

        controlGroupBox = new QGroupBox(centralwidget);
        controlGroupBox->setObjectName(QString::fromUtf8("controlGroupBox"));
        controlGroupBox->setMinimumSize(QSize(400, 0));
        controlGroupBox->setMaximumSize(QSize(350, 16777215));
        verticalLayout_3 = new QVBoxLayout(controlGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(controlGroupBox);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font1);
        gridLayout_11 = new QGridLayout(groupBox);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        lcdNumber = new QLCDNumber(groupBox);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setSmallDecimalPoint(true);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_11->addWidget(lcdNumber, 0, 1, 1, 1);

        lcdNumber_3 = new QLCDNumber(groupBox);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));
        lcdNumber_3->setSmallDecimalPoint(true);
        lcdNumber_3->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_11->addWidget(lcdNumber_3, 0, 3, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font1);
        label_2->setLayoutDirection(Qt::LeftToRight);

        gridLayout_11->addWidget(label_2, 0, 2, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        gridLayout_11->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        gridLayout_11->addWidget(label_4, 1, 0, 1, 1);

        lcdNumber_2 = new QLCDNumber(groupBox);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setSmallDecimalPoint(true);
        lcdNumber_2->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_11->addWidget(lcdNumber_2, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        gridLayout_11->addWidget(label_3, 1, 2, 1, 1);

        lcdNumber_4 = new QLCDNumber(groupBox);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));
        lcdNumber_4->setSmallDecimalPoint(true);
        lcdNumber_4->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_11->addWidget(lcdNumber_4, 1, 3, 1, 1);


        verticalLayout_3->addWidget(groupBox);

        widget = new ctrlModeView(controlGroupBox);
        widget->setObjectName(QString::fromUtf8("widget"));

        verticalLayout_3->addWidget(widget);

        groupBox_2 = new QGroupBox(controlGroupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font1);
        gridLayout_6 = new QGridLayout(groupBox_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout_6->addWidget(pushButton_6, 1, 1, 1, 1);

        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_6->addWidget(pushButton_5, 1, 2, 1, 1);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_6->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_6->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_6->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_6->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_7 = new QPushButton(groupBox_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout_6->addWidget(pushButton_7, 2, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout_3->addWidget(controlGroupBox);

        paramsGroupBox = new QGroupBox(centralwidget);
        paramsGroupBox->setObjectName(QString::fromUtf8("paramsGroupBox"));
        paramsGroupBox->setMinimumSize(QSize(400, 0));
        paramsGroupBox->setMaximumSize(QSize(400, 16777215));
        verticalLayout_2 = new QVBoxLayout(paramsGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget_2 = new QTabWidget(paramsGroupBox);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_10 = new QVBoxLayout(tab_4);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_16 = new QLabel(tab_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMaximumSize(QSize(40, 16777215));
        label_16->setFont(font1);
        label_16->setTextFormat(Qt::PlainText);

        gridLayout_9->addWidget(label_16, 0, 0, 1, 1);

        comboBox_2 = new QComboBox(tab_4);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout_9->addWidget(comboBox_2, 0, 1, 1, 1);

        label_17 = new QLabel(tab_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font1);
        label_17->setTextFormat(Qt::PlainText);

        gridLayout_9->addWidget(label_17, 1, 0, 1, 1);

        comboBox_3 = new QComboBox(tab_4);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout_9->addWidget(comboBox_3, 1, 1, 1, 1);


        verticalLayout_10->addLayout(gridLayout_9);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_18 = new QLabel(tab_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font1);
        label_18->setTextFormat(Qt::PlainText);

        horizontalLayout_5->addWidget(label_18);

        lineEdit_27 = new QLineEdit(tab_4);
        lineEdit_27->setObjectName(QString::fromUtf8("lineEdit_27"));

        horizontalLayout_5->addWidget(lineEdit_27);

        actionSend_3 = new QPushButton(tab_4);
        actionSend_3->setObjectName(QString::fromUtf8("actionSend_3"));
        actionSend_3->setFont(font1);

        horizontalLayout_5->addWidget(actionSend_3);


        verticalLayout_10->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        actionSend_5 = new QPushButton(tab_4);
        actionSend_5->setObjectName(QString::fromUtf8("actionSend_5"));
        actionSend_5->setFont(font1);

        horizontalLayout_6->addWidget(actionSend_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        actionSend_6 = new QPushButton(tab_4);
        actionSend_6->setObjectName(QString::fromUtf8("actionSend_6"));
        actionSend_6->setFont(font1);

        horizontalLayout_6->addWidget(actionSend_6);


        verticalLayout_10->addLayout(horizontalLayout_6);

        PtxtRecMess_2 = new QPlainTextEdit(tab_4);
        PtxtRecMess_2->setObjectName(QString::fromUtf8("PtxtRecMess_2"));
        PtxtRecMess_2->setReadOnly(true);
        PtxtRecMess_2->setBackgroundVisible(false);
        PtxtRecMess_2->setCenterOnScroll(true);

        verticalLayout_10->addWidget(PtxtRecMess_2);

        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        verticalLayout_11 = new QVBoxLayout(tab_5);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_21 = new QLabel(tab_5);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font1);
        label_21->setTextFormat(Qt::PlainText);

        gridLayout_10->addWidget(label_21, 1, 0, 1, 1);

        label_20 = new QLabel(tab_5);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setMaximumSize(QSize(40, 16777215));
        label_20->setFont(font1);
        label_20->setTextFormat(Qt::PlainText);

        gridLayout_10->addWidget(label_20, 0, 0, 1, 1);

        actionSend_4 = new QPushButton(tab_5);
        actionSend_4->setObjectName(QString::fromUtf8("actionSend_4"));
        actionSend_4->setFont(font1);

        gridLayout_10->addWidget(actionSend_4, 2, 1, 1, 1);

        comboBox_5 = new QComboBox(tab_5);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        gridLayout_10->addWidget(comboBox_5, 1, 1, 1, 1);

        comboBox_4 = new QComboBox(tab_5);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        gridLayout_10->addWidget(comboBox_4, 0, 1, 1, 1);


        verticalLayout_11->addLayout(gridLayout_10);

        tableWidget_2 = new QTableWidget(tab_5);
        if (tableWidget_2->columnCount() < 3)
            tableWidget_2->setColumnCount(3);
        if (tableWidget_2->rowCount() < 20)
            tableWidget_2->setRowCount(20);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setFrameShape(QFrame::StyledPanel);
        tableWidget_2->setAlternatingRowColors(false);
        tableWidget_2->setTextElideMode(Qt::ElideLeft);
        tableWidget_2->setShowGrid(false);
        tableWidget_2->setGridStyle(Qt::DashLine);
        tableWidget_2->setRowCount(20);
        tableWidget_2->setColumnCount(3);
        tableWidget_2->horizontalHeader()->setMinimumSectionSize(25);
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(100);
        tableWidget_2->verticalHeader()->setMinimumSectionSize(20);
        tableWidget_2->verticalHeader()->setDefaultSectionSize(20);
        tableWidget_2->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        verticalLayout_11->addWidget(tableWidget_2);

        tabWidget_2->addTab(tab_5, QString());

        verticalLayout_2->addWidget(tabWidget_2);


        horizontalLayout_3->addWidget(paramsGroupBox);


        verticalLayout_8->addLayout(horizontalLayout_3);

        PtxtRecMess = new QPlainTextEdit(centralwidget);
        PtxtRecMess->setObjectName(QString::fromUtf8("PtxtRecMess"));
        PtxtRecMess->setReadOnly(true);
        PtxtRecMess->setBackgroundVisible(false);
        PtxtRecMess->setCenterOnScroll(true);

        verticalLayout_8->addWidget(PtxtRecMess);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1693, 25));
        FILES = new QMenu(menubar);
        FILES->setObjectName(QString::fromUtf8("FILES"));
        EDIT = new QMenu(menubar);
        EDIT->setObjectName(QString::fromUtf8("EDIT"));
        VIEWS = new QMenu(menubar);
        VIEWS->setObjectName(QString::fromUtf8("VIEWS"));
        TOOLS = new QMenu(menubar);
        TOOLS->setObjectName(QString::fromUtf8("TOOLS"));
        HELP = new QMenu(menubar);
        HELP->setObjectName(QString::fromUtf8("HELP"));
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setAllowedAreas(Qt::BottomToolBarArea|Qt::TopToolBarArea);
        toolBar->setIconSize(QSize(20, 20));
        toolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(FILES->menuAction());
        menubar->addAction(EDIT->menuAction());
        menubar->addAction(VIEWS->menuAction());
        menubar->addAction(TOOLS->menuAction());
        menubar->addAction(HELP->menuAction());
        FILES->addAction(actionOpen_Files);
        FILES->addAction(actionSave);
        FILES->addAction(actionClose);
        EDIT->addAction(portSwitchAction);
        EDIT->addAction(portRunAction);
        EDIT->addAction(actionClear_Buffer);
        EDIT->addAction(actionPort_Settings);
        VIEWS->addAction(actionTool_Bar);
        VIEWS->addAction(actionStatus_Bar);
        VIEWS->addAction(actionStays_on_Top);
        TOOLS->addAction(actionOptions);
        TOOLS->addAction(actionValue_Display);
        TOOLS->addAction(actionVideo_Box);
        TOOLS->addSeparator();
        TOOLS->addAction(actionSerial_Port_Test_Tool);
        toolBar->addAction(actionPort_Settings);
        toolBar->addSeparator();
        toolBar->addAction(portSwitchAction);
        toolBar->addAction(portRunAction);
        toolBar->addAction(actionClear_Buffer);
        toolBar->addAction(actionOptions);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_Files->setText(QApplication::translate("MainWindow", "Open Files", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen_Files->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionClose->setText(QApplication::translate("MainWindow", "Close", nullptr));
#ifndef QT_NO_SHORTCUT
        actionClose->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        portSwitchAction->setText(QApplication::translate("MainWindow", "Open Ports", nullptr));
        portRunAction->setText(QApplication::translate("MainWindow", "Stop", nullptr));
#ifndef QT_NO_SHORTCUT
        portRunAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_NO_SHORTCUT
        actionClear_Buffer->setText(QApplication::translate("MainWindow", "Clear Buffer", nullptr));
        actionPort_Settings->setText(QApplication::translate("MainWindow", "Port Settings", nullptr));
        actionTool_Bar->setText(QApplication::translate("MainWindow", "Tool Bar", nullptr));
        actionStatus_Bar->setText(QApplication::translate("MainWindow", "Status Bar", nullptr));
        actionOptions->setText(QApplication::translate("MainWindow", "Options", nullptr));
        actionValue_Display->setText(QApplication::translate("MainWindow", "Value Display", nullptr));
        actionVideo_Box->setText(QApplication::translate("MainWindow", "Video Box", nullptr));
        actionStays_on_Top->setText(QApplication::translate("MainWindow", "Stays on Top", nullptr));
        actionSerial_Port_Test_Tool->setText(QApplication::translate("MainWindow", "Serial Port Test Tool", nullptr));
        actionactionReset->setText(QApplication::translate("MainWindow", "actionReset", nullptr));
        criDataGroupBox->setTitle(QApplication::translate("MainWindow", "\345\205\263\351\224\256\346\225\260\346\215\256\345\210\227\350\241\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Controller I", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Controller II", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Controller III", nullptr));
        FaultGroupBox->setTitle(QApplication::translate("MainWindow", "\346\225\205\351\232\234\351\235\242\346\235\277", nullptr));
        lineEdit_29->setText(QApplication::translate("MainWindow", "\345\212\237\347\216\207\347\256\241\350\277\207\346\270\251", nullptr));
        lineEdit_22->setText(QApplication::translate("MainWindow", "\347\241\254\344\273\266\350\277\207\346\265\201", nullptr));
        lineEdit_25->setText(QApplication::translate("MainWindow", "\347\233\264\346\265\201\350\277\207\345\216\213", nullptr));
        lineEdit_31->setText(QApplication::translate("MainWindow", "\347\233\264\346\265\201\346\254\240\345\216\213", nullptr));
        lineEdit_24->setText(QApplication::translate("MainWindow", "\350\275\257\344\273\266\350\277\207\346\265\201", nullptr));
        lineEdit_19->setText(QApplication::translate("MainWindow", "SC\347\237\255\350\267\2571", nullptr));
        lineEdit_30->setText(QApplication::translate("MainWindow", "SC\347\237\255\350\267\2572", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\345\212\250\345\212\233\344\276\247\346\225\205\351\232\234", nullptr));
        lineEdit_34->setText(QApplication::translate("MainWindow", "\350\275\264\346\211\277\350\277\207\346\270\251", nullptr));
        lineEdit_20->setText(QApplication::translate("MainWindow", "\347\273\225\347\273\204\350\277\207\346\270\251", nullptr));
        lineEdit_35->setText(QApplication::translate("MainWindow", "\347\207\203\346\262\271\350\277\207\346\270\251", nullptr));
        lineEdit_32->setText(QApplication::translate("MainWindow", "\350\266\205\351\242\235\345\256\232\351\200\237", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\347\224\265\346\234\272\346\225\205\351\232\234", nullptr));
        lineEdit_4->setText(QApplication::translate("MainWindow", "28V1\346\225\205\351\232\234", nullptr));
        lineEdit_5->setText(QApplication::translate("MainWindow", "28V2\346\225\205\351\232\234", nullptr));
        lineEdit_23->setText(QApplication::translate("MainWindow", "+15V\345\274\202\345\270\270", nullptr));
        lineEdit_45->setText(QApplication::translate("MainWindow", "\345\212\237\347\216\207\347\256\241\350\277\207\346\270\251", nullptr));
        lineEdit_44->setText(QApplication::translate("MainWindow", "-15V\345\274\202\345\270\270", nullptr));
        lineEdit_28->setText(QApplication::translate("MainWindow", "5V\345\274\202\345\270\270", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "\344\275\216\345\216\213\347\224\265\346\272\220\346\225\205\351\232\234", nullptr));
        lineEdit_50->setText(QApplication::translate("MainWindow", "ADC\346\225\205\351\232\234", nullptr));
        lineEdit_51->setText(QApplication::translate("MainWindow", "\350\275\257\344\273\266\346\225\205\351\232\234", nullptr));
        lineEdit_52->setText(QApplication::translate("MainWindow", "CPU\346\225\205\351\232\234", nullptr));
        lineEdit_53->setText(QApplication::translate("MainWindow", "NVram\346\225\205\351\232\234", nullptr));
        lineEdit_55->setText(QApplication::translate("MainWindow", "WR\346\225\205\351\232\234", nullptr));
        lineEdit_48->setText(QApplication::translate("MainWindow", "EEPROM\346\225\205\351\232\234", nullptr));
        lineEdit_49->setText(QApplication::translate("MainWindow", " \344\270\255\346\226\255\344\270\242\345\244\261", nullptr));
        lineEdit_46->setText(QApplication::translate("MainWindow", "\347\234\213\351\227\250\347\213\227\345\244\215\344\275\215", nullptr));
        lineEdit_47->setText(QApplication::translate("MainWindow", "\346\211\213\345\212\250\345\201\234\346\255\242", nullptr));
        lineEdit_6->setText(QApplication::translate("MainWindow", "FPGA\346\225\205\351\232\234", nullptr));
        lineEdit_54->setText(QApplication::translate("MainWindow", "CCDL\346\225\205\351\232\234", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "\346\216\247\345\210\266\346\225\205\351\232\234", nullptr));
        stateGroupBox->setTitle(QApplication::translate("MainWindow", "\347\212\266\346\200\201\351\235\242\346\235\277", nullptr));
        lineEdit_7->setText(QApplication::translate("MainWindow", "\345\272\224\346\200\245\345\201\234\350\275\246\344\275\277\350\203\275", nullptr));
        lineEdit_12->setText(QApplication::translate("MainWindow", "\351\242\204\345\205\205\347\224\265\344\275\277\350\203\275", nullptr));
        lineEdit_15->setText(QApplication::translate("MainWindow", "FPGA\345\260\261\347\273\252", nullptr));
        lineEdit_13->setText(QApplication::translate("MainWindow", "\351\200\232\351\201\223ID_A", nullptr));
        lineEdit_11->setText(QApplication::translate("MainWindow", "\351\230\262\345\217\215\346\216\245\344\275\277\350\203\275", nullptr));
        lineEdit_14->setText(QApplication::translate("MainWindow", "\351\200\232\351\201\223ID_B", nullptr));
        lineEdit_9->setText(QApplication::translate("MainWindow", "FPGA\344\270\262\345\217\243B", nullptr));
        lineEdit_10->setText(QApplication::translate("MainWindow", "CPU\345\210\207\346\215\242", nullptr));
        lineEdit_16->setText(QApplication::translate("MainWindow", "\345\274\200\345\207\2721\344\275\277\350\203\275", nullptr));
        lineEdit_17->setText(QApplication::translate("MainWindow", "\345\274\200\345\207\2722\344\275\277\350\203\275", nullptr));
        lineEdit_18->setText(QApplication::translate("MainWindow", "\345\274\200\345\207\2723\344\275\277\350\203\275", nullptr));
        lineEdit_8->setText(QApplication::translate("MainWindow", "FPGA\344\270\262\345\217\243A", nullptr));
        controlGroupBox->setTitle(QApplication::translate("MainWindow", "\346\216\247\345\210\266\351\235\242\346\235\277", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Value", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "id(A)", nullptr));
        label->setText(QApplication::translate("MainWindow", "VDC(V)", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Speed(rpm)", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "iq(A)", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", " \347\273\264\346\212\244", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "\345\255\230\345\217\202\346\225\260", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\346\225\260\346\215\256", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\346\225\205\351\232\234\346\270\205\351\231\244", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "\345\255\230\345\217\202\346\225\260", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\350\277\233\345\205\245\347\273\264\346\212\244", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\273\264\346\212\244", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "\345\255\230\345\217\202\346\225\260", nullptr));
        paramsGroupBox->setTitle(QApplication::translate("MainWindow", " \345\217\202\346\225\260\351\235\242\346\235\277", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "\345\244\247\347\261\273", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "\345\255\220\347\261\273", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "Value Modifiy", nullptr));
        actionSend_3->setText(QApplication::translate("MainWindow", "Confirm", nullptr));
        actionSend_5->setText(QApplication::translate("MainWindow", "Params Dowmload", nullptr));
        actionSend_6->setText(QApplication::translate("MainWindow", "Params Upload", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "Params Modify", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "\345\255\220\347\261\273", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "\345\244\247\347\261\273", nullptr));
        actionSend_4->setText(QApplication::translate("MainWindow", "Data Update", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("MainWindow", "Params Update", nullptr));
        FILES->setTitle(QApplication::translate("MainWindow", "Files", nullptr));
        EDIT->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        VIEWS->setTitle(QApplication::translate("MainWindow", "Views", nullptr));
        TOOLS->setTitle(QApplication::translate("MainWindow", "Tools", nullptr));
        HELP->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
