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
#include <gpiod.h>
#include <unistd.h>

int main(int argc, char* argv[])
{

	
		struct  gpiod_chip* gpiochip; //struct pour les ligne gpio 
		struct  gpiod_line* sortie12;
		struct  gpiod_line* sortie22;
		struct gpiod_line* entree5;

		
	//	gpiochip = gpiod_chip_open("/dev/gpiochip0");

		
	//	sortie12 = gpiod_chip_get_line(gpiochip, 12); //line 12
	//	sortie22 = gpiod_chip_get_line(gpiochip, 22); //line22
	//	entree5 = gpiod_chip_get_line(gpiochip, 5); //line 5
	

	//	gpiod_line_request_output(sortie12, "sortie12", 0); //line,nom,0=normal/1=inversée
	//	gpiod_line_request_output(sortie22, "sortie22", 0);

		
	//	gpiod_line_request_input(entree5, "entree5");
	

		
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
		
		//gpiod_line_release(sortie12);
		//gpiod_line_release(sortie22);
		//gpiod_line_release(entree5);

		//gpiod_chip_close(gpiochip);

		sdl.~controle_affichage();

		return 0;
	
}