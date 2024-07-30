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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPlainTextEdit *PtxtRecMess;
    QPushButton *actionSend;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidget;
    QWidget *tab_2;
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
        MainWindow->resize(1314, 1021);
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
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(300, 40, 391, 411));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        PtxtRecMess = new QPlainTextEdit(layoutWidget);
        PtxtRecMess->setObjectName(QString::fromUtf8("PtxtRecMess"));
        PtxtRecMess->setReadOnly(true);
        PtxtRecMess->setBackgroundVisible(false);
        PtxtRecMess->setCenterOnScroll(true);

        verticalLayout->addWidget(PtxtRecMess);

        actionSend = new QPushButton(centralwidget);
        actionSend->setObjectName(QString::fromUtf8("actionSend"));
        actionSend->setGeometry(QRect(300, 460, 89, 24));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 281, 871));
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
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1314, 25));
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

        tabWidget->setCurrentIndex(0);


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
        label->setText(QApplication::translate("MainWindow", "\346\216\245\345\217\227\346\266\210\346\201\257\346\211\223\345\215\260\347\252\227\345\217\243", nullptr));
        actionSend->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", nullptr));
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
