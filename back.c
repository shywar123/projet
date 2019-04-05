#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_ttf.h>
#include "back.h"
void init_background (background *fond )
{

fond->positionFond.x=0 ;
fond->positionFond.y=0 ; 
fond->imageDeFond = SDL_LoadBMP("background3.bmp");

}

void afficher_background (SDL_Surface *screen, background *fond)
{

SDL_BlitSurface(fond->imageDeFond,NULL,screen,&fond->positionFond);
SDL_Flip(screen); 
}


