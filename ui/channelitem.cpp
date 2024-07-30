#include "channelitem.h"

ChannelItem::ChannelItem(QString name,
                         QColor color, QWidget *parent) : QWidget(parent)
{
    //通道勾选
    m_checkBox = new QCheckBox(name,this);

    //通颜色按钮
    m_colorBtn = new QToolButton;
    m_colorBtn->setFixedSize(QSize(16,16));
    //按键初始化
    QAction *colorAction = new QAction(this);
    colorAction->setToolTip(tr("Change plot lines color"));
    m_colorBtn->setDefaultAction(colorAction);
    setColor(color);

    //布局调整
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(m_checkBox);
    layout->addWidget(m_colorBtn);
    layout->setMargin(0);
    layout->setSpacing(10);

    setLayout(layout);

    connect(m_colorBtn,&QToolButton::clicked,this,&ChannelItem::pickColor);
    connect(m_checkBox, &QCheckBox::stateChanged, this, &ChannelItem::itemChange);
}


ChannelItem::~ChannelItem()
{
    delete m_colorBtn;

    delete m_checkBox;
}

void ChannelItem::setColor(QColor color){

    m_color = color;

    // pixmap中作图，画一个小方格
    QPixmap pixmap = QPixmap(QSize(16,16));
    QPainter *painter = new QPainter(&pixmap);

    painter->setPen(QColor(0,0,0));
    painter->drawRect(QRectF(0,0,15,15));
    painter->fillRect(QRectF(1,1,14,14),color);

    m_colorBtn->setIcon(QIcon(pixmap));

}

void ChannelItem::itemChange(){

        emit styleChangeEvent(this);
}


void ChannelItem::pickColor(){

    //颜色对话框
    QColor changeColor =QColorDialog::getColor(m_color,this);

    if(changeColor.isValid()){

        setColor(changeColor);

        emit styleChangeEvent(this);
    }

}
