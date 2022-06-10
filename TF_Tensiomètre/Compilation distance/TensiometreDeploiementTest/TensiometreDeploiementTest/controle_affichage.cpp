#include "controle_affichage.h"

int controle_affichage::calcul_pos_tile(int chiffre)
{
	int start = 2;
	
		for  (int i = 0; i < chiffre; i++)
		{
			start = start + 116;
		}

	return start;
};

controle_affichage::controle_affichage()
{
	window = SDL_CreateWindow("Tensiometre", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 320, 480, SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL); //dimension a adapter + flag a expliquer 
	if (window == nullptr)
		throw("window");
	
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED); //ajouter flag d'acceleration materielle 
	if (renderer == nullptr)
		throw("renderer");	
};

void controle_affichage::chargement_Textures()
{
	surface = SDL_LoadBMP("/home/pi/projects/TensiometreDeploiementTest/assets/background.bmp"); //on charge l'image dans la surface (a ne faire qu'une fois l'ors de l'init
	if (surface == nullptr)
		throw ("erreurFichier");

	background = SDL_CreateTextureFromSurface(renderer, surface);
	SDL_FreeSurface(surface);

	surface = SDL_LoadBMP("/home/pi/projects/TensiometreDeploiementTest/assets/FullChiffre.bmp"); //on charge l'image dans la surface (a ne faire qu'une fois l'ors de l'init
	if (surface == nullptr)
		throw ("erreurFichier");

	tiledmap = SDL_CreateTextureFromSurface(renderer, surface);
	SDL_FreeSurface(surface);

	surface = SDL_LoadBMP("/home/pi/projects/TensiometreDeploiementTest/assets/attenteLogo.bmp"); //on charge l'image dans la surface (a ne faire qu'une fois l'ors de l'init
	if (surface == nullptr)
		throw ("erreurFichier");

	attenteLogo = SDL_CreateTextureFromSurface(renderer, surface);
	SDL_FreeSurface(surface);

	surface = SDL_LoadBMP("/home/pi/projects/TensiometreDeploiementTest/assets/Logoconnecte.bmp"); //on charge l'image dans la surface (a ne faire qu'une fois l'ors de l'init
	if (surface == nullptr)
		throw ("erreurFichier");

	connectelogo = SDL_CreateTextureFromSurface(renderer, surface);
	SDL_FreeSurface(surface);

	surface = SDL_LoadBMP("/home/pi/projects/TensiometreDeploiementTest/assets/lancmentMesure.bmp"); //on charge l'image dans la surface (a ne faire qu'une fois l'ors de l'init
	if (surface == nullptr)
		throw ("erreurFichier");

	lancementLogo = SDL_CreateTextureFromSurface(renderer, surface);
	SDL_FreeSurface(surface);

	surface = SDL_LoadBMP("/home/pi/projects/TensiometreDeploiementTest/assets/erreur.bmp"); //on charge l'image dans la surface (a ne faire qu'une fois l'ors de l'init
	if (surface == nullptr)
		throw ("erreurFichier");

	erreurLogo = SDL_CreateTextureFromSurface(renderer, surface);
	SDL_FreeSurface(surface);


}

void controle_affichage::waiting_texture(controle_affichage::version vers)
{
	switch (vers) //ajouter si y 'a l'erreur 
	{
	
	case controle_affichage::version::attente:

		SDL_GetRenderDrawColor(renderer, 0, &a, 0, &a); //declarer a ici 

		SDL_RenderClear(renderer);

		SDL_RenderCopy(renderer, attenteLogo, NULL, &rectangleBack);

		SDL_RenderPresent(renderer); //rend l'image

		break;

	case controle_affichage::version::connecte:

		SDL_GetRenderDrawColor(renderer, 0, &a, 0, &a); //declarer a ici 

		SDL_RenderClear(renderer);

		SDL_RenderCopy(renderer, connectelogo, NULL, &rectangleBack);

		SDL_RenderPresent(renderer); //rend l'image

		break;

	case controle_affichage::version::lancement:

		SDL_GetRenderDrawColor(renderer, 0, &a, 0, &a); //declarer a ici 

		SDL_RenderClear(renderer);

		SDL_RenderCopy(renderer, lancementLogo, NULL, &rectangleBack);

		SDL_RenderPresent(renderer); //rend l'image

		break;

	default:
		break;
	}	
};

