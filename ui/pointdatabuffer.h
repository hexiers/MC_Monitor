#ifndef POINTDATABUFFER_H
#define POINTDATABUFFER_H

#include <QVector>
#include <QLineSeries>

QT_CHARTS_USE_NAMESPACE


class PointDataBuffer
{
public:
    PointDataBuffer(const QVector<QtCharts::QLineSeries*> *series);

    int update();

    void append(int channel, double value);

    void clearAll();

    int maximumCount();

private:
    const QVector<QtCharts::QLineSeries*> *m_series;

    QVector<QVector<QPointF>> m_data;

    QVector<int> m_count;

};

#endif // POINTDATABUFFER_H
