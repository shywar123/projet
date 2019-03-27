#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_ttf.h>
#include "back.h"


void int_background()
{

SDL_Surface *ecran = NULL;

SDL_Surface *imageDeFond = NULL;
}


int aff_background(int argc, char *argv[])
{
    
    SDL_Rect positionFond;

    positionFond.x = 0;
    positionFond.y = 0;

    SDL_Init(SDL_INIT_VIDEO);

    ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE);
    SDL_WM_SetCaption("Chargement d'images en SDL", NULL);

    imageDeFond = SDL_LoadBMP("background.bmp");
    
    SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);

    SDL_Flip(ecran);
    pause();

    SDL_FreeSurface(imageDeFond); 
    SDL_Quit();

    return EXIT_SUCCESS;
}


