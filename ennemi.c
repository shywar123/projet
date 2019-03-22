#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "ennemi.h"
#include <time.h>
#include <math.h>





void initialiser_es (ennemi *es)
{
es->pos_es.x=500;
es->pos_es.y=380;
es->image=IMG_Load("mummy.png");
}


void afficher_es(ennemi *es,SDL_Surface *ecran)
{
 SDL_BlitSurface(es->image, NULL, ecran, &es->pos_es);
 SDL_Flip(ecran);
}














