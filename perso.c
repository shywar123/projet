#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "perso.h"

void init_persoP(joueur *j)
{
	int choix;

	j->positionexplo.x=500;

	j->positionexplo.y=380;

	j->vie=5;

	j->image=IMG_Load("perso1.png");// sprite sheet deplacement



}


void afficherjoueur(joueur *j,SDL_Surface *ecran)
{
 SDL_BlitSurface(j->image, NULL, ecran, &j->positionexplo);
 SDL_Flip(ecran);
}



