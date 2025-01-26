#include "controlpanelview.h"
#include "ui_controlpanelview.h"

ControlPanelView::ControlPanelView(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::ControlPanelView)
{
    ui->setupUi(this);
}

ControlPanelView::~ControlPanelView()
{
    delete ui;
}
