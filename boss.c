#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "boss.h" 
#include <time.h>
#include <math.h>


void initialiser_bs (ennemi *bs)
{
bs->pos_bs.x=500;
bs->pos_bs.y=380;
bs->image=IMG_Load("boss.png");
}


void afficher_bs(ennemi *bs,SDL_Surface *ecran)
{
 SDL_BlitSurface(bs->image, NULL, ecran, &bs->pos_bs);
 SDL_Flip(ecran);
}

