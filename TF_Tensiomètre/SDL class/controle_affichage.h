#pragma once
//ifndef pour linux

#include "SDL.h"
//faire une class mère plus générale ouis faire une classe dérivée pour afficher sys dia bpm directement 


class controle_affichage
{
	

protected: 

	SDL_Window* window = nullptr; 

	SDL_Renderer* renderer = nullptr;

	SDL_Surface* surface = nullptr;

	SDL_Texture* background = nullptr;
	SDL_Texture* tiledmap = nullptr;

	SDL_Rect m_sourceRectangle; //background
	SDL_Rect m_destinationRectangle; 

	SDL_Rect rectangle11{ 165,104,85,120 };
	SDL_Rect rectangle12{ 255,104,85,120 };
	SDL_Rect rectangle13{ 345,104,90,120 };

	SDL_Rect rectangle21{ 165,280,85,120 };
	SDL_Rect rectangle22{ 255,280,85,120 };
	SDL_Rect rectangle23{ 345,280,90,120 };

	SDL_Rect rectangle31{ 320,455,37,60 };
	SDL_Rect rectangle32{ 359,455,37,60 };
	SDL_Rect rectangle33{ 398,455,37,60 };

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

