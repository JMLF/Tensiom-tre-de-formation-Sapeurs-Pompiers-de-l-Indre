#ifndef CLIENTTCP_H
#define CLIENTTCP_H

#include <QTcpSocket>

class ClientTCP
{
public:
     ClientTCP(const QString IP,unsigned int port);
     ClientTCP();
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
