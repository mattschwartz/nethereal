#include <SDL.h>
#include "Color.h"
#include "../../SDLError.h"

const Color red(0xff, 0, 0);
const Color green(0, 0xff, 0);
const Color blue(0, 0, 0xff);
const Color white(0xff, 0xff, 0xff);
const Color black;
const Color magenta(0xff, 0, 0xff);

Color::Color(int r, int g, int b, int a)
    : _r(r), _g(g), _b(b), _a(a)
{ }
