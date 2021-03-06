#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <stdio.h>
#include "background.h" 
//FONCTION 1:

void scrolling_horizentale(SDL_Rect *camera,int droite,int gauche,int speed)
{
	if (droite==1)
	{
		camera->x=(camera->x)+speed;
	}
	else if (gauche==1)
	{
		camera->x=(camera->x)-speed;
	}
}
 
//FONCTION 2:
void scrolling_verticale(SDL_Rect *camera,int haut,int bas)
{
	int speed=5;
	if (haut==1)
	{
		camera->y=(camera->y)-speed;
	}
	else if (bas==1)
	{
		camera->y=(camera->y)+speed;
	}
}

//FONCTION 3:
void display_camera(SDL_Surface *map,SDL_Rect camera,SDL_Surface *screen)
{
	SDL_Rect poscamera;
	poscamera.x=0;
	poscamera.y=0;
	SDL_BlitSurface(map,&camera,screen,&poscamera);
	SDL_Flip(screen);
}

