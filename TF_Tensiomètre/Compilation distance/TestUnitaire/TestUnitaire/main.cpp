//3 tests unitaires 


#include "controle_affichage.h"
#include <unistd.h> 

/*
int main(void)
{
	controle_affichage SDL; //on crée un objet de notre classe 

	SDL.chargement_Textures(); //on charge les textures (cette méthode gère seul ses erreurs)

	 
	sleep(1);
	for (int i = 0; i < 999; i++) //on crée une boucle de 999 itérations
	{
		SDL.affichage(i, i, i); //on affiche i en guise de variables sys dia bpm
		sleep(1);
	}

	
	return 0;
}
*/

/*
#include "TCP_SERVER.h"
#include <iostream>

int main(void)
{
	TCP_SERVER server;
	server.INIT();

	std::string message = server.READ();
	std::cout << message << std::endl;
	
	sleep(7);
	return 0;
}
*/


#include <iostream>
#include <gpiod.hpp>
#include <unistd.h>

int main(void)
{
	gpiod::chip chip;
	gpiod::line line6;

	int value;

	chip.open("gpiochip0");
	line6 = chip.get_line(6);
	
	gpiod::line_request lineInput{ "ButonTest",gpiod::line_request::DIRECTION_INPUT,0 };
	line6.request(lineInput, 0);

	while(true)
	{
		value = line6.get_value();
		std::cout << value << std::endl;
		sleep(1);
	}
}
