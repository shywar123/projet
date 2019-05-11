#include <stdlib.h>
#include <stdio.h>
#include "partage_ecran.h"

background Initialiser_map (background backg)
{

backg.speed_camera1=10;
backg.camera1.x=0;
backg.camera1.y=0;
backg.camera1.h=680;
backg.camera1.w=640;
backg.positionback1.x=0;
backg.positionback1.y=0;
backg.positionback1.w=640;
backg.positionback1.h=680;
backg.speed_camera2=10;
backg.camera2.x=0;
backg.camera2.y=0;
backg.camera2.h=680;
backg.camera2.w=640;
backg.positionback2.x=640;
backg.positionback2.y=0;
backg.positionback2.w=640;
backg.positionback2.h=680;
backg.background1=SDL_LoadBMP("map.bmp");
return backg;
}




void afficher_background(background backg,SDL_Surface*ecran)
{

SDL_BlitSurface(backg.background1,&backg.camera1,ecran,&backg.positionback1);
//SDL_Flip(ecran);
}
void afficher_background1(background backg,SDL_Surface*ecran)
{
SDL_BlitSurface(backg.background1,&backg.camera2,ecran,&backg.positionback2);
//SDL_Flip(ecran);
}
void initialiser_perso(perso *wassime){
		
		//evan->afficher_hero=NULL;
		//evan->afficher_hero=IMG_Load("walk.png");


		wassime->afficher_heror[0]=IMG_Load("r1.png");
		wassime->afficher_heror[1]=IMG_Load("r2.png");
		wassime->afficher_heror[2]=IMG_Load("r3.png");
		wassime->afficher_heror[3]=IMG_Load("r4.png");
		wassime->afficher_heror[4]=IMG_Load("r5.png");
		wassime->afficher_heror[5]=IMG_Load("r6.png");
		wassime->afficher_heror[6]=IMG_Load("r7.png");
		wassime->afficher_heror[7]=IMG_Load("r8.png");

		wassime->afficher_herol[0]=IMG_Load("l1.png");
		wassime->afficher_herol[1]=IMG_Load("l2.png");
		wassime->afficher_herol[2]=IMG_Load("l3.png");
		wassime->afficher_herol[3]=IMG_Load("l4.png");
		wassime->afficher_herol[4]=IMG_Load("l5.png");
		wassime->afficher_herol[5]=IMG_Load("l6.png");
		wassime->afficher_herol[6]=IMG_Load("l7.png");
		wassime->afficher_herol[7]=IMG_Load("l8.png");


		wassime->afficher_herof[0]=IMG_Load("tr1.png");
		wassime->afficher_herof[1]=IMG_Load("tr2.png");
		wassime->afficher_herof[2]=IMG_Load("tr3.png");

		wassime->afficer_hp[0]=IMG_Load("hp0.png");
		wassime->afficer_hp[1]=IMG_Load("hp1.png");
		wassime->afficer_hp[2]=IMG_Load("hp2.png");
		wassime->afficer_hp[3]=IMG_Load("hp3.png");

		wassime->pos_hp.x=20;
		wassime->pos_hp.y=20;

		wassime->hp=3;
		wassime->hit=0;

	wassime->farm=0;
	
	wassime->pos_hero2.x=0;
	wassime->pos_hero2.y=0;

}
void afficher_perso(perso wassime,SDL_Surface *ecran){
	if ((wassime.mouvment==1)||(wassime.mouvment==2)||(wassime.mouvment==9))
		SDL_BlitSurface(wassime.afficher_heror[wassime.farm],NULL,ecran,&(wassime.pos_hero2));
	if (wassime.mouvment==11)
		SDL_BlitSurface(wassime.afficher_herof[wassime.farm],NULL,ecran,&(wassime.pos_hero2));
	if (wassime.mouvment==3)
		SDL_BlitSurface(wassime.afficher_heror[0],NULL,ecran,&(wassime.pos_hero2));
}
void initialiser_perso2(perso *wassime){
		
		//evan->afficher_hero=NULL;
		//evan->afficher_hero=IMG_Load("walk.png");


		wassime->afficher_heror[0]=IMG_Load("r1.png");
		wassime->afficher_heror[1]=IMG_Load("r2.png");
		wassime->afficher_heror[2]=IMG_Load("r3.png");
		wassime->afficher_heror[3]=IMG_Load("r4.png");
		wassime->afficher_heror[4]=IMG_Load("r5.png");
		wassime->afficher_heror[5]=IMG_Load("r6.png");
		wassime->afficher_heror[6]=IMG_Load("r7.png");
		wassime->afficher_heror[7]=IMG_Load("r8.png");

		wassime->afficher_herol[0]=IMG_Load("l1.png");
		wassime->afficher_herol[1]=IMG_Load("l2.png");
		wassime->afficher_herol[2]=IMG_Load("l3.png");
		wassime->afficher_herol[3]=IMG_Load("l4.png");
		wassime->afficher_herol[4]=IMG_Load("l5.png");
		wassime->afficher_herol[5]=IMG_Load("l6.png");
		wassime->afficher_herol[6]=IMG_Load("l7.png");
		wassime->afficher_herol[7]=IMG_Load("l8.png");


		wassime->afficher_herof[0]=IMG_Load("tr1.png");
		wassime->afficher_herof[1]=IMG_Load("tr2.png");
		wassime->afficher_herof[2]=IMG_Load("tr3.png");

		wassime->afficer_hp[0]=IMG_Load("hp0.png");
		wassime->afficer_hp[1]=IMG_Load("hp1.png");
		wassime->afficer_hp[2]=IMG_Load("hp2.png");
		wassime->afficer_hp[3]=IMG_Load("hp3.png");

		wassime->pos_hp.x=20;
		wassime->pos_hp.y=20;

		wassime->hp=3;
		wassime->hit=0;

	wassime->farm=0;
	
	wassime->pos_hero22.x=640;
	wassime->pos_hero22.y=0;

}
void afficher_perso2(perso wassime,SDL_Surface *ecran){
	if ((wassime.mouvment==1)||(wassime.mouvment==2)||(wassime.mouvment==9))
		SDL_BlitSurface(wassime.afficher_heror[wassime.farm],NULL,ecran,&(wassime.pos_hero22));
	if (wassime.mouvment==11)
		SDL_BlitSurface(wassime.afficher_herof[wassime.farm],NULL,ecran,&(wassime.pos_hero22));
	if (wassime.mouvment==3)
		SDL_BlitSurface(wassime.afficher_heror[0],NULL,ecran,&(wassime.pos_hero22));
}


background scrolling(background backg,SDL_Event e)
{  
SDL_WaitEvent(&e);
    switch(e.type)
    {     	
case SDL_KEYDOWN:
    	
  	switch(e.key.keysym.sym)
        {
                   case SDLK_LEFT:
                   backg.camera1.x-=200;
                   break;
                   case SDLK_RIGHT:
                   backg.camera1.x+=200;
                   break;
        }
	
	
	if(backg.camera1.x>=5760)
		backg.camera1.x=5760;
	if(backg.camera1.x<=0)
		backg.camera1.x=0;
    }
return backg;	    	      
}

background scrolling1(background backg,SDL_Event e)
{  
SDL_WaitEvent(&e);
    switch(e.type)
    {     	
case SDL_KEYDOWN:
    	
  	switch(e.key.keysym.sym)
        {
                   case SDLK_q:
                   backg.camera2.x-=200;
                   break;
                   case SDLK_d:
                   backg.camera2.x+=200;
                   break;
        }
	

    }
return backg;	    	      
}













