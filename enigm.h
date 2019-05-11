#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "time.h"
#include "SDL/SDL.h"

#include<math.h>

#ifndef _SDL_IMAGE_H
#define _SDL_IMAGE_H



#endif



#define SDL_IMAGE_MAJOR_VERSION	1
#define SDL_IMAGE_MINOR_VERSION	2
#define SDL_IMAGE_PATCHLEVEL	12

#define SDL_IMAGE_VERSION(X)						\
{									\
	(X)->major = SDL_IMAGE_MAJOR_VERSION;				\
	(X)->minor = SDL_IMAGE_MINOR_VERSION;				\
	(X)->patch = SDL_IMAGE_PATCHLEVEL;				\
}



/*ypedef enum
{
    IMG_INIT_JPG = 0x00000001,
    IMG_INIT_PNG = 0x00000002,
    IMG_INIT_TIF = 0x00000004,
    IMG_INIT_WEBP = 0x00000008
} IMG_InitFlags;
*/
/* We'll use SDL for reporting errors */
#define IMG_SetError	SDL_SetError
#define IMG_GetError	SDL_GetError

/* Ends C function definitions when using C++ */
#ifdef __cplusplus
}
#endif


int generate_question(int*n);
void init_affichier_question(int n,SDL_Surface *screen);
int resolution(int n);
int reponse(int *rep );
void afficher_resultat (SDL_Surface * screen,int solution,int r);
