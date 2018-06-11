#include "Renderer.h"
#include "Window.h"
#include "../../SDLError.h"
#include "Color.h"

Renderer::Renderer(std::string title, int width, int height) {
    _window = new Window(title, width, height);
    _renderer = _window->createRenderer();

    SDL_SetRenderDrawColor(_renderer, black._r, black._g, black._b, black._a);
}

Renderer::~Renderer() {
    SDL_DestroyRenderer(_renderer);
    delete _window;
}

int Renderer::setViewport(const SDL_Rect* rect) {
    return SDL_RenderSetViewport(_renderer, rect);
}

void Renderer::setDrawColor(const Color& color) {
    if (SDL_SetRenderDrawColor(_renderer, color._r, color._g, color._b, color._a) < 0) {
        throw SDLError();
    }
}

SDL_Texture* Renderer::getTextureFromSurface(SDL_Surface* surface) const {
    SDL_Texture* tex = SDL_CreateTextureFromSurface(_renderer, surface);

    if (tex == nullptr) {
        throw SDLError();
    }

    return tex;
}

void Renderer::clear() {
    SDL_RenderClear(_renderer);
}

void Renderer::renderTexture(SDL_Texture* tex, const SDL_Rect* src,
                             const SDL_Rect* dst) const {
    SDL_RenderCopy(_renderer, tex, src, dst);
}

void Renderer::update() {
    SDL_RenderPresent(_renderer);
}
