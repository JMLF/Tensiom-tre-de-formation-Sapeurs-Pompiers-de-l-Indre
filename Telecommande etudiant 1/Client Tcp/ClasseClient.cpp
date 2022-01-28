#include "ClasseClient.h"

bool clientTcp::connexion(std::string IpServeur, unsigned int port)
{
    struct sockaddr_in adr_serveur;
    int ids_client = socket(AF_INET, SOCK_STREAM, 0);
    if (ids_client < 0)
    {
        return false;
    }
    this->ids_client = ids_client;
    

    adr_serveur.sin_family = AF_INET; // Domaine d'@
    adr_serveur.sin_port = htons(port);// N° du port
    adr_serveur.sin_addr.s_addr = inet_addr(IpServeur.c_str());
    // @IP du serveur                                                                       	   int res_connexion = connect(ids_client,
    int res_connexion = connect(ids_client, (struct sockaddr*)&adr_serveur, sizeof(adr_serveur));
    if (res_connexion < 0)
    {
        return false;
    }
    return true;
}

bool clientTcp::envoyer(std::string data)
{
    if (!send(ids_client, data.c_str(), data.size(), 0)) return false;
    return true;
}

void clientTcp::fermer()
{
    close(ids_client);
}
