#include "TCP_SERVER.h"

TCP_SERVER::TCP_SERVER()
{
	//ici faudrait set ip et port 


}

TCP_SERVER::INIT()
{
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0)
        std::cout << "ERROR opening socket" << std::endl; //refaire la gestion d'erreurs

    bzero((char*)&serv_addr, sizeof(serv_addr));
    
    portno = atoi(argv[1]);
    
    serv_addr.sin_family = AF_INET;
    
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    
    serv_addr.sin_port = htons(portno);
    
    if (bind(sockfd, (struct sockaddr*)&serv_addr,sizeof(serv_addr)) < 0)
        std::cout << "ERROR on binding" << std::endl;

    listen(sockfd, 5); //on passe le socket en écoute
    clilen = sizeof(cli_addr);
    
    newsockfd = accept(sockfd,(struct sockaddr*)&cli_addr,&clilen);
    if (newsockfd < 0)
        std::cout << "ERROR on accept" << std::endl;

}

std::string TCP_SERVER::READ()
{
    bzero(buffer, 256); //set toute les valeurs du buffer a zero
    
    n = read(newsockfd, buffer, 255);
    if (n < 0) 
        std::cout << "ERROR reading from socket" << std::endl;
    
    std::cout << "Trame recu : " + std::to_string(buffer) << std::endl; //trouver un moyen de passer le buffer en string 

    return std::string(std::to_string(buffer));
}

void TCP_SERVER::WRITE(std::string message)
{
    //remplacer i got your message par le string
    n = write(newsockfd, "I got your message", 18);
    if (n < 0) 
        std::cout << "ERROR writing to socket" << std::endl;
}

void TCP_SERVER::CLOSE()
{
    close(newsockfd);

    close(sockfd);
}
