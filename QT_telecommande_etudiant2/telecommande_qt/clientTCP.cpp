#include "clientTCP.h"

ClientTCP::ClientTCP(const QString IP,unsigned int port){
    this->IP = IP;
    this->port = port;
}
ClientTCP::ClientTCP(){
this->port = 0;
this->IP="";
}

bool ClientTCP::Connexion_server(){
        socket.connectToHost(IP,port,QIODevice::WriteOnly,QAbstractSocket::NetworkLayerProtocol::AnyIPProtocol);
        //return socket.waitForConnected(1000);
        return socket.waitForConnected(1000);
}

void ClientTCP::fermer_connexion(){
    socket.close();
}

bool ClientTCP::envoie_trame(const char * trame){

        socket.write(trame);
       return socket.waitForBytesWritten(1000);
}

ClientTCP::~ClientTCP()
{

}