void controle_affichage::affichage(int sys, int dia, int bpm)
{
	SDL_GetRenderDrawColor(renderer, 0, &a, 0, &a);

	SDL_RenderClear(renderer);

	SDL_RenderCopy(renderer, background, NULL, &rectangleBack);

	SDL_Rect src2{ 2, 0, 118, 178 }; //on crop dans l'image chargé en texture / ce qu'il faut modifier pour afficher des chiffres differents // =0 ici
	
	int a = 0;
	int tilePos = 0;

	if (sys < 10)
		a = 1;
	if (sys >= 10 && sys < 100)
		a = 2;
	if (sys >= 100)
		a = 3;

	switch (a)
	{
	default:

		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle11); //tildemap
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle12); //tildemap
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle13); //tildemap
		break;
	
	case 1:
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle11); //tildemap
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle12); //tildemap
		
		tilePos = calcul_pos_tile(sys); //onc calcul la position du chiffre
		src2 = { tilePos, 0, 118, 178 };
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle13); //tildemap
		src2 = { 2, 0, 118, 178 }; //on remet a zero
		break;

	case 2:
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle11); //tildemap
		a = sys % 10;
		tilePos = calcul_pos_tile(a); //onc calcul la position du chiffre
		src2 = { tilePos, 0, 118, 178 };
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle13); //tildemap
		src2 = { 2, 0, 118, 178 }; //on remet a zero
		
		tilePos = calcul_pos_tile((sys - a) / 10); //onc calcul la position du chiffre
		src2 = { tilePos, 0, 118, 178 };
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle12); //tildemap
		src2 = { 2, 0, 118, 178 }; //on remet a zero

		break;

	case 3:
		a = sys % 10;
		tilePos = calcul_pos_tile(a); //onc calcul la position du chiffre
		src2 = { tilePos, 0, 118, 178 };
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle13); //tildemap
		src2 = { 2, 0, 118, 178 }; //on remet a zero

		sys = (sys - a) / 10;
		a = sys % 10;
		tilePos = calcul_pos_tile(a); //onc calcul la position du chiffre
		src2 = { tilePos, 0, 118, 178 };
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle12); //tildemap
		src2 = { 2, 0, 118, 178 }; //on remet a zero

		sys = (sys - a) / 10;
		a = sys % 10;
		tilePos = calcul_pos_tile(a); //onc calcul la position du chiffre
		src2 = { tilePos, 0, 118, 178 };
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle11); //tildemap
		src2 = { 2, 0, 118, 178 }; //on remet a zero

		break;
	}

	a = 0; 

	if (dia < 10)
		a = 1;
	if (dia >= 10 && sys < 100)
		a = 2;
	if (dia >= 100)
		a = 3;

	switch (a)
	{
	default:

		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle21); //tildemap
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle22); //tildemap
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle23); //tildemap
		break;

	case 1:
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle21); //tildemap
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle22); //tildemap

		tilePos = calcul_pos_tile(dia); //onc calcul la position du chiffre
		src2 = { tilePos, 0, 118, 178 };
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle23); //tildemap
		src2 = { 2, 0, 118, 178 }; //on remet a zero
		break;

	case 2:
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle21); //tildemap
		a = dia % 10;
		tilePos = calcul_pos_tile(a); //onc calcul la position du chiffre
		src2 = { tilePos, 0, 118, 178 };
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle23); //tildemap
		src2 = { 2, 0, 118, 178 }; //on remet a zero

		tilePos = calcul_pos_tile((dia - a) / 10); //onc calcul la position du chiffre
		src2 = { tilePos, 0, 118, 178 };
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle22); //tildemap
		src2 = { 2, 0, 118, 178 }; //on remet a zero

		break;

	case 3:
		a = dia % 10;
		tilePos = calcul_pos_tile(a); //onc calcul la position du chiffre
		src2 = { tilePos, 0, 118, 178 };
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle23); //tildemap
		src2 = { 2, 0, 118, 178 }; //on remet a zero

		dia = (dia - a) / 10;
		a = dia % 10;
		tilePos = calcul_pos_tile(a); //onc calcul la position du chiffre
		src2 = { tilePos, 0, 118, 178 };
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle22); //tildemap
		src2 = { 2, 0, 118, 178 }; //on remet a zero

		dia = (dia - a) / 10;
		a = dia % 10;
		tilePos = calcul_pos_tile(a); //onc calcul la position du chiffre
		src2 = { tilePos, 0, 118, 178 };
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle21); //tildemap
		src2 = { 2, 0, 118, 178 }; //on remet a zero

		break;
	}

	a = 0;
	
	if (bpm < 10)
		a = 1;
	if (bpm >= 10 && sys < 100)
		a = 2;
	if (bpm >= 100)
		a = 3;

	switch (a)
	{
	default:

		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle31); //tildemap
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle32); //tildemap
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle33); //tildemap
		break;

	case 1:
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle31); //tildemap
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle32); //tildemap

		tilePos = calcul_pos_tile(bpm); //onc calcul la position du chiffre
		src2 = { tilePos, 0, 118, 178 };
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle33); //tildemap
		src2 = { 2, 0, 118, 178 }; //on remet a zero
		break;

	case 2:
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle31); //tildemap
		a = bpm % 10;
		tilePos = calcul_pos_tile(a); //onc calcul la position du chiffre
		src2 = { tilePos, 0, 118, 178 };
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle33); //tildemap
		src2 = { 2, 0, 118, 178 }; //on remet a zero

		tilePos = calcul_pos_tile((bpm - a) / 10); //onc calcul la position du chiffre
		src2 = { tilePos, 0, 118, 178 };
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle32); //tildemap
		src2 = { 2, 0, 118, 178 }; //on remet a zero

		break;

	case 3:
		a = bpm % 10;
		tilePos = calcul_pos_tile(a); //onc calcul la position du chiffre
		src2 = { tilePos, 0, 118, 178 };
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle33); //tildemap
		src2 = { 2, 0, 118, 178 }; //on remet a zero

		bpm = (bpm - a) / 10;
		a = bpm % 10;
		tilePos = calcul_pos_tile(a); //onc calcul la position du chiffre
		src2 = { tilePos, 0, 118, 178 };
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle32); //tildemap
		src2 = { 2, 0, 118, 178 }; //on remet a zero

		bpm = (bpm - a) / 10;
		a = bpm % 10;
		tilePos = calcul_pos_tile(a); //onc calcul la position du chiffre
		src2 = { tilePos, 0, 118, 178 };
		SDL_RenderCopy(renderer, tiledmap, &src2, &rectangle31); //tildemap
		src2 = { 2, 0, 118, 178 }; //on remet a zero

		break;
	}

	a = 0;

	SDL_RenderPresent(renderer); //rend l'image
};

controle_affichage::~controle_affichage()
{
	SDL_DestroyRenderer(renderer); SDL_DestroyWindow(window);
	SDL_Quit();
};




