#include "SDL.h"
//#include "SDL2_image.h"
//#include "../../../../Tensiom-tre-de-formation-Sapeurs-Pompiers-de-l-Indre/SDL2_VS_DEVKIT/include/"

int main(int argc, char* argv[])
{
	
	if (SDL_Init(SDL_INIT_EVERYTHING) >= 0) //verifie que l'init s'est bien passé 
	{
		
		SDL_Window* window = SDL_CreateWindow("Tensiometre", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_FULLSCREEN); //on crée la fenetre qu'on met dans un pointeur 
		SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
		
		SDL_Texture* texture; //on creer une texture pour l'image 
		SDL_Surface* image = NULL; //pour l'image, on crer une surface
		
		image = SDL_LoadBMP("tensiometre-ecran-lire"); //on charge l'image dans la surface (a ne faire qu'une fois l'ors de l'init
		if (image == NULL)
			return 1;

		texture = SDL_CreateTextureFromSurface(renderer, image); 
		SDL_FreeSurface(image);

		Uint8 a = 255;
		SDL_GetRenderDrawColor(renderer,0,&a,0,&a);

		SDL_RenderClear(renderer);

		SDL_RenderPresent(renderer);

		SDL_Delay(10000);

		SDL_Quit();
		return 0;
	}
	
	return 1;
}