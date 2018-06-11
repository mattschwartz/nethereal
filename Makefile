ROOT = src/
SOURCE = $(shell find $(ROOT) -name *.cpp)
HEADERS = $(shell find $(ROOT) -name *.h)
LFLAGS = `sdl2-config --cflags --libs` -lSDL2_ttf -lSDL2_image
CFLAGS = -w
OBJS = $(HEADERS) $(SOURCE)

all: $(OBJS)
	g++ $(OBJS) $(CFLAGS) $(LFLAGS) -o neth
	