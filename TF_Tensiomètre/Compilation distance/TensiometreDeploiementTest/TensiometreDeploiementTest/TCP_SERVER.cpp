#include "TCP_SERVER.h"


TCP_SERVER::TCP_SERVER()
{

    //ici faudrait set ip et port 

}


void TCP_SERVER::INIT()
{
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0)
        throw ("socket");

    bzero((char*)&serv_addr, sizeof(serv_addr));
    
    portno = atoi("12345\0"); //resneigner le port içi 
    
    serv_addr.sin_family = AF_INET;
    
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    
    serv_addr.sin_port = htons(portno);
    
    if (bind(sockfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) < 0)
        throw("binding");

    listen(sockfd, 5); //on passe le socket en écoute
    clilen = sizeof(cli_addr);
    
    newsockfd = accept(sockfd,(struct sockaddr*)&cli_addr,&clilen);
    if (newsockfd < 0)
        throw("accept");

    std::cout << "Une connection est effective" << std::endl;
}


std::string TCP_SERVER::READ()
{
    bzero(buffer, 256); //set toute les valeurs du buffer a zero
    
    n = read(newsockfd, buffer, 255);
    if (n < 0)
        throw("ERROR reading from socket");
    
    std::cout << "Trame recu : " << buffer << std::endl; 

    return buffer;
}


void TCP_SERVER::WRITE(std::string message)
{
    //remplacer i got your message par le string
    n = write(newsockfd, "I got your message", 18);
    if (n < 0)
        throw("ERROR writing to socket");
}


void TCP_SERVER::CLOSE()
{
    close(newsockfd);

    close(sockfd);
}
