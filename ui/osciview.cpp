#include "osciview.h"
#include "ui_osciview.h"


OsciView::OsciView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OsciView)
{
    ui->setupUi(this);

    m_chart = new QChart;

    m_xRange = 500;

    m_timer = new QTimer;


    setupPlot();
    channelListInit();


    //QRegExpValidator *pReg = new QRegExpValidator(QRegExp("^\\d{2,7}$"));

    //ui->xPointBox->lineEdit()->setValidator(pReg);

    m_timer->setInterval(20);

    connect(m_timer,&QTimer::timeout,this,&OsciView::onTimeUpdata);

    m_timer->start();

}

OsciView::~OsciView()
{
    delete ui;

    delete  m_chart;
    delete  m_timer;
}

void OsciView::channelListInit(){

    ui->channelList->setModelColumn(3); // 两列
    for (int i = 0; i < 16; ++i) {
        QListWidgetItem *item = new QListWidgetItem;
        ui->channelList->addItem(item);
        ChannelItem *chItem = new ChannelItem("CH" + QString::number(i + 1));
        ui->channelList->setItemWidget(item, chItem);

        chItem->setChannel(i);

        channelUpdate(chItem);

        connect(chItem, &ChannelItem::styleChangeEvent, this, &OsciView::channelUpdate);
    }


    ui->channelList->editItem(ui->channelList->item(0));
}

void OsciView::channelUpdate(ChannelItem *Item){

    m_series.at(Item->channelCurernt())->setVisible(Item->isChecked());

    m_series.at(Item->channelCurernt())->setColor(Item->colorCurernt());
}


void OsciView::setupPlot(){


    ui->GraficsView->setChart(m_chart);
    ui->GraficsView->setRenderHint(QPainter::Antialiasing);

    QValueAxis *xAxis = new QValueAxis;

    xAxis->setLabelFormat("%.2f");
    xAxis->setTitleText("X值");
    xAxis->setMax(500);
    xAxis->setMin(0);



    QValueAxis *yAxis = new QValueAxis;
    yAxis->setLabelFormat("%.2f");
    yAxis->setTitleText("Y值");

    yAxis->setMax(1.2);
    yAxis->setMin(-1.2);

//    for(quint32 i=0; i<100;i++)
//    {
//        m_series->append(i,qSin(0.6*i));
//    }

    // 初始化通道
    for (int i = 0; i < 16; ++i) {
        QLineSeries *series = new QLineSeries(this);
        m_series.append(series);
        m_chart->addSeries(series);
        m_chart->setAxisX(xAxis, series);
        m_chart->setAxisY(yAxis, series);


    }
      m_chart->legend()->hide(); // 隐藏图例



//    m_chart->setMargins(QMargins(0, 0, 0, 0)); // set margins
//    m_chart->setContentsMargins(-9, -9, -8, -8);
      m_chart->setBackgroundRoundness(0);

      m_PointDataBuffer = new PointDataBuffer(&m_series);

}



void OsciView::onTimeUpdata(){

//        for(quint32 i=0; i<100;i++)
//        {
//            a.at(i).x();
//            a.setY(qSin(0.6*i));
//           m_series.at(0)->append(a);
//        }

 //*****************  生成波形
        static int j =0;
       // QPointF p((qreal) (j*0.001), qSin(M_PI / 50 * j) );
        j++;

        m_PointDataBuffer->append(1,qSin(M_PI / 50 * j));
 //*****************  生成波形


        int count = m_PointDataBuffer->update();

        if (count > m_xRange + 1 && count > m_count) {
            if (1) {
                qreal dx = m_chart->plotArea().width() / m_xRange;
                dx *= count - m_count;
                m_chart->scroll(dx, 0);
            }
        }
        m_count = count;

}
