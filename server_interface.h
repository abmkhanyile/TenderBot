#ifndef SERVER_INTERFACE_H
#define SERVER_INTERFACE_H

#include <QObject>

class Server_Interface : public QObject
{
    Q_OBJECT
public:
    explicit Server_Interface(QObject *parent = nullptr);

signals:

public slots:
};

#endif // SERVER_INTERFACE_H