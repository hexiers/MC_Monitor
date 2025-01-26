#ifndef CONTROLPANELVIEW_H
#define CONTROLPANELVIEW_H

#include <QDockWidget>

namespace Ui {
class ControlPanelView;
}

class ControlPanelView : public QDockWidget
{
    Q_OBJECT

public:
    explicit ControlPanelView(QWidget *parent = nullptr);
    ~ControlPanelView();

private:
    Ui::ControlPanelView *ui;
};

#endif // CONTROLPANELVIEW_H
