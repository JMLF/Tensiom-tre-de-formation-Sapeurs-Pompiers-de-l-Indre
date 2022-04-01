//build line: g++ -Wall -o "%e" "%f" "controle_affichage.h" "controle_affichage.cpp" "TCP_SERVER.h" "TCP_SERVER.cpp" -lSDL2 -lgpiod


//include linux
#include "controle_affichage.h"
#include <iostream> //pas utile sauf pour le debug
#include <string>
#include "TCP_SERVER.h"
#include <gpiod.h>
#include <unistd.h>

//ajouter sdl image

int main(int argc, char* argv[])
{

	/*
		struct  gpiod_chip* gpiochip;
		struct  gpiod_line* sortie12;
		struct  gpiod_line* sortie22;
		struct gpiod_line* entree5;

		
		gpiochip = gpiod_chip_open("/dev/gpiochip0");

		
		sortie12 = gpiod_chip_get_line(gpiochip, 12); //line 12
		sortie22 = gpiod_chip_get_line(gpiochip, 22); //line22
		entree5 = gpiod_chip_get_line(gpiochip, 5); //line 5
	

		gpiod_line_request_output(sortie12, "sortie12", 0); //line,nom,0=normal/1=inversée
		gpiod_line_request_output(sortie22, "sortie22", 0);

		
		gpiod_line_request_input(entree5, "entree5");
	*/

		

	
		

		
		TCP_SERVER server;
		controle_affichage sdl;

		sdl.chargement_Textures();
		server.INIT(); //bloquant
		
		int constante1(0);
		int constante2(0);
		int constante3(0);
		std::string reception;
		
		while (sdl.isOpen == true)
		{
			
			
			sdl.affichage(constante1, constante2, constante3);
			
			reception = server.READ(); //bloquant
			constante1 = stoi(reception.substr(0, 3));
			constante2 = stoi(reception.substr(4, 3));
			constante3 = stoi(reception.substr(8, 3));

			SDL_Delay(50);
		}
		
		//gpiod_line_release(sortie12);
		//gpiod_line_release(sortie22);
		//gpiod_line_release(entree5);

		//gpiod_chip_close(gpiochip);
		sdl.~controle_affichage();
		return 0;
	
}