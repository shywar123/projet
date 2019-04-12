#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include "enig.h"

void init_enigme(enigme * e)
{
	e->p.x=10;
	e->p.y=10;	
	e->img=NULL;


}

 void generate_afficher (SDL_Surface * screen  , char image [],enigme *e,int *alea)
{ 
	int test=*alea ;
do{
 *alea = 1+ rand()%4;
}while(*alea==test) ;
 sprintf(image ,"%d.png",*alea);

e->img = IMG_Load(image);
 SDL_BlitSurface(e->img,NULL,screen,&(e->p)) ;
  SDL_Flip(screen) ;
}
 
 int solution_e (char image [])
 {
 	int solution =0 ;
 	
 	if(strcmp(image,"1.png")==0)
 	{
     		solution =1 ;
 	}
 	else  	if(strcmp(image,"2.png")==0)
 	{
 		solution =2;

 	}
 	else 	if(strcmp(image,"3.png")==0)
 	{
 		solution =1;	
 	}
	else 	if (strcmp(image,"4.png")==0)
 	{
 		solution =3;	
 	}
 	return solution;
 }

int resolution (int * running,int *run )
{
	SDL_Event event ;
  int r=0 ;
	SDL_PollEvent(&event);
	switch(event.type)
	{
		  case SDL_QUIT:
			        *running= 0 ;
                *run = 0;
				break ;

       case SDL_KEYDOWN : 
            switch( event.key.keysym.sym )
                {
			  case  SDLK_a: 
			  r= 1;
			   break ;
			   case  SDLK_z :
			   r= 2;
			   break;
			   case SDLK_e: 
			   r=3 ;
			   break;
			    }
       break ;

                 
	}
  return r ;
}
 
 void afficher_resultat (SDL_Surface * screen,int s,int r,enigme *en)
 {
 
 	if (r==s)
 	{
 		en->img=IMG_Load("00.png");
 		SDL_BlitSurface(en->img, NULL, screen, &(en->p)) ;
        SDL_Flip(screen);
 	}
 	else
 	{
 		en->img=IMG_Load("11.png");
 		SDL_BlitSurface(en->img, NULL, screen, &(en->p)) ;
        SDL_Flip(screen);
 	}
 }

void enig()
{

	SDL_Surface *screen;
	enigme  e;
	int s,r,run =1,running=1,alea;
	char image[30]="";
	SDL_Event event;
    srand(time(NULL));
   
	 
	 SDL_Init ( SDL_INIT_VIDEO ) ;



	 screen=SDL_SetVideoMode(1024,630,32,SDL_HWSURFACE  |  SDL_DOUBLEBUF );
	 init_enigme(&e);
	
	 while (run)
	 {
	    running=1,r=0 ;
	     SDL_PollEvent(&event);
           switch(event.type)
            {
              case SDL_QUIT:
                run = 0;
			  break ;
            }	
        	
      generate_afficher ( screen  , image ,&e,&alea) ;
	        

      s=solution_e (image );
			do{
			r=resolution (&running,&run);
			}while((r>3 || r<1) && running!=0) ;
			
			
      while(running){

				afficher_resultat (screen,s,r,&e) ;
			       SDL_WaitEvent(&event);
                     switch(event.type)
                       {
					     case SDL_QUIT :
                              running =0 ;
						      run=0 ;
					     break ;
                         case SDL_KEYDOWN :
						    
                             switch( event.key.keysym.sym )
                                  {
			                        case  SDLK_ESCAPE: 
			                           running= 0 ;
			                        break ;
			                      }
						 break ;
                       }
                    } 	
   }
      SDL_FreeSurface(screen);
      SDL_Quit();
	return 0;
}
 
