#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "/usr/include/SDL/SDL.h"
#include "/usr/include/SDL/SDL_image.h"
#include "/usr/include/SDL/SDL_mixer.h"
#include "/usr/include/SDL/SDL_ttf.h"
#include "Ennemi.h"


void initialiser_es (ennemi *es)
{
     
es->pos_es.x=500;
es->pos_es.y=275;
es->image=IMG_Load("mummy_left12.png");

}


void afficher_es(ennemi *es,SDL_Surface *ecran)
{
 SDL_BlitSurface(es->image, NULL, ecran, &es->pos_es);
 SDL_Flip(ecran);
 

}


