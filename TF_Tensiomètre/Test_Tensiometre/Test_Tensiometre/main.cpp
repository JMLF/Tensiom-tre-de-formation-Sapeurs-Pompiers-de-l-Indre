//https://pub.phyks.me/sdz/sdz/ile-mapping.html
//utiliser une tiled map pour afficher les constantes 
//https://openclassrooms.com/forum/sujet/sdl2-et-cours-sur-le-til-mapping
//https://www.youtube.com/watch?v=FQOiFUl93lI
//attention a la difference entre sdl et sdl2 
//https://devopssec.fr/article/bases-fondamentales-de-laffichage-graphique-sdl2 //le meilleur imo


#include "SDL.h"
//ajouter sdl image

int main(int argc, char* argv[])
{
	
	if (SDL_Init(SDL_INIT_EVERYTHING) >= 0) //verifie que l'init s'est bien passé 
	{
	
		//utiliser de pref createWindowAndRenderer
		SDL_Window* window = SDL_CreateWindow("Tensiometre", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 450, 535, SDL_WINDOW_RESIZABLE); //on crée la fenetre qu'on met dans un pointeur 
		SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
		

		SDL_Rect m_sourceRectangle;
		SDL_Rect m_destinationRectangle;
		SDL_Texture* texture; //on creer une texture pour l'image 
		SDL_Surface* image = NULL; //pour l'image, on crer une surface
	

		image = SDL_LoadBMP("assets/background.bmp"); //on charge l'image dans la surface (a ne faire qu'une fois l'ors de l'init
		if (image == NULL)
			return -1;

		texture = SDL_CreateTextureFromSurface(renderer, image); 
		SDL_FreeSurface(image);


		SDL_QueryTexture(texture, NULL, NULL, &m_sourceRectangle.w, &m_sourceRectangle.h);

		m_destinationRectangle.x = m_sourceRectangle.x = 0;
		m_destinationRectangle.y = m_sourceRectangle.y = 0;
		m_destinationRectangle.w = m_sourceRectangle.w;
		m_destinationRectangle.h = m_sourceRectangle.h;



		Uint8 a = 255; //pour les couleurs 

		//rectangle pour mettre les chiffres 
		//a mettre dasn un array pour les ajouter tous en meme temps 
		SDL_Rect rectangle11{ 165,104,85,120 };
		SDL_Rect rectangle12{ 255,104,85,120 };
		SDL_Rect rectangle13{ 345,104,90,120 };

		SDL_Rect rectangle21{ 165,280,85,120 };
		SDL_Rect rectangle22{ 255,280,85,120 };
		SDL_Rect rectangle23{ 345,280,90,120 };

		SDL_Rect rectangle31{ 320,455,37,60 };
		SDL_Rect rectangle32{ 359,455,37,60 };
		SDL_Rect rectangle33{ 398,455,37,60 };

		//importation de la tiled map
		SDL_Texture* tiledmap;
		image = SDL_LoadBMP("assets/FullChiffre.bmp"); //on charge l'image dans la surface (a ne faire qu'une fois l'ors de l'init
		if (image == NULL)
			return -1;

		tiledmap = SDL_CreateTextureFromSurface(renderer, image);
		SDL_FreeSurface(image);

		SDL_Rect src{ 0, 0, 0, 0 }; //pour le query texture
		SDL_QueryTexture(tiledmap, NULL, NULL, &src.w, &src.h);
		SDL_Rect src2{ 2, 0, 118, 178 }; //on crop dans l'image chargé en texture 

		//boucle 
		SDL_Event events; //evenement clavier sourit etc
		bool isOpen = true;

		while (isOpen)
		{
			
			while (SDL_PollEvent(&events))
			{
				switch (events.type)
				{

				case SDL_QUIT: //croix rouge
					isOpen = false;
					break;
				
				}
			}
			
			SDL_GetRenderDrawColor(renderer,0,&a,0,&a);

			SDL_RenderClear(renderer);
			
			SDL_RenderCopy(renderer, texture, &m_sourceRectangle, &m_destinationRectangle);

			SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle11); //tildemap

			SDL_RenderDrawRect(renderer, &rectangle11); // utiliser la fonction https://wiki.libsdl.org/SDL_RenderDrawRects
			SDL_RenderDrawRect(renderer, &rectangle12);
			SDL_RenderDrawRect(renderer, &rectangle13);

			SDL_RenderDrawRect(renderer, &rectangle21);
			SDL_RenderDrawRect(renderer, &rectangle22);
			SDL_RenderDrawRect(renderer, &rectangle23);

			SDL_RenderDrawRect(renderer, &rectangle31);
			SDL_RenderDrawRect(renderer, &rectangle32);
			SDL_RenderDrawRect(renderer, &rectangle33);
			
			SDL_RenderPresent(renderer);

		}


		SDL_DestroyRenderer(renderer); SDL_DestroyWindow(window);
		SDL_Quit();
		return 0;
	}
	
	return 1;
}