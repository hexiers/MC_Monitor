#include "portmanager.h"

PortManager::PortManager(QToolBar *toolbar, QAction *portSetAction)
{
    m_portFactorys = new QVector<AbstractPortFactory *>;

    m_toolbar = toolbar;

    m_portSetAction = portSetAction;
    m_portFactorys->append(new SerialPortFactory);

    m_currentPortType = m_portFactorys->at(0)->type();

    setupPort(m_portFactorys->at(0)->create(m_toolbar));

}

PortManager::~PortManager()
{
    for (AbstractPortFactory *factory : *m_portFactorys) {
        delete factory;
    }
    delete m_portFactorys;
}

void PortManager::setupPort(AbstractPort *port){

    m_currentPort = port;

    m_toolbar->insertWidget(m_portSetAction, port);

    if (m_currentPort->usePortSetDialog()) {
        m_portSetAction->setVisible(true);
        connect(m_portSetAction, &QAction::triggered, m_currentPort, &AbstractPort::portSetDialog);
    } else {
        m_portSetAction->setVisible(false);
    }

    connect(port, &AbstractPort::readyRead, this, &PortManager::readyRead);
    connect(port, &AbstractPort::portError, this, &PortManager::portError);
    connect(port, &AbstractPort::portChanged, this, &PortManager::portChanged);
}

bool PortManager::portStatus(QString *string)
{
    return m_currentPort->portStatus(string);
}

QByteArray PortManager::readAll()
{
    return m_currentPort->readAll();
}

void PortManager::write(const QByteArray &data)
{
    m_currentPort->write(data);
}

bool PortManager::open()
{
    return m_currentPort->open();
}

void PortManager::close()
{
    return m_currentPort->close();
}

bool PortManager::isOpen()
{
    return m_currentPort->isOpen();
}

void PortManager::portSetDialog()
{
    m_currentPort->portSetDialog();
}
