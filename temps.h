#include<stdio.h>
#include<stdlib.h>

#include"SDL/SDL.h"
#include"SDL/SDL_image.h"
#include"SDL/SDL_ttf.h"
#include"SDL/SDL_mixer.h"
 
typedef struct temps
{
SDL_Rect position;

}temps;

#ifndef SCORE_H
#define SCORE_H

/*#ifndef DEF_CONSTANTES
#define DEF_CONSTANTES//evité les inculsions infinies*/


//jeu
void temp(temps t);

#endif
