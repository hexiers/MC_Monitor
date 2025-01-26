#include "ctrlmodeview.h"
#include "ui_ctrlmodeview.h"

ctrlModeView::ctrlModeView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ctrlModeView)
{
    ui->setupUi(this);

    // 设置默认控制模式选项
    ui->comboBox->addItem("位置控制模式");
    ui->comboBox->addItem("速度控制模式");
    ui->comboBox->addItem("电流控制模式");
    ui->comboBox->setCurrentIndex(1);
}

ctrlModeView::~ctrlModeView()
{
    delete ui;
}

void ctrlModeView::on_comboBox_currentIndexChanged(const QString &arg1)
{
    int id = ui->comboBox->currentIndex();

    ui->lineEdit1->clear();
    ui->lineEdit2->clear();
    ui->lineEdit3->clear();
    ui->lineEdit4->clear();
    ui->lineEdit5->clear();
    ui->radioBtn1->setChecked(false);
    ui->radioBtn2->setChecked(false);
    ui->radioBtn3->setChecked(false);
    ui->radioBtn4->setChecked(false);
    ui->radioBtn5->setChecked(false);
    ui->radioBtn6->setChecked(false);


    switch (id) {

    case 0:

        break;


    case 1:
        ui->lbl4->hide();
        ui->lbl_unit4->hide();
        ui->lineEdit4->hide();
        ui->lbl5->hide();
        ui->lbl_unit5->hide();
        ui->lineEdit5->hide();

        ui->radioBtn3->setDisabled(true);
        ui->radioBtn2->setText("Sensorless");

        ui->lbl1->setText("Speed Ref");
        ui->lbl2->setText("Speed Limit");
        ui->lbl3->setText("Max Current");

        ui->lbl_unit1->setText("rpm");
        ui->lbl_unit2->setText("rpm");
        ui->lbl_unit3->setText("A");

        break;


    case 2:
        ui->lbl3->hide();
        ui->lbl_unit3->hide();
        ui->lineEdit3->hide();

        ui->radioBtn3->setEnabled(true);
        ui->radioBtn2->setText("OpenLoop");

        ui->lbl1->setText("d-Current Ref");
        ui->lbl2->setText("q-Current Ref");


        ui->lbl_unit1->setText("A");
        ui->lbl_unit2->setText("A");

        break;

    default:
        ui->lbl4->hide();
        ui->lbl_unit4->hide();
        ui->lineEdit4->hide();
        ui->lbl5->hide();
        ui->lbl_unit5->hide();
        ui->lineEdit5->hide();

        ui->radioBtn3->setDisabled(true);
        ui->radioBtn2->setText("Sensorless");

        ui->lbl1->setText("Speed Ref");
        ui->lbl2->setText("Speed Limit");
        ui->lbl3->setText("Max Current");

        ui->lbl_unit1->setText("rpm");
        ui->lbl_unit2->setText("rpm");
        ui->lbl_unit3->setText("A");

    }
}


void ctrlModeView::on_radioBtn1_released()
{

}


void ctrlModeView::on_radioBtn1_clicked(bool checked)
{
    if(checked){
        ui->lbl4->hide();
        ui->lbl_unit4->hide();
        ui->lineEdit4->hide();
        ui->lbl5->hide();
        ui->lbl_unit5->hide();
        ui->lineEdit5->hide();
    }
}

void ctrlModeView::on_radioBtn2_clicked(bool checked)
{
    if(checked){
        ui->lbl4->setVisible(true);
        ui->lbl_unit4->setVisible(true);
        ui->lineEdit4->setVisible(true);
        ui->lbl5->setVisible(true);
        ui->lbl_unit5->setVisible(true);
        ui->lineEdit5->setVisible(true);

        ui->lbl4->setText("Final Speed");
        ui->lbl5->setText("Slew Rate");
        ui->lbl_unit4->setText("Hz");
        ui->lbl_unit5->setText("Hz/s");
    }
}

void ctrlModeView::on_radioBtn3_clicked(bool checked)
{
    if(checked){
        ui->lbl4->setVisible(true);
        ui->lbl_unit4->setVisible(true);
        ui->lineEdit4->setVisible(true);

        ui->lbl5->hide();
        ui->lbl_unit5->hide();
        ui->lineEdit5->hide();

        ui->lbl4->setText("Electrical position");
        ui->lbl_unit4->setText("°");

    }
}

