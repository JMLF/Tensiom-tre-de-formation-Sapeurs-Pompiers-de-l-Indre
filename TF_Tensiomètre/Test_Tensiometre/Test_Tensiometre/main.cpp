//https://pub.phyks.me/sdz/sdz/ile-mapping.html
//utiliser une tiled map pour afficher les constantes 
//https://openclassrooms.com/forum/sujet/sdl2-et-cours-sur-le-til-mapping
//https://www.youtube.com/watch?v=FQOiFUl93lI
//attention a la difference entre sdl et sdl2 
//


#include "SDL.h"
//#include "../../../../Tensiom-tre-de-formation-Sapeurs-Pompiers-de-l-Indre/SDL2_VS_DEVKIT/include/"

int main(int argc, char* argv[])
{
	
	if (SDL_Init(SDL_INIT_EVERYTHING) >= 0) //verifie que l'init s'est bien passé 
	{
	
		SDL_Window* window = SDL_CreateWindow("Tensiometre", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 731, 1109, SDL_WINDOW_RESIZABLE); //on crée la fenetre qu'on met dans un pointeur 
		SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
		

		SDL_Rect m_sourceRectangle;
		SDL_Rect m_destinationRectangle;
		SDL_Texture* texture; //on creer une texture pour l'image 
		SDL_Surface* image = NULL; //pour l'image, on crer une surface
	
		//chiffre ne marche pas 
	//	SDL_Texture* texture0; //chiffre 
	//	SDL_Surface* image0 = NULL; //chiffre

		image = SDL_LoadBMP("assets/tensiometre-ecran-lire1.bmp"); //on charge l'image dans la surface (a ne faire qu'une fois l'ors de l'init
		if (image == NULL)
			return -1;

		texture = SDL_CreateTextureFromSurface(renderer, image); 
		SDL_FreeSurface(image);

	//	image = SDL_LoadBMP("assets/FullChiffre.bmp"); //chiffre
	//	if (image == NULL)//
	//		return -1;//

		SDL_QueryTexture(texture, NULL, NULL, &m_sourceRectangle.w, &m_sourceRectangle.h);

		m_destinationRectangle.x = m_sourceRectangle.x = 0;
		m_destinationRectangle.y = m_sourceRectangle.y = 0;
		m_destinationRectangle.w = m_sourceRectangle.w;
		m_destinationRectangle.h = m_sourceRectangle.h;

	//	texture0 = SDL_CreateTextureFromSurface(renderer, image0);//chiffre
	//	SDL_FreeSurface(image0);//chiffre
	//	SDL_QueryTexture(texture0, NULL, NULL, &m_sourceRectangle.w, &m_sourceRectangle.h);//chiffre


		Uint8 a = 255;
		SDL_GetRenderDrawColor(renderer,0,&a,0,&a);

		SDL_RenderClear(renderer);
		
		SDL_RenderCopy(renderer, texture, &m_sourceRectangle, &m_destinationRectangle);
	//	SDL_RenderCopy(renderer, texture0, &m_sourceRectangle, &m_destinationRectangle);//chiffre

		SDL_RenderPresent(renderer);

		SDL_Delay(10000);

		SDL_Quit();
		return 0;
	}
	
	return 1;
}