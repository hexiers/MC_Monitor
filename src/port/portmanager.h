#ifndef PORTMANAGER_H
#define PORTMANAGER_H

#include <QObject>
#include "serialport.h"

class QAction;
class QToolBar;
class QSettings;
class AbstractPort;
class AbstractPortFactory;

class PortManager: public QObject
{
    Q_OBJECT

public:
    explicit PortManager(QToolBar *toolbar, QAction *portSetAction);
    ~PortManager();

    void setupPort(AbstractPort *port);
    bool open();
    bool isOpen();
    void close();
    void portSetDialog();
    bool portStatus(QString *string);
    QByteArray readAll();
    void write(const QByteArray &data);


signals:
    void readyRead();
    void portError();
    void portChanged();


private:
    QVector<AbstractPortFactory *> *m_portFactorys;
    QToolBar *m_toolbar;
    QAction *m_portSetAction;
    AbstractPort *m_currentPort;

    QString m_currentPortType;


};

#endif // PORTMANAGER_H
