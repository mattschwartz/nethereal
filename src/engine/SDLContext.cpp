#include "SDLContext.h"
#include <SDL_image.h>
#include <SDL_ttf.h>
#include "../SDLError.h"

SDLContext* SDLContext::_context;

const SDLContext* SDLContext::getContext() {
    return SDLContext::_context;
}

SDLContext::SDLContext(Uint32 flags) {
    if (SDL_Init(flags) != 0) {
        throw SDLError();
    }
    
    if (IMG_Init(0) != 0) {
        throw SDLError(IMG_GetError());
    }
    
    if (TTF_Init() != 0) {
        throw SDLError(TTF_GetError());
    }
    
    SDLContext::_context = this;
}

SDLContext::~SDLContext() {
    TTF_Quit();
    IMG_Quit();
    SDL_Quit();
}
