#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h> 
#include <time.h>
#include <math.h>
# include "perso.h"
#include "enig.h"

void  init_persoP(personage *p)
{
	

	p->positionp.x=0;

	p->positionp.y=350;

	

	p->image=IMG_Load("perso1.png"); 



}


void  afficherjoueur(personage *p, SDL_Surface *ecran)
{
 SDL_BlitSurface (p->image , NULL , ecran, &p->positionp);
 SDL_Flip (ecran);
SDL_Surface  *imageDeFond = NULL;
imageDeFond = SDL_LoadBMP("background.bmp");
}

void deplacerpreso(personage *p,SDL_Surface *ecarn)
{
SDL_Event *e;
SDL_WaitEvent(e);

switch(e->type)
    {case SDL_MOUSEBUTTONUP :
		p->positionp.x=e->button.x ; 
		p->positionp.y=e->button.y ; 
	break ; 

case SDL_KEYDOWN:
    	{
  	switch(e->key.keysym.sym)
		    	 {
	case SDLK_SPACE:
	enig();
	break;

                   case SDLK_LEFT:
		if (p->positionp.x>0)
		p->positionp.x-=10;
                   break;
                   case SDLK_RIGHT:
			p->positionp.x+=10;
		 break;
		case SDLK_UP:
				p->positionp.y-=10;
break;
          case SDLK_DOWN:
				p->positionp.y+=10;
break;
		    	 }
	 }
	}
}
void scroll (SDL_Rect *camera,SDL_Surface *ecran,SDL_Event *e,personage *p)
{
	
SDL_WaitEvent(e);
    switch(e->type)
    {case SDL_MOUSEBUTTONUP :
		p->positionp.x=e->button.x ; 
		p->positionp.y=e->button.y ; 
	break ; 
    	case SDL_KEYDOWN:
    	{
  	switch(e->key.keysym.sym)
		    	 {
case SDLK_SPACE:
enig();
break;
                   case SDLK_LEFT:
			if (camera->x>0)
                   camera->x =camera->x-10;
		if (p->positionp.x>0)
		p->positionp.x-=10;
                   break;
                   case SDLK_RIGHT:
		if (camera->x<1100)
                   camera->x=camera->x+10;
		else 
			p->positionp.x=p->positionp.x+10;
		 break;
		case SDLK_UP:
				p->positionp.y=p->positionp.y-10;
break;
          case SDLK_DOWN:
				p->positionp.y=p->positionp.y+10;
break;
		    	 }
		printf("%d\n",camera->x);
	
	}
	
}
}


