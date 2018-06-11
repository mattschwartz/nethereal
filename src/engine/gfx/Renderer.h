#ifndef _RENDERER_H_
#define _RENDERER_H_

#include <SDL.h>
#include <string>

class Window;
class Texture;
class Color;

class Renderer {
private:
    Window* _window;
    SDL_Renderer* _renderer;

public:
    Renderer(std::string title, int w, int h);
    ~Renderer();

    int setViewport(const SDL_Rect*);
    void setDrawColor(const Color&);
    void clear();
    void renderTexture(SDL_Texture*, const SDL_Rect* src, const SDL_Rect* dst) const;
    void update();
    SDL_Texture* getTextureFromSurface(SDL_Surface*) const;
};

#endif // _RENDERER_H_
