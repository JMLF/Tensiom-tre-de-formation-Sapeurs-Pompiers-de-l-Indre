
#ifndef _controleAffichage_
#define _controleAffichage_


#include "SDL2/SDL.h"
#include <iostream>
//faire une class mère plus générale ouis faire une classe dérivée pour afficher sys dia bpm directement 


/// <summary>
/// 
/// </summary>
class controle_affichage
{
	
protected: 

	SDL_Window* window = nullptr;  ///<

	SDL_Renderer* renderer = nullptr; ///<

	SDL_Surface* surface = nullptr; ///<

	SDL_Texture* background = nullptr;///<
	SDL_Texture* attenteLogo = nullptr;///<
	SDL_Texture* tiledmap = nullptr;///<
	SDL_Texture* connectelogo = nullptr;///<
	SDL_Texture* lancementLogo = nullptr;///<
	SDL_Texture* erreurLogo = nullptr;///<

	SDL_Rect m_sourceRectangle;///< Rectangle null pour crop
	 
	SDL_Rect const rectangleBack{ 0,0,320,480 };///< background

	SDL_Rect rectangle11{ 100,104,70,105 };
	SDL_Rect rectangle12{ 175,104,70,105 };
	SDL_Rect rectangle13{ 250,104,70,105 };

	SDL_Rect rectangle21{ 100,254,70,105 };
	SDL_Rect rectangle22{ 175,254,70,105 };
	SDL_Rect rectangle23{ 250,254,70,105 };

	SDL_Rect rectangle31{ 225,410,27,50 };
	SDL_Rect rectangle32{ 257,410,27,50 };
	SDL_Rect rectangle33{ 290,410,27,50 };

	Uint8 a = 255;///< Pour les couleurs 

	/// <summary>
	/// 
	/// </summary>
	/// <param name="chiffre"></param>
	/// <returns></returns>
	int calcul_pos_tile(int chiffre);

	

public: 
	
	enum class version {attente,connecte,lancement};
	
	/// <summary>
	/// Variable SDL_Event
	/// </summary>
	SDL_Event events; //evenement clavier sourit etc
	
	bool isOpen = true;

	/// <summary>
	/// Constructeur (par défaut) de la classe 
	/// </summary>
	controle_affichage();

	/// <summary>
	/// 
	/// </summary>
	void chargement_Textures();

	/// <summary>
	/// 
	/// </summary>
	void waiting_texture(controle_affichage::version vers);

	/// <summary>
	/// 
	/// </summary>
	/// <param name="sys"></param>
	/// <param name="dia"></param>
	/// <param name="bpm"></param>
	void affichage(int sys, int dia, int bpm);
	
	///
	///
	/// 
	~controle_affichage();

};

#endif //_controleAffichage_