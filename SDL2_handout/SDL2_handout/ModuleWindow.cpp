#include "SDL/include/SDL.h"
#include "Globals.h"
#include "Application.h"
#include "ModuleWindow.h"


// TODO 2: Init the library and check for possible error
// using SDL_GetError()
bool WindowModule::Init() {
	int var = SDL_Init(SDL_INIT_VIDEO);
	if (var < 0) {
		LOG(SDL_GetError());
		return false;
	window = SDL_CreateWindow(WIN_TITLE, 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT,0);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	}
}

//SDL_RenderClear(renderer);//

bool  WindowModule::CleanUp() {
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit;
	return true;
	}
// TODO 3: pick the width and height and experiment with flags: borderless / fullscreen / resizable,
// then create the window and check for errors

// TODO 4: Finally create a screen surface and keep it as a public variable

// TODO 5: Fill with code CleanUp() method :)

