

#include <iostream>
#include "TCP_SERVER.h"

int main()
{
    std::cout << "Demarrage serveur\n";
    TCP_SERVER serv; 
    serv.INIT(); //bloquant donc pas besoin de boucle 
    std::string trameRecu = serv.READ();
    std::cout << trameRecu << std::endl;
    serv.CLOSE();
    return 0;
}

