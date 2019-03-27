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
SDL_Surface *imageDeFond;
SDL_Rect positionFond;
}fond;

#define LARGEUR_FENETRE 1000
#define HAUTEUR_FENETRE 1000

void init_backgroung() ;
int aff_background(int argc, char *argv[])

#endif







