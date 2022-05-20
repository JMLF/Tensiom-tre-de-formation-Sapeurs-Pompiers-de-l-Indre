#include <gpiod.hpp>
#include <iostream>
#include <unistd.h>

int main(void)
{
	gpiod::chip chip; //création de l'objet chip
	gpiod::line line6; //création de l'objet line

	int value;

	chip.open("gpiochip0"); //on ouvre la broche gpio0 (il y a 3 broche gpio sur une raspi)

	line6 = chip.get_line(6); //on recherche l'adresse de la ligne 6 du gpio0

	gpiod::line_request lineInput{ "ButtonTest",gpiod::line_request::DIRECTION_INPUT,0 }; //on passe la ligne 6 en input
	line6.request(lineInput, 0); //on passe la ligne 6 en input

	while (true) //boucle / affiche l'état de la ligne 6 gpio tout les 50ms
	{
	value = line6.get_value(); //lecture de la valeur de la ligne 6
	std::cout << "valeur bouton : " + std::to_string(value) << std::endl;
	usleep(50000);
	}
	
	return 0;
}

