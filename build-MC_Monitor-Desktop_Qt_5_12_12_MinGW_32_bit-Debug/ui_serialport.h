/********************************************************************************
** Form generated from reading UI file 'serialport.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALPORT_H
#define UI_SERIALPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SerialPort
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *portNameBox;
    QLabel *label_2;
    QComboBox *baudRateBox;

    void setupUi(QWidget *SerialPort)
    {
        if (SerialPort->objectName().isEmpty())
            SerialPort->setObjectName(QString::fromUtf8("SerialPort"));
        SerialPort->resize(308, 45);
        horizontalLayout = new QHBoxLayout(SerialPort);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(SerialPort);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(40, 16777215));
        label->setLineWidth(1);
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        portNameBox = new QComboBox(SerialPort);
        portNameBox->addItem(QString());
        portNameBox->addItem(QString());
        portNameBox->setObjectName(QString::fromUtf8("portNameBox"));
        portNameBox->setMinimumSize(QSize(30, 0));
        portNameBox->setMaximumSize(QSize(120, 16777215));
        portNameBox->setIconSize(QSize(40, 16));

        horizontalLayout->addWidget(portNameBox);

        label_2 = new QLabel(SerialPort);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(80, 16777215));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        baudRateBox = new QComboBox(SerialPort);
        baudRateBox->addItem(QString());
        baudRateBox->addItem(QString());
        baudRateBox->addItem(QString());
        baudRateBox->addItem(QString());
        baudRateBox->addItem(QString());
        baudRateBox->setObjectName(QString::fromUtf8("baudRateBox"));

        horizontalLayout->addWidget(baudRateBox);


        retranslateUi(SerialPort);

        QMetaObject::connectSlotsByName(SerialPort);
    } // setupUi

    void retranslateUi(QWidget *SerialPort)
    {
        SerialPort->setWindowTitle(QApplication::translate("SerialPort", "Form", nullptr));
        label->setText(QApplication::translate("SerialPort", "PORT", nullptr));
        portNameBox->setItemText(0, QApplication::translate("SerialPort", "COM5", nullptr));
        portNameBox->setItemText(1, QApplication::translate("SerialPort", "COM6", nullptr));

        label_2->setText(QApplication::translate("SerialPort", "BaudRate", nullptr));
        baudRateBox->setItemText(0, QApplication::translate("SerialPort", "1200", nullptr));
        baudRateBox->setItemText(1, QApplication::translate("SerialPort", "2400", nullptr));
        baudRateBox->setItemText(2, QApplication::translate("SerialPort", "4800", nullptr));
        baudRateBox->setItemText(3, QApplication::translate("SerialPort", "9600", nullptr));
        baudRateBox->setItemText(4, QApplication::translate("SerialPort", "115200", nullptr));

    } // retranslateUi

};

namespace Ui {
    class SerialPort: public Ui_SerialPort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALPORT_H
