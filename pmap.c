#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include"pmap.h"
/**
* @file pmap.c
 *@author yosr 
* @brief calculer le factoriel
* @date 10 mai 2019
* @version 1.0 
*/
/**
* @brief To initialize the pmap .
* @param  pmap the map
* @param url the url of the image
* @return Nothing
*/

void initialiser_pmap(pmap *pmap){

	pmap->afficher_pmap=NULL;
	pmap->afficher_pmap=IMG_Load("background.jpg");

	pmap->pos_pmap.x=800;
	pmap->pos_pmap.y=20;


	pmap->afficher_pperso=NULL;
	pmap->afficher_pperso=IMG_Load("h.png");

	pmap->pos_pperso.x=805;
	pmap->pos_pperso.y=70;
	pmap->nbmoved=0;


}
/**
* @brief To show the map .
* @param scren the screen
* @param the map
* @return Nothing
*/
void afficher_pmap(pmap *pmap,SDL_Surface *ecran,int mouvment){


	SDL_BlitSurface(pmap->afficher_pmap,NULL,ecran,&pmap->pos_pmap);

	SDL_BlitSurface(pmap->afficher_pperso,NULL,ecran,&pmap->pos_pperso);
	if (mouvment==1)
		pmap->nbmoved++;
	if (mouvment==2)
		pmap->nbmoved--;

		if (pmap->nbmoved==9){
		pmap->pos_pperso.x+=2;
		pmap->nbmoved=0;
}
	if (pmap->nbmoved==-9){
		pmap->pos_pperso.x-=2;
		pmap->nbmoved=0;
	}

}
