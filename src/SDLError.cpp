#include <SDL.h>
#include "SDLError.h"

SDLError::SDLError()
    : _msg(SDL_GetError())
{ }

SDLError::SDLError(const std::string& m)
    : _msg(m)
{ }

SDLError::~SDLError() throw()
{ }

const char* SDLError::what() const throw() {
    return _msg.c_str();
}
