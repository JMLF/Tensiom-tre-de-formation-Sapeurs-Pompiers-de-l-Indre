

#include <iostream>
#include "TCP_SERVER.h"

int main()
{
    std::cout << "Demarrage serveur\n";
    TCP_SERVER serv; 
    std::string trameRecu;
    serv.INIT(); //bloquant donc pas besoin de boucle 
    do {
        trameRecu = serv.READ();
        std::cout << trameRecu << std::endl;
    } while (trameRecu != "STOP");
    serv.CLOSE();
    return 0;
}

