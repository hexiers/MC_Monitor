#ifndef PLOTVIEW_H
#define PLOTVIEW_H

#include <QtCharts/QChartView>
#include <QChart>
#include <QValueAxis>

class PlotView: public QtCharts::QChartView
{

public:
    PlotView(QWidget *parent = nullptr);

protected:
    void resizeEvent(QResizeEvent *event);

private:
    int xTickCount(int width);
    int yTickCount(int height);


};

#endif // PLOTVIEW_H
