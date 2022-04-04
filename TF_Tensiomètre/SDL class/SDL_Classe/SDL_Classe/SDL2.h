#ifndef _SDL2_
#define _SDL2_

//#include "SDL2.h" la sdl pas la classe

class SDL2
{


protected:

	//SDL_Window* window;
	//SDL_Renderer* renderer;
	//SDL_event events;


public:

	SDL2();
	
	virtual void LOAD_TEXTURE() = 0;

	virtual void COMPUTE() =0;

	virtual void RENDER() = 0;

	virtual ~SDL2();

};

#endif // !