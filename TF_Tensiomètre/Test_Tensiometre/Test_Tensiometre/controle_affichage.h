#ifndef _controleAffichage_
#define _controleAffichage_


#include "SDL.h"
#include <iostream>
//faire une class mère plus générale ouis faire une classe dérivée pour afficher sys dia bpm directement 


class controle_affichage
{
	

protected: 

	SDL_Window* window = nullptr; 

	SDL_Renderer* renderer = nullptr;

	SDL_Surface* surface = nullptr;

	SDL_Texture* background = nullptr;
	SDL_Texture* tiledmap = nullptr;

	SDL_Rect m_sourceRectangle; //rectangle null
	//SDL_Rect m_destinationRectangle; 

	SDL_Rect rectangleBack{ 0,0,320,480 }; //background

	SDL_Rect rectangle11{ 100,104,70,105 };
	SDL_Rect rectangle12{ 178,104,70,105 };
	SDL_Rect rectangle13{ 250,104,70,105 };

	SDL_Rect rectangle21{ 100,254,70,105 };
	SDL_Rect rectangle22{ 178,254,70,105 };
	SDL_Rect rectangle23{ 250,254,70,105 };

	SDL_Rect rectangle31{ 222,410,27,50 };
	SDL_Rect rectangle32{ 253,410,27,50 };
	SDL_Rect rectangle33{ 290,410,27,50 };

	Uint8 a = 255; //pour les couleurs 

	int calcul_pos_tile(int chiffre);

public: 

	SDL_Event events; //evenement clavier sourit etc
	
	bool isOpen = true;

	controle_affichage();

	void chargement_Textures();

	void affichage(int sys, int dia, int bpm);

	~controle_affichage();





};

#endif _controleAffichage_