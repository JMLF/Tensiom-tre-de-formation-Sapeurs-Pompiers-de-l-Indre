//https://www.linuxhowtos.org/C_C++/socket.htm
//faut reprenre tout le code parce que la...



#ifndef _TCP_SERVER_
#define _TCP_SERVER_

//include linux
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //pour la fonction bzero mais cette fonction est deprecated donc utiliser plutot memeset
#include <unistd.h> //linux
#include <sys/types.h> 
#include <sys/socket.h> //linux
#include <netinet/in.h> //linux
#include <string>
#include <iostream> //cin et cout 


/// <summary>
/// 
/// </summary>
class TCP_SERVER
{
protected: 

    int sockfd, newsockfd, portno;///<
    socklen_t clilen;///<
    char buffer[256]; ///< Stocke les données reçu
    struct sockaddr_in serv_addr, cli_addr;///<
    int n;///< pas un chiffre magique 

public: 
	
    /// <summary>
    /// 
    /// </summary>
    TCP_SERVER();

    /// <summary>
    /// 
    /// </summary>
    void INIT();

    /// <summary>
    /// 
    /// </summary>
    /// <returns></returns>
    std::string READ();

    /// <summary>
    /// 
    /// </summary>
    /// <param name="message"></param>
    void WRITE(std::string message);

    /// <summary>
    /// 
    /// </summary>
    void CLOSE();

};

#endif //_TCP_SERVER_