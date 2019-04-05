#include <stdio.h>
#include "SDL/SDL.h"
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "Ennemi.h"
int main()
{
    





SDL_Surface *ecran=NULL,*image =NULL;
SDL_Event e;
ennemi es;
SDL_Rect positionecran;
int continuer =1;
positionecran.x=0;
positionecran.y=0;
image =SDL_LoadBMP("background.bmp");
initialiser_es (&es);
SDL_Init(SDL_INIT_VIDEO);
ecran = SDL_SetVideoMode(3000, 550, 32, SDL_HWSURFACE |SDL_DOUBLEBUF);
    while (continuer)
    {
   SDL_WaitEvent(&e);
        SDL_BlitSurface(image, NULL, ecran, &positionecran);
SDL_Flip(ecran);
afficher_es(&es,ecran);
}
return 0;
}

