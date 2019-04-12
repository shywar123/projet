#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"SDL/SDL.h"
#include"SDL/SDL_image.h"
#include"SDL/SDL_mixer.h"
#include"SDL/SDL_ttf.h"
#include "animation.h"

void anim()
{
	
	animation perso;
        perso.direct = -1;
	perso.imin1=NULL;
	perso.imin2=NULL;
	perso.imin3=NULL;
	perso.imin4=NULL;


	perso.issar1 = NULL;
	perso.issar2 = NULL;
	perso.issar3 = NULL;
	perso.issar4 = NULL;

	perso.screen =NULL;
	perso.bg = IMG_Load("bg6-small.png");
	perso.imin1=IMG_Load("imin1.png");
	perso.imin2=IMG_Load("imin2.png");
	perso.imin3=IMG_Load("imin3.png");
	perso.imin4=IMG_Load("imin4.png");

	perso.issar1 = IMG_Load("isar1.png");
	perso.issar2 = IMG_Load("isar2.png");
	perso.issar3 = IMG_Load("isar3.png");
	perso.issar4 = IMG_Load("isar4.png");

	perso.tsawer[0]=perso.imin1;
	perso.tsawer[1]=perso.imin2;
	perso.tsawer[2]=perso.imin3;
	perso.tsawer[3]=perso.imin4;

	perso.tsawerL[0]=NULL;
	perso.tsawerL[1]=NULL;
	perso.tsawerL[2]=NULL;
	perso.tsawerL[3]=NULL;

	perso.tsawerL[0]=perso.issar1;
	perso.tsawerL[1]=perso.issar2;
	perso.tsawerL[2]=perso.issar3;
	perso.tsawerL[3]=perso.issar4;


	perso.pos_bg.x=0;
	perso.pos_bg.y=0;

int i=0;
int j;
	/*if(SDL_Init(SDL_INIT_VIDEO)!=0)
	{
	printf("Unable to initialize SDL: %s\n",SDL_GetError());
	return 1; // : Le jeux se ferme si la la valeure de retour est '1'
	}*/

	perso.screen= SDL_SetVideoMode(1000,550, 32,  SDL_HWSURFACE | SDL_DOUBLEBUF | SDL_RESIZABLE);


perso.done=1;

//SDL_EnableKeyRepeat(10,0);

while(perso.done)
{
	SDL_PollEvent(&perso.event_anim);
	  switch(perso.event_anim.type) 
    {
    case SDL_QUIT: 
    perso.done = 0; 
    break;
    case SDL_KEYDOWN: 
      
      switch(perso.event_anim.key.keysym.sym)
      {
      case SDLK_ESCAPE: 
      perso.done=0;
      break;

      case SDLK_UP: 
      {
      perso.pos_Sprite.y-=2;
  
      }
       break;

      case SDLK_DOWN: // Flèche bas
      {
       perso.pos_Sprite.y+=2;
    
      } 
      break;

      case SDLK_RIGHT: // Flèche droite
      { 
      perso.pos_Sprite.x+=5;
      perso.direct=1;
      i++;
      

    }
       break;

      case SDLK_LEFT: // Flèche gauche
      {
      perso.pos_Sprite.x-=5;
      perso.direct=2;
      i++;
      
      }
      
        break;
                    
      }

    }
    //blit;
    if(i>3)
      {
      	i=0;
      }
    if (perso.direct==1)
    {
    	SDL_BlitSurface(perso.bg , NULL , perso.screen , &perso.pos_bg);
    	SDL_BlitSurface(perso.tsawer[i] , NULL , perso.screen , &perso.pos_Sprite);
    	SDL_Flip(perso.screen);
    }

    else if (perso.direct==2)
    {
    	
    	SDL_BlitSurface(perso.bg , NULL , perso.screen , &perso.pos_bg);
    	SDL_BlitSurface(perso.tsawerL[i] , NULL , perso.screen , &perso.pos_Sprite);
    	SDL_Flip(perso.screen);
    }

}
SDL_FreeSurface(perso.screen);
SDL_FreeSurface(perso.imin1);
SDL_FreeSurface(perso.imin2);
SDL_FreeSurface(perso.imin3);
SDL_FreeSurface(perso.imin4);
SDL_FreeSurface(perso.issar1);
SDL_FreeSurface(perso.issar2);
SDL_FreeSurface(perso.issar3);
SDL_FreeSurface(perso.issar4);
/*for(i=0 ; i<4 ; i++)
{
	SDL_FreeSurface(perso.tsawerL[i]);
	SDL_FreeSurface(perso.tsawer[i]);
}*/
SDL_QUIT;
return 0;
}

