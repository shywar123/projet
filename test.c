#include <stdio.h>
#include  <stdlib.h>
#include  <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
//#include "test.h" 
#include "Ennemi.h"
#include "perso.h"
#include "enig.h"


int main (int argc, char **argv) 
{ SDL_Surface  *imageDeFond = NULL;
imageDeFond = SDL_LoadBMP("background.bmp");
SDL_Surface *ecran;
//SDL_Surface *image =NULL;SDL_Surface *ecran;SDL_Surface *screen;
	 SDL_Init ( SDL_INIT_VIDEO ) ;
	 ecran=SDL_SetVideoMode(3000,550,32,SDL_HWSURFACE  |  SDL_DOUBLEBUF );
    SDL_WM_SetCaption("game", NULL);
   SDL_Rect positionecran;
positionecran.x=0;
    positionecran.y=0;
SDL_Event event;
SDL_Event ev;
SDL_Rect camera ;
	camera.x=0;
	camera.y=0;
	//camera.w=900;
	//camera.h=550;

int continuer =1;
camera.x=0;
camera.y=0;
enigme e;
ennemi es;
//boss bs;
personage p;
initialiser_es (&es);
//initialiser_bs (&bs);
init_persoP(&p);
//int ennmie1=0,ennmie2=0,ennmie3=0,ennmie4=0;
int s,r,running=1,run=1,alea,v=0;
char image[30]="";
//SDL_EnableKeyRepeat(SDL_DEFAULT_REPEAT_DELAY,SDL_DEFAULT_REPEAT_INTERVAL);
    //image =SDL_LoadBMP("background.bmp");
int k,z;

while (continuer)
{

SDL_BlitSurface( imageDeFond, &camera, ecran, &positionecran);
SDL_Flip(ecran);
        afficherjoueur(&p,ecran);
       SDL_Flip(ecran); 

	scroll(&camera,ecran,&event,&p);
	
     dep_es(&es,ecran);

//SDL_FreeSurface(imageDeFond);
	/*if ((p.positionp.x>0)&&(p.positionp.x<10))
{
*/
//if (v==0){

//}
}


//if (v==1){dep_es(&es,ecran);}
return 0 ;
} 
