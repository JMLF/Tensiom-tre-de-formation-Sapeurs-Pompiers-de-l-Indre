#include "clientTCP.h"
#include <QAbstractSocket>
#include <QException>

ClientTCP::ClientTCP(QString IP,unsigned int port){
    this->IP = IP;
    this->port = port;
}
ClientTCP::ClientTCP(){

this->port = 0;
this->IP="";
}

void ClientTCP::Connexion_server(){
        socket.abort();
        socket.connectToHost(IP,port);
}

void ClientTCP::close_connexion(){
    socket.close();
}

void ClientTCP::send_trame(const char * trame){

        socket.write(trame);
        if(socket.state() == QAbstractSocket::UnconnectedState){
        throw -3;
        }
}

ClientTCP::~ClientTCP()
{

}

void ClientTCP::setIP(QString IP){
    this->IP = IP;
}
void ClientTCP::setPort(unsigned int port){
    this->port = port;
}

