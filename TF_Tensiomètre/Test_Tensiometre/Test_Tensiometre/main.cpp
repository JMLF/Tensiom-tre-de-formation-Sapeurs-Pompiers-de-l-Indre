#include "SDL.h"

int main(int argc, char* argv[])
{
	
	if (SDL_Init(SDL_INIT_EVERYTHING) >= 0) //verifie que l'init s'est bien passé 
	{
		SDL_Window* window = SDL_CreateWindow("Tensiometre", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN); //on crée la fenetre qu'on met dans un pointeur 
		SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

	
		SDL_GetRenderDrawColor(renderer,0,0,0,0);

		SDL_RenderClear(renderer);

		SDL_RenderPresent(renderer);

		SDL_Delay(10000);

		SDL_Quit();
		return 0;
	}
	
	return -1;
}