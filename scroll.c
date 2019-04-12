#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include "perso.h"


void scroll (SDL_Surface *image,SDL_Rect *camera,SDL_Surface *ecran,SDL_Event *e,personage *p)
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
                   case SDLK_LEFT:
			if (camera->x>0)
                   camera->x =camera->x-20;
		if (p->positionp.x>0)
		p->positionp.x-=10;
                   break;
                   case SDLK_RIGHT:
		if (camera->x<1100)
                   camera->x=camera->x+20;
		else 
			p->positionp.x=p->positionp.x+10;
		 break;
		case SDLK_UP:
				p->positionp.y=p->positionp.y-10;
break;
          case SDLK_DOWN:
	
				p->positionp.y=p->positionp.y+10;
          		/*	while (p->positionp.y=p->positionp.y>350)
				{p->positionp.y=p->positionp.y-5;
}*/

				
break;
		    	 }
		
	printf("%d\n",camera->x);
	}
	
}
}

