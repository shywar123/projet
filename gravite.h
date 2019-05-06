#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <ctype.h>
#include <SDL/SDL_image.h> 
#include <SDL/SDL_ttf.h>
#include <string.h>
#include <SDL/SDL_mixer.h>
#include <time.h>



#define STAT_SOL 0
#define STAT_AIR 1

typedef struct
{
    SDL_Surface *sprite;
    int status;
    float x,y;
    float vx,vy;
} Sprite;


void InitSprite(Sprite* Sp);
void Render(Sprite* Sp,SDL_Surface* screen);
void Saute(Sprite* Sp,float impulsion);
void ControleSol(Sprite* Sp);
void Gravite(Sprite* Sp,float factgravite,float factsautmaintenu,Uint8* keys);
void Evolue(Sprite* Sp,Uint8* keys);

#endif

