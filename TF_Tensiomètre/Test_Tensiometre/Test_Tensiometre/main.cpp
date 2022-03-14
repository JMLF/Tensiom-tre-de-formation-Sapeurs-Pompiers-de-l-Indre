//https://pub.phyks.me/sdz/sdz/ile-mapping.html
//utiliser une tiled map pour afficher les constantes 
//https://openclassrooms.com/forum/sujet/sdl2-et-cours-sur-le-til-mapping
//https://www.youtube.com/watch?v=FQOiFUl93lI
//attention a la difference entre sdl et sdl2 
//https://devopssec.fr/article/bases-fondamentales-de-laffichage-graphique-sdl2 //le meilleur imo


#include "SDL.h"
#include "controle_affichage.h"
//ajouter sdl image

int main(int argc, char* argv[])
{
	

		controle_affichage sdl;

		sdl.chargement_Textures();

		

		
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
			
			sdl.affichage(99, 7, 9);

		}
		
		
		sdl.~controle_affichage();
		return 0;
	
}