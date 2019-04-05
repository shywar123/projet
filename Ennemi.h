#ifndef ENNEMI_H_INCLUDED
#define ENNEMI_H_INCLUDED


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "/usr/include/SDL/SDL.h"
#include "/usr/include/SDL/SDL_image.h"
#include "/usr/include/SDL/SDL_mixer.h"
#include "/usr/include/SDL/SDL_ttf.h"

typedef enum STATE STATE;
enum STATE {WAITING, FOLLOWING, ATTACKING};



typedef struct 
{
	//int vie; 
	SDL_Surface *image ;
	SDL_Rect pos_es;
	STATE STATE;

}ennemi;

void initialiser_es (ennemi *es);
void afficher_es(ennemi *es,SDL_Surface *ecran);


#endif // ENNEMI_H_INCLUDED
