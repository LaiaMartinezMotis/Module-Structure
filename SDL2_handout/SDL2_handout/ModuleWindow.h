#ifndef __ModuleWindow_H__
#define __ModuleWindow_H__

// TODO 1: Create the declaration of ModuleWindow class
struct SDL_Window;
class WindowModule : public Module {
public:
	bool Init();
	bool CleanUp();
public: 
	SDL_Window*window = nullptr;
	SDL_Renderer*renderer=nullptr
};
#endif // __ModuleWindow_H__