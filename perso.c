#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h> 
#include <time.h>
#include <math.h>
# include "perso.h"

void  init_persoP(personage *p)
{
	

	p->positionp.x=0;

	p->positionp.y=350;

	

	p->image=IMG_Load("perso1.png"); 



}


void  afficherjoueur(personage *p, SDL_Surface *ecran)
{
 SDL_BlitSurface (p->image , NULL , ecran, &p->positionp);
 SDL_Flip (ecran);
}


