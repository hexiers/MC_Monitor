#ifndef OSCIVIEW_H
#define OSCIVIEW_H

#include <QWidget>

#include "QtCore/qmath.h"
#include <QtCharts/QChartGlobal>
#include <QtCharts/QLineSeries>
#include <QtCharts/QChart>
#include <QtCharts/QValueAxis>
#include <QtCharts/QChartView>
#include <QLineEdit>
#include <QTimer>

#include"channelitem.h"
#include"pointdatabuffer.h"

QT_CHARTS_USE_NAMESPACE


namespace Ui {
class OsciView;
}

namespace QtCharts {
    class QLineSeries;
    class QChart;
}

class OsciView : public QWidget
{
    Q_OBJECT

public:
    explicit OsciView(QWidget *parent = nullptr);
    ~OsciView();


private:
    void setupPlot();

    void channelListInit();

private:
    Ui::OsciView *ui;

    QTimer *m_timer;
    QtCharts::QChart *m_chart;
    QVector<QtCharts::QLineSeries*> m_series;
    int m_count, m_xRange;

    PointDataBuffer *m_PointDataBuffer;


private slots:
    void onTimeUpdata();
    void channelUpdate(ChannelItem *Item);


};

#endif // OSCIVIEW_H
