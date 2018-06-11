#include <iostream>
#include <SDL2/SDL.h>
#include "SDLError.h"
#include "engine/SDLContext.h"
#include "engine/gfx/Renderer.h"

const int WIDTH = 640;
const int HEIGHT = 480;

void gameLoop(Renderer& renderer) {
    while (true) {
        renderer.update();
    }
}

int main(int argc, char* argv[]) {
    try {
        SDLContext sdl(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
        Renderer renderer("Nethereal", WIDTH, HEIGHT);
        gameLoop(renderer);
    } catch (SDLError e) {
        std::cerr << e.what() << std::endl;
        return 1;
    } catch (const std::string& str) {
        std::cerr << str << std::endl;
        return 1;
    }

    return 0;
}
