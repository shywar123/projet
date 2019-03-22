#ifndef PERSO_H_INCLUDED
#define PERSO_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
typedef struct
{
         SDL_Surface* image;
	 SDL_Rect positionexplo;


}joueur;

void init_persoP(joueur *p);/* initialisation joueur*/
void afficherjoueur(joueur *j,SDL_Surface *ecran);/*affichage joueur*/



#endif
