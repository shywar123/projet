#ifndef OBJEEET_H_INCLUDED
#define OBJEEET_H_INCLUDED
#include <stdio.h>
#include "SDL/SDL.h"
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>




typedef struct 
{
	 
	SDL_Surface *image ;
	SDL_Rect pos_ob;
	

}objet;


void initialiser_ob (objet *ob);
void initialiser_ob1 (objet *ob1);
void initialiser_ob2 (objet *ob2);
void afficher_ob(objet *ob,SDL_Surface *ecran);
void afficher_ob1(objet *ob1,SDL_Surface *ecran);
void afficher_ob2(objet *ob2,SDL_Surface *ecran);
#endif // OBJEEET_H_INCLUDED

