#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <ctype.h>
#include <SDL/SDL_image.h> 
#include <SDL/SDL_ttf.h>
#include <string.h>
#include <SDL/SDL_mixer.h>
#include <time.h>
#include "gravite.h"

int main()
{
SDL_Surface* screen;
    int numkeys;
    Uint8 * keys;
    Sprite S;
    Uint32 timer,elapsed;
    SDL_Init(SDL_INIT_VIDEO);
    screen=SDL_SetVideoMode(400,320,32,SDL_SWSURFACE|SDL_DOUBLEBUF);
    InitSprite(&S);
    do 
    {
        timer = SDL_GetTicks();
        SDL_FillRect(screen,NULL,0);
        SDL_PumpEvents();
        keys = SDL_GetKeyState(&numkeys);
        Evolue(&S,keys);
        Render(&S,screen);
        SDL_Flip(screen);
        elapsed = SDL_GetTicks() - timer;
        if (elapsed<20)
            SDL_Delay(20-elapsed);
    } while (!keys[SDLK_ESCAPE]);
    SDL_Quit();
return 0;
}
