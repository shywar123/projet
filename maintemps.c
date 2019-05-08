#include<stdio.h>
#include<stdlib.h>

#include"SDL/SDL.h"
#include"SDL/SDL_image.h"
#include"SDL/SDL_ttf.h"
#include"SDL/SDL_mixer.h"
#include"temps.h"

int main()
{

putenv("SDL_VIDEO_CENTERED=1");//on centre la fenetre 

//initiation de la video
SDL_Init(SDL_INIT_VIDEO);
if (SDL_Init(SDL_INIT_VIDEO))
fprintf(stderr,"Error SDL : %s\n",SDL_GetError());

//creation fenetre
SDL_Surface *fenetre=NULL;
fenetre=SDL_SetVideoMode(400,563,32,SDL_HWSURFACE);

//SDL_FillRect(fenetre,NULL,SDL_MapRGB(fenetre->format,0,0,0));//pour remplir l'ecran
SDL_Flip(fenetre);

//creation backgroud
SDL_Surface* background;
background=IMG_Load("backgroundex.bmp");


SDL_Rect backgroundpos;
backgroundpos.x=0;
backgroundpos.y=0;
SDL_BlitSurface(background,NULL,fenetre,&backgroundpos);

temps t ;
temp(t);


}
