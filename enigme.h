#include<stdlib.h>
#include<stdio.h>
#include <string.h>
#include <math.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_ttf.h>
#include<SDL/SDL_mixer.h>
#include<SDL/SDL_getenv.h>
#ifndef DEF_CONSTANTES
#define DEF_CONSTANTES
typedef struct 
{
SDL_Surface *fondenigme;
SDL_Rect pos_fond;
}enigme;



int initialiser_enigme(enigme *back);
void afficher_enigme(SDL_Surface *ecran,enigme *back);

#endif
