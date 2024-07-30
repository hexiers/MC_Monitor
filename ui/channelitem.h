#ifndef CHANNELITEM_H
#define CHANNELITEM_H

#include <QWidget>
#include <QToolButton>
#include <QCheckBox>
#include <QColor>
#include <QAction>
#include <QPainter>
#include <QColorDialog>
#include <QHBoxLayout>

class ChannelItem : public QWidget
{
    Q_OBJECT

public:
    explicit  ChannelItem(QString name,
                          QColor color = QColor(255, 255, 255), QWidget *parent = Q_NULLPTR);
    ~ChannelItem();

    bool isChecked(){ return m_checkBox->isChecked();};

    QColor colorCurernt(){ return m_color; };

    void setChannel(int ch) { m_Channel = ch;}

    int channelCurernt() {return m_Channel;}


private:

    void setColor(QColor color);

    void setEnable(){ m_checkBox->setChecked(true);};

    void setDisable(){ m_checkBox->setChecked(false);};

private slots:

    void pickColor();

    void itemChange();

signals:

    void styleChangeEvent(ChannelItem *item);

private:
    int m_Channel;

    QColor m_color;

    QToolButton *m_colorBtn;

    QCheckBox  *m_checkBox;
};

#endif // CHANNELITEM_H
