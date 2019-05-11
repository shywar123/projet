#ifndef PARTAGE_ECRANH_H_INCLUDED
#define PARTAGE_ECRANH_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

typedef struct background
{
	SDL_Surface *background1;
	int  speed_camera1;
        int  speed_camera2;
	SDL_Rect camera1;
	SDL_Rect camera2;
        SDL_Rect positionback1;
	SDL_Rect positionback2;
int button;
}background;
typedef struct personnage{

	SDL_Surface *afficher_heror[8];
	SDL_Surface *afficher_herol[8];
	SDL_Surface *afficher_herof[3];
	SDL_Surface *afficer_hp[3];
	SDL_Rect pos_hero22;
	SDL_Rect pos_hero2;
	SDL_Rect pos_hp;
	int mouvment;
	int farm;
	int etat;
	int hp;
	int hit;
}perso;

void initialiser_perso(perso *wassime);
void afficher_perso(perso wassime,SDL_Surface *ecran);
void initialiser_perso2(perso *wassime);
void afficher_perso2(perso wassime,SDL_Surface *ecran);
background Initialiser_map (background backg);
void afficher_background(background backg,SDL_Surface*ecran);
void afficher_background1(background backg,SDL_Surface*ecran);
background scrolling(background backg,SDL_Event e);
background scrolling1(background backg,SDL_Event e);



#endif // PARTAGE_ECRANH_H_INCLUDED
