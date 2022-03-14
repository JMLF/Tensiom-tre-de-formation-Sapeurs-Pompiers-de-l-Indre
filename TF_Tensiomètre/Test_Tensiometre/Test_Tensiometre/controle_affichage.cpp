#include "controle_affichage.h"


controle_affichage::controle_affichage()
{
	window = SDL_CreateWindow("Tensiometre", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 450, 535, SDL_WINDOW_RESIZABLE); //dimension a adapter et mettre flag fullscreen sans bordure
	renderer = SDL_CreateRenderer(window, -1, 0);
};



void controle_affichage::chargement_Textures()
{
	surface = SDL_LoadBMP("assets/background.bmp"); //on charge l'image dans la surface (a ne faire qu'une fois l'ors de l'init
	if (surface == NULL)
		throw ("Prob");

	background = SDL_CreateTextureFromSurface(renderer, surface);
	SDL_FreeSurface(surface);

	surface = SDL_LoadBMP("assets/FullChiffre.bmp"); //on charge l'image dans la surface (a ne faire qu'une fois l'ors de l'init
	if (surface == NULL)
		throw ("prob");

	tiledmap = SDL_CreateTextureFromSurface(renderer, surface);
	SDL_FreeSurface(surface);

	SDL_QueryTexture(background, NULL, NULL, &m_sourceRectangle.w, &m_sourceRectangle.h);
	SDL_QueryTexture(tiledmap, NULL, NULL, &m_sourceRectangle.w, &m_sourceRectangle.h);

};

void controle_affichage::affichage(int sys, int dia, int bpm)
{
	
	m_destinationRectangle.x = m_sourceRectangle.x = 0; //comprend pas pourquoi ça s'affiche pas correctement sans ça 
	m_destinationRectangle.y = m_sourceRectangle.y = 0;
	m_destinationRectangle.w = m_sourceRectangle.w = 450;
	m_destinationRectangle.h = m_sourceRectangle.h = 532;
	

	SDL_Rect src2{ 2, 0, 118, 178 }; //on crop dans l'image chargé en texture 

	SDL_GetRenderDrawColor(renderer, 0, &a, 0, &a);

	SDL_RenderClear(renderer);

	SDL_RenderCopy(renderer, background, &m_sourceRectangle, &m_destinationRectangle);

	SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle11); //tildemap
	SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle12); //tildemap
	SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle13); //tildemap

	SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle21); //tildemap
	SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle22); //tildemap
	SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle23); //tildemap

	SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle31); //tildemap
	SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle32); //tildemap
	SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle33); //tildemap

	
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


};

controle_affichage::~controle_affichage()
{
	SDL_DestroyRenderer(renderer); SDL_DestroyWindow(window);
	SDL_Quit();
};




