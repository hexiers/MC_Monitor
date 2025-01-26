/********************************************************************************
** Form generated from reading UI file 'ctrlmodeview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTRLMODEVIEW_H
#define UI_CTRLMODEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ctrlModeView
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_5;
    QLabel *label_8;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QLabel *lbl_unit1;
    QLabel *lbl2;
    QLabel *lbl_unit2;
    QLineEdit *lineEdit1;
    QLineEdit *lineEdit2;
    QLabel *lbl1;
    QPushButton *actionSend_2;
    QPushButton *actionSend_Start;
    QLabel *lbl_unit3;
    QLineEdit *lineEdit3;
    QLabel *lbl3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QRadioButton *radioBtn2;
    QRadioButton *radioBtn3;
    QRadioButton *radioBtn1;
    QGridLayout *gridLayout_3;
    QLabel *lbl_unit5;
    QLabel *lbl5;
    QLabel *lbl_unit4;
    QLabel *lbl4;
    QLineEdit *lineEdit5;
    QLineEdit *lineEdit4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_6;
    QRadioButton *radioBtn6;
    QRadioButton *radioBtn5;
    QRadioButton *radioBtn4;

    void setupUi(QWidget *ctrlModeView)
    {
        if (ctrlModeView->objectName().isEmpty())
            ctrlModeView->setObjectName(QString::fromUtf8("ctrlModeView"));
        ctrlModeView->resize(462, 518);
        verticalLayout = new QVBoxLayout(ctrlModeView);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_8 = new QLabel(ctrlModeView);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(100, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        label_8->setFont(font);
        label_8->setTextFormat(Qt::PlainText);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_8, 0, 0, 1, 1);

        comboBox = new QComboBox(ctrlModeView);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_5->addWidget(comboBox, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_5);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lbl_unit1 = new QLabel(ctrlModeView);
        lbl_unit1->setObjectName(QString::fromUtf8("lbl_unit1"));
        lbl_unit1->setFont(font);
        lbl_unit1->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lbl_unit1, 0, 2, 1, 1);

        lbl2 = new QLabel(ctrlModeView);
        lbl2->setObjectName(QString::fromUtf8("lbl2"));
        lbl2->setFont(font);
        lbl2->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lbl2, 1, 0, 1, 1);

        lbl_unit2 = new QLabel(ctrlModeView);
        lbl_unit2->setObjectName(QString::fromUtf8("lbl_unit2"));
        lbl_unit2->setFont(font);
        lbl_unit2->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lbl_unit2, 1, 2, 1, 1);

        lineEdit1 = new QLineEdit(ctrlModeView);
        lineEdit1->setObjectName(QString::fromUtf8("lineEdit1"));

        gridLayout->addWidget(lineEdit1, 0, 1, 1, 1);

        lineEdit2 = new QLineEdit(ctrlModeView);
        lineEdit2->setObjectName(QString::fromUtf8("lineEdit2"));

        gridLayout->addWidget(lineEdit2, 1, 1, 1, 1);

        lbl1 = new QLabel(ctrlModeView);
        lbl1->setObjectName(QString::fromUtf8("lbl1"));
        lbl1->setFont(font);
        lbl1->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lbl1, 0, 0, 1, 1);

        actionSend_2 = new QPushButton(ctrlModeView);
        actionSend_2->setObjectName(QString::fromUtf8("actionSend_2"));

        gridLayout->addWidget(actionSend_2, 1, 3, 1, 1);

        actionSend_Start = new QPushButton(ctrlModeView);
        actionSend_Start->setObjectName(QString::fromUtf8("actionSend_Start"));

        gridLayout->addWidget(actionSend_Start, 0, 3, 1, 1);

        lbl_unit3 = new QLabel(ctrlModeView);
        lbl_unit3->setObjectName(QString::fromUtf8("lbl_unit3"));
        lbl_unit3->setFont(font);
        lbl_unit3->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lbl_unit3, 2, 2, 1, 1);

        lineEdit3 = new QLineEdit(ctrlModeView);
        lineEdit3->setObjectName(QString::fromUtf8("lineEdit3"));

        gridLayout->addWidget(lineEdit3, 2, 1, 1, 1);

        lbl3 = new QLabel(ctrlModeView);
        lbl3->setObjectName(QString::fromUtf8("lbl3"));
        lbl3->setFont(font);
        lbl3->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(lbl3, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        groupBox_2 = new QGroupBox(ctrlModeView);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        radioBtn2 = new QRadioButton(groupBox_2);
        radioBtn2->setObjectName(QString::fromUtf8("radioBtn2"));
        radioBtn2->setFont(font);

        gridLayout_2->addWidget(radioBtn2, 0, 3, 1, 1);

        radioBtn3 = new QRadioButton(groupBox_2);
        radioBtn3->setObjectName(QString::fromUtf8("radioBtn3"));
        radioBtn3->setFont(font);

        gridLayout_2->addWidget(radioBtn3, 0, 4, 1, 1);

        radioBtn1 = new QRadioButton(groupBox_2);
        radioBtn1->setObjectName(QString::fromUtf8("radioBtn1"));
        radioBtn1->setFont(font);

        gridLayout_2->addWidget(radioBtn1, 0, 2, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lbl_unit5 = new QLabel(ctrlModeView);
        lbl_unit5->setObjectName(QString::fromUtf8("lbl_unit5"));
        lbl_unit5->setFont(font);
        lbl_unit5->setTextFormat(Qt::PlainText);

        gridLayout_3->addWidget(lbl_unit5, 2, 2, 1, 1);

        lbl5 = new QLabel(ctrlModeView);
        lbl5->setObjectName(QString::fromUtf8("lbl5"));
        lbl5->setFont(font);
        lbl5->setTextFormat(Qt::PlainText);

        gridLayout_3->addWidget(lbl5, 2, 0, 1, 1);

        lbl_unit4 = new QLabel(ctrlModeView);
        lbl_unit4->setObjectName(QString::fromUtf8("lbl_unit4"));
        lbl_unit4->setFont(font);
        lbl_unit4->setTextFormat(Qt::PlainText);

        gridLayout_3->addWidget(lbl_unit4, 1, 2, 1, 1);

        lbl4 = new QLabel(ctrlModeView);
        lbl4->setObjectName(QString::fromUtf8("lbl4"));
        lbl4->setFont(font);
        lbl4->setTextFormat(Qt::PlainText);

        gridLayout_3->addWidget(lbl4, 1, 0, 1, 1);

        lineEdit5 = new QLineEdit(ctrlModeView);
        lineEdit5->setObjectName(QString::fromUtf8("lineEdit5"));

        gridLayout_3->addWidget(lineEdit5, 2, 1, 1, 1);

        lineEdit4 = new QLineEdit(ctrlModeView);
        lineEdit4->setObjectName(QString::fromUtf8("lineEdit4"));

        gridLayout_3->addWidget(lineEdit4, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        groupBox = new QGroupBox(ctrlModeView);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font);
        gridLayout_6 = new QGridLayout(groupBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        radioBtn6 = new QRadioButton(groupBox);
        radioBtn6->setObjectName(QString::fromUtf8("radioBtn6"));
        radioBtn6->setFont(font);
        radioBtn6->setAutoExclusive(true);

        gridLayout_6->addWidget(radioBtn6, 1, 0, 1, 1);

        radioBtn5 = new QRadioButton(groupBox);
        radioBtn5->setObjectName(QString::fromUtf8("radioBtn5"));
        radioBtn5->setFont(font);
        radioBtn5->setAutoExclusive(true);

        gridLayout_6->addWidget(radioBtn5, 1, 1, 1, 1);

        radioBtn4 = new QRadioButton(groupBox);
        radioBtn4->setObjectName(QString::fromUtf8("radioBtn4"));
        radioBtn4->setFont(font);
        radioBtn4->setAutoExclusive(true);

        gridLayout_6->addWidget(radioBtn4, 1, 2, 1, 1);


        verticalLayout->addWidget(groupBox);


        retranslateUi(ctrlModeView);

        QMetaObject::connectSlotsByName(ctrlModeView);
    } // setupUi

    void retranslateUi(QWidget *ctrlModeView)
    {
        ctrlModeView->setWindowTitle(QApplication::translate("ctrlModeView", "Form", nullptr));
        label_8->setText(QApplication::translate("ctrlModeView", "Control Mode", nullptr));
        lbl_unit1->setText(QApplication::translate("ctrlModeView", "rpm", nullptr));
        lbl2->setText(QApplication::translate("ctrlModeView", "Speed Limit", nullptr));
        lbl_unit2->setText(QApplication::translate("ctrlModeView", "rpm", nullptr));
        lbl1->setText(QApplication::translate("ctrlModeView", "Speed Ref", nullptr));
        actionSend_2->setText(QApplication::translate("ctrlModeView", "\345\201\234\346\255\242", nullptr));
        actionSend_Start->setText(QApplication::translate("ctrlModeView", "\345\220\257\345\212\250", nullptr));
        lbl_unit3->setText(QApplication::translate("ctrlModeView", "A", nullptr));
        lbl3->setText(QApplication::translate("ctrlModeView", "Current Limit", nullptr));
        groupBox_2->setTitle(QApplication::translate("ctrlModeView", "Position Mode:", nullptr));
        radioBtn2->setText(QApplication::translate("ctrlModeView", "Sensorless", nullptr));
        radioBtn3->setText(QApplication::translate("ctrlModeView", "Manual Position", nullptr));
        radioBtn1->setText(QApplication::translate("ctrlModeView", "Sensored", nullptr));
        lbl_unit5->setText(QApplication::translate("ctrlModeView", "A", nullptr));
        lbl5->setText(QApplication::translate("ctrlModeView", "Current Limit", nullptr));
        lbl_unit4->setText(QApplication::translate("ctrlModeView", "A", nullptr));
        lbl4->setText(QApplication::translate("ctrlModeView", "Current Limit", nullptr));
        groupBox->setTitle(QApplication::translate("ctrlModeView", "Current Sensor Numbers:", nullptr));
        radioBtn6->setText(QApplication::translate("ctrlModeView", "1 sensors", nullptr));
        radioBtn5->setText(QApplication::translate("ctrlModeView", "2 sensors", nullptr));
        radioBtn4->setText(QApplication::translate("ctrlModeView", "3 sensors", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ctrlModeView: public Ui_ctrlModeView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTRLMODEVIEW_H
