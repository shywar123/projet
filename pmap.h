
#ifndef PMAP_H_INCLUDED
#define PMAP_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

/**
* @struct pmap
* @brief struct for background

*/

typedef struct pmap{
	int nbmoved;
	SDL_Surface *afficher_pmap;
	SDL_Rect pos_pmap; /* !< rectangle*/
	SDL_Surface *afficher_pperso; /* !<surface*/
	SDL_Rect pos_pperso;
}pmap;

	void initialiser_pmap(pmap *pmap);
	void afficher_pmap(pmap *pmap,SDL_Surface *ecran,int mouvment);
#endif
