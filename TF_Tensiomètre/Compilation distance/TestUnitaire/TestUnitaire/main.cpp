//Test de la classe SDL

#include "controle_affichage.h"
#include <unistd.h> //????

int main(void)
{
	controle_affichage SDL; //on crée un objet de notre classe 

	SDL.chargement_Textures(); //on charge les textures (cette méthode gère seul ses erreurs)

	SDL.waiting_texture(); //on lance la page d'attente 
	sleep(5);
	for (int i = 0; i < 999; i++) //on crée une boucle de 100 itérations
	{
		SDL.affichage(i, i, i); //on affiche i en guise de variables sys dia bpm
		sleep(1);
	}


	
	return 0;
}

