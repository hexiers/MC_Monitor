/********************************************************************************
** Form generated from reading UI file 'osciview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSCIVIEW_H
#define UI_OSCIVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtCharts>
#include "qchartview.h"
#include "ui/plotview.h"


QT_BEGIN_NAMESPACE

class Ui_OsciView
{
public:
    QHBoxLayout *horizontalLayout_4;
    PlotView *GraficsView;
    QFrame *frame;
    QVBoxLayout *ControlPanel;
    QListWidget *channelList;
    QHBoxLayout *xPointLayout;
    QLabel *label_3;
    QComboBox *xPointBox;
    QHBoxLayout *YoffsetLayout;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_2;
    QHBoxLayout *YrangeLayout;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;

    void setupUi(QWidget *OsciView)
    {
        if (OsciView->objectName().isEmpty())
            OsciView->setObjectName(QString::fromUtf8("OsciView"));
        OsciView->resize(606, 405);
        horizontalLayout_4 = new QHBoxLayout(OsciView);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        GraficsView = new PlotView(OsciView);
        GraficsView->setObjectName(QString::fromUtf8("GraficsView"));
        GraficsView->setMinimumSize(QSize(400, 0));

        horizontalLayout_4->addWidget(GraficsView);

        frame = new QFrame(OsciView);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(150, 0));
        frame->setMaximumSize(QSize(200, 16777215));
        ControlPanel = new QVBoxLayout(frame);
        ControlPanel->setObjectName(QString::fromUtf8("ControlPanel"));
        ControlPanel->setSizeConstraint(QLayout::SetDefaultConstraint);
        channelList = new QListWidget(frame);
        channelList->setObjectName(QString::fromUtf8("channelList"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(channelList->sizePolicy().hasHeightForWidth());
        channelList->setSizePolicy(sizePolicy);
        channelList->setMinimumSize(QSize(50, 0));

        ControlPanel->addWidget(channelList);

        xPointLayout = new QHBoxLayout();
        xPointLayout->setObjectName(QString::fromUtf8("xPointLayout"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 0));
        label_3->setMaximumSize(QSize(60, 16777215));
        label_3->setAlignment(Qt::AlignCenter);

        xPointLayout->addWidget(label_3);

        xPointBox = new QComboBox(frame);
        xPointBox->setObjectName(QString::fromUtf8("xPointBox"));
        xPointBox->setMinimumSize(QSize(80, 0));

        xPointLayout->addWidget(xPointBox);


        ControlPanel->addLayout(xPointLayout);

        YoffsetLayout = new QHBoxLayout();
        YoffsetLayout->setObjectName(QString::fromUtf8("YoffsetLayout"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setMaximumSize(QSize(60, 16777215));
        label_2->setAlignment(Qt::AlignCenter);

        YoffsetLayout->addWidget(label_2);

        doubleSpinBox_2 = new QDoubleSpinBox(frame);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setMinimumSize(QSize(80, 0));
        doubleSpinBox_2->setMaximumSize(QSize(16777215, 16777215));

        YoffsetLayout->addWidget(doubleSpinBox_2);


        ControlPanel->addLayout(YoffsetLayout);

        YrangeLayout = new QHBoxLayout();
        YrangeLayout->setObjectName(QString::fromUtf8("YrangeLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(60, 16777215));
        label->setAlignment(Qt::AlignCenter);

        YrangeLayout->addWidget(label);

        doubleSpinBox = new QDoubleSpinBox(frame);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setMinimumSize(QSize(80, 0));
        doubleSpinBox->setMaximumSize(QSize(16777215, 16777215));

        YrangeLayout->addWidget(doubleSpinBox);


        ControlPanel->addLayout(YrangeLayout);


        horizontalLayout_4->addWidget(frame);


        retranslateUi(OsciView);

        QMetaObject::connectSlotsByName(OsciView);
    } // setupUi

    void retranslateUi(QWidget *OsciView)
    {
        OsciView->setWindowTitle(QApplication::translate("OsciView", "Form", nullptr));
        label_3->setText(QApplication::translate("OsciView", "X\350\275\264\347\202\271\346\225\260", nullptr));
        label_2->setText(QApplication::translate("OsciView", "Y\350\275\264\345\201\217\347\275\256", nullptr));
        label->setText(QApplication::translate("OsciView", "Y\350\275\264\350\214\203\345\233\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OsciView: public Ui_OsciView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSCIVIEW_H
