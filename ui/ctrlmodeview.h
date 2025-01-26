#ifndef CTRLMODEVIEW_H
#define CTRLMODEVIEW_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui {
class ctrlModeView;
}
QT_END_NAMESPACE


class ctrlModeView : public QWidget
{
    Q_OBJECT

public:
    explicit ctrlModeView(QWidget *parent = nullptr);
    ~ctrlModeView();

public slots:
   /// void aaa();


private slots:
    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_radioBtn1_released();

    void on_radioBtn2_clicked(bool checked);

    void on_radioBtn1_clicked(bool checked);

    void on_radioBtn3_clicked(bool checked);

private:
    Ui::ctrlModeView *ui;
};

#endif // CTRLMODEVIEW_H
