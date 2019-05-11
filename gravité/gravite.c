/**
* @file gravite.c
* @brief Testing Program.
* @author shywar
* @version 0.1
* @date mai 05, 2019
*
* Testing program for jump
*
*/
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <ctype.h>
#include <SDL/SDL_image.h> 
#include <SDL/SDL_ttf.h>
#include <string.h>
#include <SDL/SDL_mixer.h>
#include <time.h>
#include "gravite.h" 

/**
* @brief To initialize position .
* @param Sp the Sprite
* @return Nothing
*/
void InitSprite(Sprite* Sp)
{
    Sp->x = 150.0f;
    Sp->y = 250.0f;
    Sp->status = STAT_SOL;
    Sp->vx = Sp->vy = 0.0f;
    Sp->sprite = IMG_Load("perso12.png");
}

/**
* @brief To show the personage .
* @param scren the screen and Sp th Sprite
* @return Nothing
*/
void Render(Sprite* Sp,SDL_Surface* screen)
{
SDL_Rect R;
    R.x = (Sint16)Sp->x;
    R.y = (Sint16)Sp->y;
SDL_BlitSurface(Sp->sprite , NULL , screen, &R);
}

/**
* @brief To do the saut .
* @param Sp the Sprite and impulsion
* @param Sp and impulusion
* @return nothing
*/
void Saute(Sprite* Sp,float impulsion)
{
    Sp->vy = -impulsion;
    Sp->status = STAT_AIR;
}

/**
* @brief To control sol .
* @param Sp the Sprite
* @param SP 
* @return nothing
*/
void ControleSol(Sprite* Sp)
{
    if (Sp->y>250.0f)
    {
        Sp->y = 250.0f;
        if (Sp->vy>0)
            Sp->vy = 0.0f;
        Sp->status = STAT_SOL;
    }
}

/**
* @brief To show the gravite
* @param Sp and factgravite and factsautmaintenu and Uint8* keys
* @return Nothing
*/
void Gravite(Sprite* Sp,float factgravite,float factsautmaintenu,Uint8* keys)
{
    if (Sp->status == STAT_AIR && keys[SDLK_SPACE])
        factgravite/=factsautmaintenu;
    Sp->vy += factgravite;
}

/**
* @brief To control the evolution of the hero
* @param Sp and Uint8* keys
* @return Nothing
*/
void Evolue(Sprite* Sp,Uint8* keys)
{
    float lateralspeed = 0.5f;
    float airlateralspeedfacteur = 0.5f;
    float maxhspeed = 3.0f;
    float adherance = 1.5f;
    float impulsion = 6.0f;
    float factgravite = 0.5f;
    float factsautmaintenu = 3.0f;
// controle lateral
    if (Sp->status == STAT_AIR) // (*2)
        lateralspeed*= airlateralspeedfacteur;
    if (keys[SDLK_LEFT]) // (*1)
        Sp->vx-=lateralspeed;
    if (keys[SDLK_RIGHT])
        Sp->vx+=lateralspeed;
    if (Sp->status == STAT_SOL && !keys[SDLK_LEFT] && !keys[SDLK_RIGHT]) // (*3)
        Sp->vx/=adherance;
// limite vitesse
    if (Sp->vx>maxhspeed) // (*4)
        Sp->vx = maxhspeed;
    if (Sp->vx<-maxhspeed)
        Sp->vx = -maxhspeed;
// saut
    if (keys[SDLK_SPACE] && Sp->status == STAT_SOL)
        Saute(Sp,impulsion);
    Gravite(Sp,factgravite,factsautmaintenu,keys);
    ControleSol(Sp);
// application du vecteur à la position.
    Sp->x +=Sp->vx;
    Sp->y +=Sp->vy;
}

