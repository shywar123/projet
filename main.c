#include <stdio.h>
#include "SDL/SDL.h"
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "perso.h"
int main()
{
    
    SDL_Surface *ecran =NULL;
    SDL_Surface *image =NULL;
    SDL_Rect positionecran;
	personage p;
    char pause;
    int continuer =1,curseur=1;
    SDL_Event e;
    image =SDL_LoadBMP("background.bmp");
    
    positionecran.x=0;
    positionecran.y=0;
    

     init_persoP(&p);
     

    SDL_Init(SDL_INIT_VIDEO);
 

	SDL_Init(SDL_INIT_EVERYTHING);
	
	SDL_Rect camera ;
	camera.x=0;
	camera.y=0;
	camera.w=900;
	camera.h=550;
        
   
    ecran = SDL_SetVideoMode(900, 550, 32, SDL_HWSURFACE |SDL_DOUBLEBUF);
    while (continuer)
    {
  
        SDL_BlitSurface(image, &camera, ecran, &positionecran);
SDL_Flip(ecran);
        afficherjoueur(&p,ecran);
        

	scroll(image,&camera,ecran,&e,&p);

}

    return 0;
}
