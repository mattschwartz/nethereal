#ifndef _SDLCONTEXT_H_
#define _SDLCONTEXT_H_

#include <SDL.h>

class SDLContext {
private:
    static SDLContext* _context;

public:
    static const SDLContext* getContext();

    SDLContext(Uint32);
    virtual ~SDLContext();
};

#endif // _SDLCONTEXT_H_
