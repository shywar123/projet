#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_ttf.h>

#ifndef DEF_CONSTANTES
#define DEF_CONSTANTES


typedef struct 
{
SDL_Surface *imageDeFond ;
SDL_Rect positionFond ;
STATE STATE ;
}background ;

void init_background (background *fond );

void afficher_background (SDL_Surface *screen, background *fond);


#endif






