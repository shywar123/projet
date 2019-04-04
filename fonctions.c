#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonctions.h"


int main(int argc, char**argv[])
{
    SDL_Surface *ecran = NULL, *fond= NULL, *objet = NULL, *objet1 = NULL, *objet2= NULL; 
    SDL_Rect positionfond, positionobjet, positionobjet1, positionobjet2;
 
    positionobjet.x = 300;
    positionobjet.y = 210;
    positionobjet1.x = 120;
    positionobjet1.y = 195;
    positionobjet2.x = 60;
    positionobjet2.y = 365;
    positionfond.x = 0;
    positionfond.y = 0;
 
 
    SDL_Init(SDL_INIT_VIDEO);
 
    ecran = SDL_SetVideoMode(1000,550,32, SDL_HWSURFACE);
    fond = IMG_Load("128.bmp");
    objet = IMG_Load("chauve.png");
    objet1 = IMG_Load("baril.png");
    objet2 = IMG_Load("Snake.png");
        SDL_FillRect (ecran, NULL, SDL_MapRGB(ecran->format, 255,255,255));
        SDL_BlitSurface(fond, NULL, ecran, &positionfond);
        SDL_BlitSurface(objet, NULL, ecran, &positionobjet);
	SDL_BlitSurface(objet1, NULL, ecran, &positionobjet1);
        SDL_BlitSurface(objet2, NULL, ecran, &positionobjet2);
	SDL_Flip(objet);
	SDL_Flip(objet1);  
        SDL_Flip(objet2);      
	SDL_Flip(ecran);
        SDL_Flip(fond);
        
 
    int continuer = 1;
 
    while(continuer)
    {
        SDL_Event event;
        SDL_WaitEvent(&event);
 
        switch(event.type)
        {
            case SDL_KEYDOWN:
        switch(event.key.keysym.sym)
        {
            case SDLK_ESCAPE:
            continuer = 0;
            break;
        }

        break;
        }
    
    }
    SDL_FreeSurface(objet);
    SDL_FreeSurface(objet1);
    SDL_FreeSurface(objet2);
    SDL_FreeSurface(fond);
    SDL_Quit;
    return EXIT_SUCCESS;
}

