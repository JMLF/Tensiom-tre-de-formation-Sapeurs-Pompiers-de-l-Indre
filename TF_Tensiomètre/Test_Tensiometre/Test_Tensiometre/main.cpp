//build line: g++ -Wall -o "%e" "%f" "controle_affichage.h" "controle_affichage.cpp" "TCP_SERVER.h" "TCP_SERVER.cpp" -lSDL2


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

		TCP_SERVER server;

		server.INIT();

		std::string reception = server.READ(); //bloquant

		controle_affichage sdl;

		sdl.chargement_Textures();

		
		int constantes;
		
		while (sdl.isOpen == true)
		{
			
			

			while (SDL_PollEvent(&sdl.events))
			{
				switch (sdl.events.type)
				{

				case SDL_QUIT: //croix rouge
					sdl.isOpen = false;
					break;
				
				}
			}
			
			sdl.affichage(9, 9, 9);
			SDL_Delay(50);
		}
		
		gpiod_line_release(sortie12);
		gpiod_line_release(sortie22);
		gpiod_line_release(entree5);

		gpiod_chip_close(gpiochip);
		sdl.~controle_affichage();
		return 0;
	
}