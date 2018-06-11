#ifndef _COLOR_H_
#define _COLOR_H_

struct SDL_Renderer;
class SDL_PixelFormat;

class Color {
public:
    int _r;
    int _g;
    int _b;
    int _a;

    Color(int r = 0, int g = 0, int b = 0, int a = 0xff);
};

extern const Color red;
extern const Color green;
extern const Color blue;
extern const Color white;
extern const Color black;
extern const Color magenta;

#endif // _COLOR_H_
