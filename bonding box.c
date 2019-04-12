#include <stdio.h>
#include  <stdlib.h>
#include  <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <stdbool.h>
#include "perso.h"
 _Bool CollisionBB(personage *p,SDL_Rect position1)
 {
	 
	 if (position1.x+position1.w < p->positionp.x || position1.x > p->positionp.x+p->positionp.w || position1.y+position1.h < p->positionp.y || position1.y > p->positionp.y+p->positionp.h)  
     {
		 return false ; 
	 }
   else return true ; 
	 
	 
 }
