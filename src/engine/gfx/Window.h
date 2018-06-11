#ifndef _WINDOW_H_
#define _WINDOW_H_

#include <SDL.h>
#include <string>

class Window {
private:
    int _width;
    int _height;
    std::string _title;
    SDL_Window* _window;

public:
    Window(std::string title, int w, int h, Uint32 = SDL_WINDOW_OPENGL);
    ~Window();
    SDL_Renderer* createRenderer(Uint32 = SDL_RENDERER_ACCELERATED, int i = -1) const;
};

#endif // _WINDOW_H_
