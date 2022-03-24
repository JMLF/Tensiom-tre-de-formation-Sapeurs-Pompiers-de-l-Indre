//build line: g++ -Wall -o "%e" "%f" "controle_affichage.h" "controle_affichage.cpp" "TCP_SERVER.h" "TCP_SERVER.cpp" -lSDL2 -lgpiod


//include linux
#include "controle_affichage.h"
#include <iostream> //pas utile sauf pour le debug
#include <string>



//ajouter sdl image

int main(int argc, char* argv[])
{
		

		controle_affichage sdl;

		sdl.chargement_Textures();

		
		int a(0), b(0), c(0);
		
		while (sdl.isOpen == true)
		{
			
			a++;
			b++;
			c++;

			while (SDL_PollEvent(&sdl.events))
			{
				switch (sdl.events.type)
				{

				case SDL_QUIT: //croix rouge
					sdl.isOpen = false;
					break;
				
				}
			}
			
			sdl.affichage(a, b, c);
			SDL_Delay(50);
		}
		
		
		sdl.~controle_affichage();
		return 0;
	
}