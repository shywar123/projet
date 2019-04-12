#include <stdio.h>
#include "SDL/SDL.h"
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "objeeet.h"
int main()
{SDL_Surface *ecran=NULL,*image =NULL;
SDL_Event e;
objet ob;
objet ob1;
objet ob2;
SDL_Rect positionecran;
int continuer =1;
positionecran.x=0;
positionecran.y=0;
image =SDL_LoadBMP("background3.bmp");
initialiser_ob (&ob);
initialiser_ob1 (&ob1);
initialiser_ob2 (&ob2);
SDL_Init(SDL_INIT_VIDEO);
ecran = SDL_SetVideoMode(1000, 550, 32, SDL_HWSURFACE |SDL_DOUBLEBUF);
    while (continuer)
    {
   SDL_WaitEvent(&e);
        SDL_BlitSurface(image, NULL, ecran, &positionecran);
SDL_Flip(ecran);
afficher_ob(&ob,ecran);
afficher_ob1(&ob1,ecran);
afficher_ob2(&ob2,ecran);
}
return 0;
}

