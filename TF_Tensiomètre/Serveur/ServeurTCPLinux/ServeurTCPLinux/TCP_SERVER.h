//https://www.linuxhowtos.org/C_C++/socket.htm
//faut reprenre tout le code parce que la...



#ifndef _TCP_SERVER_
#define _TCP_SERVER_

//include linux, ne compile poas sous winows
#include <stdio.h>
#include <stdlib.h>
//#include <string.h> a verif
#include <unistd.h> //linux
#include <sys/types.h> 
#include <sys/socket.h> //linux
#include <netinet/in.h> //linux
#include <string>
#include <iostream> //cin et cout 

class TCP_SERVER
{
protected: 

    int sockfd, newsockfd, portno;
    socklen_t clilen;
    char buffer[256];
    struct sockaddr_in serv_addr, cli_addr;
    int n;

public: 
	
	TCP_SERVER();

   void INIT();

   std::string READ();

   void WRITE(std::string message);

   void CLOSE();

};

#endif //_TCP_SERVER_