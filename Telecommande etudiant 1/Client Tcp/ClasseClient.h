#pragma once
#ifndef ClientTcp
#define ClientTcp

#include<string>
#include <sys/types.h>
#include <sys/socket.h> // socket, recv, send
#include <netinet/in.h> // sockaddr_in, htonl
#include <arpa/inet.h>  // inet_addr
#include <unistd.h>     // close
#include <cstdlib>

class clientTcp {


private :
	int ids_client;

public:
	bool connexion(std::string IpServeur,unsigned int port);
	bool envoyer(std::string data);
	void fermer();
};




#endif // !ClientTcp

