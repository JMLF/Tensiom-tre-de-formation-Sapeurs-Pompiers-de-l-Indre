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
		//throw exception

	background = SDL_CreateTextureFromSurface(renderer, surface);
	SDL_FreeSurface(surface);

	surface = SDL_LoadBMP("assets/FullChiffre.bmp"); //on charge l'image dans la surface (a ne faire qu'une fois l'ors de l'init
	if (surface == NULL)
		//throw except

	tiledmap = SDL_CreateTextureFromSurface(renderer, surface);
	SDL_FreeSurface(surface);

	SDL_QueryTexture(background, NULL, NULL, &m_sourceRectangle.w, &m_sourceRectangle.h);
	SDL_QueryTexture(tiledmap, NULL, NULL, &m_sourceRectangle.w, &m_sourceRectangle.h);

};

void controle_affichage::affichage(int sys, int dia, int bpm)
{


};



