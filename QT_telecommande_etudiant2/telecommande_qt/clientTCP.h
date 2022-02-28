#ifndef CLIENTTCP_H
#define CLIENTTCP_H

#include <QTcpSocket>

class ClientTCP
{
public:
     ClientTCP(QString IP,unsigned int port);
     ClientTCP();
     void setIP(QString IP);
     void setPort(unsigned int port);
     bool Connexion_server();
     bool envoie_trame(const char * trame);
     void fermer_connexion();
    ~ClientTCP();
private:
         QTcpSocket socket;
         QString IP;
         const char * trame;
         unsigned int port;
};
#endif // CLIENTTCP_H
