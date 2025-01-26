/********************************************************************************
** Form generated from reading UI file 'controlpanelview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLPANELVIEW_H
#define UI_CONTROLPANELVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControlPanelView
{
public:
    QWidget *dockWidgetContents;
    QGroupBox *groupBox_2;
    QComboBox *comboBox;
    QLabel *label_8;
    QRadioButton *radioButton;
    QLabel *label_7;
    QPushButton *actionSend_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QPushButton *actionSend;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_6;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;

    void setupUi(QDockWidget *ControlPanelView)
    {
        if (ControlPanelView->objectName().isEmpty())
            ControlPanelView->setObjectName(QString::fromUtf8("ControlPanelView"));
        ControlPanelView->resize(406, 668);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        groupBox_2 = new QGroupBox(dockWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 381, 631));
        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(120, 40, 191, 23));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 40, 91, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        label_8->setFont(font);
        label_8->setTextFormat(Qt::PlainText);
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(30, 230, 211, 21));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(230, 180, 71, 21));
        label_7->setFont(font);
        label_7->setTextFormat(Qt::PlainText);
        actionSend_2 = new QPushButton(groupBox_2);
        actionSend_2->setObjectName(QString::fromUtf8("actionSend_2"));
        actionSend_2->setGeometry(QRect(210, 450, 89, 21));
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 120, 113, 23));
        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 150, 113, 23));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 180, 91, 21));
        label_5->setFont(font);
        label_5->setTextFormat(Qt::PlainText);
        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(100, 180, 113, 23));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 150, 91, 21));
        label_4->setFont(font);
        label_4->setTextFormat(Qt::PlainText);
        actionSend = new QPushButton(groupBox_2);
        actionSend->setObjectName(QString::fromUtf8("actionSend"));
        actionSend->setGeometry(QRect(210, 420, 89, 21));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 120, 71, 21));
        label_3->setFont(font);
        label_3->setTextFormat(Qt::PlainText);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 120, 91, 21));
        label_2->setFont(font);
        label_2->setTextFormat(Qt::PlainText);
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(230, 150, 71, 21));
        label_6->setFont(font);
        label_6->setTextFormat(Qt::PlainText);
        gridLayoutWidget = new QWidget(groupBox_2);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 260, 351, 111));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 1, 1, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 1, 2, 1, 1);

        ControlPanelView->setWidget(dockWidgetContents);

        retranslateUi(ControlPanelView);

        QMetaObject::connectSlotsByName(ControlPanelView);
    } // setupUi

    void retranslateUi(QDockWidget *ControlPanelView)
    {
        ControlPanelView->setWindowTitle(QApplication::translate("ControlPanelView", "DockWidget", nullptr));
        groupBox_2->setTitle(QApplication::translate("ControlPanelView", "\346\216\247\345\210\266\351\235\242\346\235\277", nullptr));
        label_8->setText(QApplication::translate("ControlPanelView", "Control Mode", nullptr));
        radioButton->setText(QApplication::translate("ControlPanelView", "RadioButton", nullptr));
        label_7->setText(QApplication::translate("ControlPanelView", "A", nullptr));
        actionSend_2->setText(QApplication::translate("ControlPanelView", "\345\201\234\346\255\242", nullptr));
        label_5->setText(QApplication::translate("ControlPanelView", "CurrentLimit", nullptr));
        label_4->setText(QApplication::translate("ControlPanelView", "SpeedLimit", nullptr));
        actionSend->setText(QApplication::translate("ControlPanelView", "\345\220\257\345\212\250", nullptr));
        label_3->setText(QApplication::translate("ControlPanelView", "rpm", nullptr));
        label_2->setText(QApplication::translate("ControlPanelView", "SpeedRef", nullptr));
        label_6->setText(QApplication::translate("ControlPanelView", "rpm", nullptr));
        pushButton_4->setText(QApplication::translate("ControlPanelView", "\345\255\230\345\217\202\346\225\260", nullptr));
        pushButton_2->setText(QApplication::translate("ControlPanelView", "\350\277\233\345\205\245\347\273\264\346\212\244", nullptr));
        pushButton_3->setText(QApplication::translate("ControlPanelView", "\351\200\200\345\207\272\347\273\264\346\212\244", nullptr));
        pushButton->setText(QApplication::translate("ControlPanelView", "\346\225\205\351\232\234\346\270\205\351\231\244", nullptr));
        pushButton_7->setText(QApplication::translate("ControlPanelView", "\345\255\230\345\217\202\346\225\260", nullptr));
        pushButton_6->setText(QApplication::translate("ControlPanelView", "\345\255\230\345\217\202\346\225\260", nullptr));
        pushButton_5->setText(QApplication::translate("ControlPanelView", "\344\277\235\345\255\230\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControlPanelView: public Ui_ControlPanelView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLPANELVIEW_H
