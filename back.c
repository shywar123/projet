#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include"struct.h"
void initialiser_background(background *bckg){


	bckg->calque_background=NULL;
	bckg->calque_background=IMG_Load("backgroundm.png");

	bckg->afficher_background=NULL;
	bckg->afficher_background=SDL_LoadBMP("background.bmp");
	bckg->pos_background.x=0;
	bckg->pos_background.y=0;
	bckg->pos_background2.x=0;
	bckg->pos_background2.y=0;
	bckg->pos_background2.h=550;
	bckg->pos_background2.w=1200;
}
void afficher_background(background bckg,SDL_Surface *ecran){
	
	SDL_BlitSurface(bckg.afficher_background,&(bckg.pos_background2),ecran,&(bckg.pos_background));
}

void scrolling (perso *wassime,background *bckg ,int co)
{
		wassime->etat=0;
	switch(wassime->mouvment)
	{

		case 1: 
			if (co!=2){
				
			if ((bckg->pos_background2.x<2000)&&(wassime->pos_hero2.x>=300)){
                		bckg->pos_background2.x=bckg->pos_background2.x+5;
                		wassime->etat=1;
			}
			if (((wassime->pos_hero2.x<300)||((bckg->pos_background2.x>=2000))&&(wassime->pos_hero2.x<900)))
				wassime->pos_hero2.x=wassime->pos_hero2.x+5;
	
	}
		
		
		break;
		case 2:
		if (co!=2){
				wassime->etat=2;
			if (bckg->pos_background2.x>0){
                		bckg->pos_background2.x=bckg->pos_background2.x-5;
                		wassime->etat=2;
                	}
	    		if (((bckg->pos_background2.x!=0)&&(wassime->pos_hero2.x>=150))||((bckg->pos_background2.x==0)&&(wassime->pos_hero2.x=50)))
				wassime->pos_hero2.x=wassime->pos_hero2.x-5;
				}
		break;
		case 3:

		if ((wassime->pos_hero2.y>50)&&(co!=8)){
			if (bckg->pos_background2.x<6800){
				wassime->pos_hero2.y=wassime->pos_hero2.y-5;
				//evan->pos_hero2.x=evan->pos_hero2.x+20;
				//bckg->pos_background2.x=bckg->pos_background2.x+50;
			}
		}
		break;
	}
	if ((wassime->mouvment!=3)&&(co!=10)&&(co!=2)){
		wassime->pos_hero2.y=wassime->pos_hero2.y+3;
	}
}

SDL_Color GetPixel(SDL_Surface *surface,int x,int y)
{
	SDL_Color color ;
	Uint32 col = 0 ;
	char* pPosition = ( char* ) surface->pixels ;
	pPosition += ( surface->pitch * y ) ;
	pPosition += ( surface->format->BytesPerPixel * x ) ;
	memcpy ( &col , pPosition , surface->format->BytesPerPixel ) ;
	SDL_GetRGB ( col , surface->format , &color.r , &color.g , &color.b ) ;
	return ( color ) ;
}



int collision_Parfaite(SDL_Surface *calque,SDL_Surface *perso,SDL_Rect posperso,SDL_Rect posmap)
{
  SDL_Color col,col2,col22,col11,col0,col1,col12;
  //if(d==0)//imin
  //{
	//col=GetPixel(calque,posperso.x+100+posmap.x,posperso.y+280);
  	col0=GetPixel(calque,posperso.x+10+posmap.x,posperso.y);
  	col11=GetPixel(calque,posperso.x+40+posmap.x,posperso.y+10);
  	col12=GetPixel(calque,posperso.x+10+posmap.x,posperso.y+40);
  	col22=GetPixel(calque,posperso.x+65+posmap.x,posperso.y+100);
	col2=GetPixel(calque,posperso.x+10+posmap.x,posperso.y+100);
	col1=GetPixel(calque,posperso.x+65+posmap.x,posperso.y+100);
	col22=GetPixel(calque,posperso.x+65+posmap.x,posperso.y+65);
	printf("%d %d %d\n", col22.r,col22.b,col22.g);
	
	//col1=GetPixel(calque,posperso.x+100+posmap.x,posperso.y+240);

 
if ((col2.r==255)&&(col2.b==0)&&(col2.g==0))
  return 1;//sa9ih(7ofra)
else if ((col22.r==0)&&(col22.b==0)&&(col22.g==0))
  return 2;//obstacleup
else if ((col11.r==0)&&(col11.b==0)&&(col11.g==0))
  return 2;//obstacledown
else if ((col12.r==0)&&(col12.b==0)&&(col12.g==0))
  return 2;//obstacledown
else if ((col0.r==0)&&(col0.b==0)&&(col0.g==0))
  return 8;//obstacle
else if ((col22.r==0)&&(col22.b==0)&&(col22.g==255))
  return 3;//door enigme
else if ((col1.r==0)&&(col1.b==0)&&(col1.g==0))
 return 10;//sa9ih(9a3)
else if ((col2.r==0)&&(col2.b==0)&&(col2.g==0))
 return 10;//sa9ih(9a3)
else
{
	return 0;
}
}
