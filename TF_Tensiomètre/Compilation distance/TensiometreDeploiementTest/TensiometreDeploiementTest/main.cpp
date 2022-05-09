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
*		faire des boucles while (détacher affichage et gestion du bouton dans un thread  ) ecouter en boucle la ligne gpio du bouton 
*		dasn le main un while pour recommencer les mesures si besoin + faire une fonction 
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


/* //fonction a passer dans le thread 
void simuANDaffichage(std::string reception) 
{
	
	int varBoucle(0);
	while (varBoucle != 0 ^ boolrandom != true)
	{
		value = line5.get_value();
		if (value == 0)
			varBoucle = 1;
		usleep(200);
	}

	line12.set_value(1);
	line22.set_value(1);
	for (int i = 0; i < 15; i++)
	{
		sdl.affichage(i * 4, i * 5, i * 3);
		sleep(1);
	}
	line12.set_value(0);
	sleep(2);
	line22.set_value(0);


	constante1 = stoi(reception.substr(0, 3));
	constante2 = stoi(reception.substr(4, 3));
	constante3 = stoi(reception.substr(8, 3));

	sdl.affichage(constante1, constante2, constante3);



}
*/


int main(int argc, char* argv[])
{
	
//-------------- gpiod class / declaration et réservation des lines

	gpiod::chip chip;

	chip.open("gpiochip0");

	auto line5 = chip.get_line(6);
	auto line12 = chip.get_line(12);
	auto line22 = chip.get_line(13);


	gpiod::line_request lineInput{ "Button",gpiod::line_request::DIRECTION_INPUT,0 };
	gpiod::line_request lineOutput{ "Button",gpiod::line_request::DIRECTION_OUTPUT,0 };


	line5.request(lineInput, 0);
	line12.request(lineOutput, 0);
	line22.request(lineOutput, 0);

//---------------

		

		TCP_SERVER server;

		controle_affichage sdl;

		sdl.chargement_Textures();

		sdl.waiting_texture(); //affichage de la page d'attente 
		
		server.INIT(); //bloquant
		
		auto value = line5.get_value(); // declaration de value + on lit la valeur de line5

		int constante1(0); //sys
		int constante2(0); //dia
		int constante3(0); //bpm

		std::string reception; //string de la reception tcp
		std::string erreur;
		bool erreur = false;

		reception = server.READ(); //bloquant + mettre un texture bien reçu après 

		//erreur = server.READ();
		//if (erreur == "E")
		//{
		//	erreur = true;
		//}

		//constante1 = 999;
		//constante2 = 999;
		//constante3 = 999;
		//sdl.affichage(constante1, constante2, constante3);

		int waiter(0); 
		
		while (waiter == 0)
		{
			value = line5.get_value();
			if (value == 0) 
			{
				line12.set_value(1);
				line22.set_value(1);
				for (int i = 0; i < 15; i++)
				{
					sdl.affichage(i*4, i*5, i*3);
					sleep(1);
				}
				line12.set_value(0);
				sleep(2);
				line22.set_value(0);
				waiter = 1;
			}
		}
		
		while (sdl.isOpen == true)
		{
			
			
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
			sdl.affichage(constante1, constante2, constante3);
			reception = server.READ(); //bloquant

			SDL_Delay(10); //delay pas utile 
		}
		

		line12.release();
		line22.release();
		line5.release();

		sdl.~controle_affichage(); //ferme les sockets

		return 0;
	
}