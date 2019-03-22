#include<stdlib.h>
#include<stdio.h>
#include <string.h>
#include "menu.h"

void afficher()
{   SDL_Surface *ecran=NULL,*img0=NULL,*img1=NULL,*img2=NULL,*img3=NULL,*img4=NULL,*img5=NULL,*img10=NULL;

SDL_Event e;

	SDL_Rect positionecran;

	int continuer=1;

	int c=1;

	int b=0;

	int po=0;

	int x,y;
    img0=IMG_Load("menu.jpg");

	img1=IMG_Load("pt.jpg");

	img2=IMG_Load("stt.jpg");

	img3=IMG_Load("et.jpg");

    img5=IMG_Load("stmenu.jpg");
	
    img10=IMG_Load("pm.jpg");
	positionecran.x=0;

	 positionecran.y=0;
           SDL_Event event;

	
		//SDL_Flip(ecran);

  
Mix_Music *music;
Mix_Chunk *sound;
    Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024);
    Mix_VolumeMusic(MIX_MAX_VOLUME / 2);
    music=Mix_LoadMUS("musique.mp3");
    sound = Mix_LoadWAV("button.wav");
    Mix_PlayMusic(music,-1);
 SDL_Init(SDL_INIT_VIDEO);

    	    ecran = SDL_SetVideoMode(1000, 550, 32, SDL_HWSURFACE );  
while (continuer){
   SDL_WaitEvent(&e);
	if (po==0){



		if ((45<=x)&&(x<=203)&&(y<=250)&&(180<=y)){

			SDL_BlitSurface(img1, NULL, ecran, &positionecran);

		b=2;

		}

		else if ((39<=x)&&(x<=205)&&(y<=360)&&(284<=y)){
			SDL_BlitSurface(img2, NULL, ecran, &positionecran);

		b=3;		}

		else if ((39<=x)&&(x<=205)&&(y<=475)&&(402<=y)){

			SDL_BlitSurface(img3, NULL, ecran, &positionecran);
			b=1;

		}



		else {

			SDL_BlitSurface(img0, NULL, ecran, &positionecran);

		b=0;


		}

	}
		

		else if (po==1){

			SDL_BlitSurface(img10, NULL, ecran, &positionecran);

		}
    else if (po==2){

        SDL_BlitSurface(img5, NULL, ecran, &positionecran);
    }
SDL_Flip(ecran);
SDL_GetMouseState(&x,&y);
switch (e.type)

        {

        case SDL_QUIT:

            continuer=0;

            break;

        case SDL_KEYDOWN:
Mix_PlayChannel(-1, sound,0);
            switch (e.key.keysym.sym)

            {

            case SDLK_ESCAPE:

            SDL_Quit;
            continuer=0;
               break;

                
            case SDLK_DOWN:
 if (po==0){
                SDL_BlitSurface(img1, NULL, ecran, &positionecran);
                po=1;
            }
            else if (po==1){
                SDL_BlitSurface(img2, NULL, ecran, &positionecran);
                po=2;
            }
            else if (po==2){
                SDL_BlitSurface(img3, NULL, ecran, &positionecran);
                po=3;
           
            }
          
            break;

            case SDLK_UP:
 if (po==2){
                SDL_BlitSurface(img1, NULL, ecran, &positionecran);
                po=1;
            }
            else if (po==1){
                SDL_BlitSurface(img2, NULL, ecran, &positionecran);
                po=0;
            }
            else if (po==3){
                SDL_BlitSurface(img3, NULL, ecran, &positionecran);
                po=2;}
           
            
           
            break;
               } 
             break;

            

		

        	case SDL_MOUSEBUTTONUP:

			if (b==1)

				continuer=0;

		else if((b==3)||(x>=1235)&&(x<=1220)&&(y<=220)&&(y>=225))
{
po=2;
SDL_BlitSurface(img0, NULL, ecran, &positionecran);
SDL_Flip(ecran);}

				
            else if (b==2)
                po=1;
else if ((b==2)||(event.button.x>=1235)&&(event.button.x<=1220)&&(event.button.y<=220)&&(event.button.y>=225))
{
SDL_BlitSurface(img0, NULL, ecran, &positionecran);
SDL_Flip(ecran);}



                    break;

	}
}
}
