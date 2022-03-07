#ifndef CLIENTTCP_H
#define CLIENTTCP_H
#include <QTcpSocket>

class ClientTCP
{
public:
     ClientTCP(QString IP,unsigned int port);
     ClientTCP();
     QTcpSocket socket;
public slots:
     void setIP(QString IP);
     void setPort(unsigned int port);
     void Connexion_server();
     void envoie_trame(const char * trame);
     void fermer_connexion();
    ~ClientTCP();
private:
         QString IP;
         const char * trame;
         unsigned int port;
};

#endif // CLIENTTCP_H
