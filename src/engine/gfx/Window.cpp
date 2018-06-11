#include "Window.h"

Window::Window(std::string title, int width, int height, Uint32 flags)
    : _title(title), _width(width), _height(height) {
        _window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED, width, height, flags);
    }

Window::~Window() {
    SDL_DestroyWindow(_window);
}

SDL_Renderer* Window::createRenderer(Uint32 flags, int index) const {
    return SDL_CreateRenderer(_window, index, flags);
}
