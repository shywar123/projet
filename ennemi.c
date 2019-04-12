#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "/usr/include/SDL/SDL.h"
#include "/usr/include/SDL/SDL_image.h"
#include "/usr/include/SDL/SDL_mixer.h"
#include "/usr/include/SDL/SDL_ttf.h"
#include "Ennemi.h"


void initialiser_es (ennemi *es)
{
     
es->pos_es.x=0;
es->pos_es.y=500;
es->image=IMG_Load("mummy_left12.png");

}


void afficher_es(ennemi *es,SDL_Surface *ecran)
{
 SDL_BlitSurface(es->image, NULL, ecran, &es->pos_es);
 SDL_Flip(ecran);
 

}
void dep_es(ennemi *es,SDL_Surface *ecran)
{SDL_Surface  *imageDeFond = NULL;
    SDL_Rect positionFond,pos;
   

SDL_Surface *walk[5], *back[5];
   int i=0,j=0;

es->back[0]=IMG_Load("m1l.png");
es->back[1]=IMG_Load("m2l.png");
es->back[2]=IMG_Load("m3l.png");
es->back[3]=IMG_Load("m4l.png");


es->walk[0]=IMG_Load("m1r.png");
es->walk[1]=IMG_Load("m2r.png");
es->walk[2]=IMG_Load("m3r.png");
es->walk[3]=IMG_Load("m4r.png");




   

   int done=1,k=0;
    positionFond.x = 0;
    positionFond.y =0;
    es->pos_es.x=100;
    es->pos_es.y=265;



    /* Chargement d'une image Bitmap dans une surface */
    imageDeFond = SDL_LoadBMP("background.bmp");
    /* On blitte par-dessus l'écran */
SDL_Flip(ecran);
    
   while(done)
   {

j=4;
//SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);
SDL_BlitSurface(es->walk[i], NULL, ecran, &es->pos_es);
SDL_Flip(ecran);    
    SDL_Delay(100);
    es->pos_es.x+=10;

i++;
if(i>=4)
{

i=0;

}

if(es->pos_es.x>=900)
{

while(j>=0)
{
    
	 SDL_Flip(ecran);
	SDL_Delay(100);
//SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);
SDL_BlitSurface(es->back[j], NULL, ecran, &es->pos_es);

    es->pos_es.x-=10;

j--;
   

if(j<=0)
{

   

    j=4;
}


if(es->pos_es.x==100)
{

    break;
}
}

}
k++;

/*if(k==2)
{


    done=0;
}*/
   } 
   




    SDL_FreeSurface(imageDeFond); /* On libère la surface */
    SDL_Quit();}
