/************************************************************************************************************************************************
*	Notes:
*		
*		build line: g++ -Wall main.cpp controle_affichage.cpp TCP_SERVER.cpp -o main -lgpiod -lSDL2
*
*		Toute gestion d'erreur a refaire
* 
*		Ajouter gestion du gpio
* 
* 
* 
* 
* 
* 
*************************************************************************************************************************************************/


//include linux
#include "controle_affichage.h"
#include <iostream> //pas utile sauf pour le debug
#include <string>
#include "TCP_SERVER.h"
#include <gpiod.hpp>
#include <unistd.h>

int main(int argc, char* argv[])
{
	
//-------------- gpiod class / declaration et réservation des lines

	gpiod::chip chip;

	chip.open("gpiochip0");

	auto line5 = chip.get_line(6);
	auto line12 = chip.get_line(12);
	auto line22 = chip.get_line(22);


	gpiod::line_request lineInput{ "Button",gpiod::line_request::DIRECTION_INPUT,0 };
	gpiod::line_request lineOutput{ "Button",gpiod::line_request::DIRECTION_OUTPUT,0 };


	line5.request(lineInput, 0);
	line12.request(lineOutput, 0);
	line22.request(lineOutput, 0);

//---------------

		

		TCP_SERVER server;
		controle_affichage sdl;

		sdl.chargement_Textures();
		server.INIT(); //bloquant
		
		auto value = line5.get_value(); // declaration de value + on lit la valeur de line5

		int constante1(0);
		int constante2(0);
		int constante3(0);
		std::string reception;
		
		while (sdl.isOpen == true)
		{
			
			auto value = line5.get_value();

			sdl.affichage(constante1, constante2, constante3);
			
			reception = server.READ(); //bloquant

			line12.set_value(1);
			line22.set_value(1);
			
			if (reception.length() > 2) 
			{
		
				constante1 = stoi(reception.substr(0, 3));
				constante2 = stoi(reception.substr(4, 3));
				constante3 = stoi(reception.substr(8, 3));

			} //dans le cas ou on ne recoit pas "E"
			else
			{
				constante1 = 999;
				constante2 = 999;
				constante3 = 999;

			}

			SDL_Delay(10); //delay pas utile 
		}
		

		line12.release();
		line22.release();
		line5.release();

		sdl.~controle_affichage();

		return 0;
	
}