#include <stdio.h> 
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "back.h"
void initialiser_personnage(personnage *perso)
{
perso->pospersonnage.x=0;
perso->pospersonnage.y=330;
perso->personnage = IMG_Load("perso12.png");
}


void initialiser_background(background *back)
{
back->positionecran.x=0;
back->positionecran.y=0;
back->image = IMG_Load("backgroundex.bmp");
back->imageM = SDL_LoadBMP("backgroundm.bmp");
}

void affichage_personnage(SDL_Surface *ecran,personnage *perso)
{
SDL_BlitSurface(perso->personnage , NULL , ecran, &perso->pospersonnage);
}


void affichage_background(SDL_Surface *ecran,background *back)
{
SDL_BlitSurface(back->image , NULL , ecran , &back->positionecran);

}



SDL_Color GetPixel(SDL_Surface *pSurface,int x,int y)
{
SDL_Color color;
Uint32 col=0;
//Determine position
char* pPosition=(char* ) pSurface->pixels;
pPosition+= (pSurface->pitch * y);
pPosition+= (pSurface->format->BytesPerPixel *x);
memcpy(&col ,pPosition ,pSurface->format->BytesPerPixel);
//convertir color
SDL_GetRGB(col,pSurface->format, &color.r, &color.g, &color.b);
return (color);
}





int CollisionParfaite_droite(personnage perso,background back,int r,int g,int b)
{
SDL_Color couleur_obstacle;
int X,Y,W,H;
X=perso.pospersonnage.x;
Y=perso.pospersonnage.y;
W=perso.pospersonnage.w;
H=perso.pospersonnage.h;
SDL_Rect pos[8];
pos[0].x=X;
pos[0].y=Y;
pos[1].x=X+W/2;
pos[1].y=Y;
pos[2].x=X+W;
pos[2].y=Y;
pos[3].x=X;
pos[3].y=Y+H/2;
pos[4].x=X;
pos[4].y=Y+H;
pos[5].x=X+W/2;
pos[5].y=Y+H;
pos[6].x=X+W;
pos[6].y=Y+H;
pos[7].x=X+W;
pos[7].y=Y+H/2;
int collision=0;
int i=0;
while((i<8) && (collision==0))
{
couleur_obstacle=GetPixel(back.imageM,pos[i].x,pos[i].y);
if((couleur_obstacle.r==r) && (couleur_obstacle.g==g) && (couleur_obstacle.b==b))
collision=1;
i++;
}
return collision;
}

int CollisionParfaite_gauche(personnage perso,background back,int r,int g,int b)
{
SDL_Color couleur_obstacle;
int X,Y,W,H;
X=perso.pospersonnage.x;
Y=perso.pospersonnage.y;
W=perso.pospersonnage.w;
H=perso.pospersonnage.h;
SDL_Rect pos[8];
pos[0].x=X;
pos[0].y=Y;
pos[1].x=X+W/2;
pos[1].y=Y;
pos[2].x=X+W;
pos[2].y=Y;
pos[3].x=X;
pos[3].y=Y+H/2;
pos[4].x=X;
pos[4].y=Y+H;
pos[5].x=X+W/2;
pos[5].y=Y+H;
pos[6].x=X+W;
pos[6].y=Y+H;
pos[7].x=X+W;
pos[7].y=Y+H/2;
int collision=0;
int i=0;
while((i<8) && (collision==0))
{
couleur_obstacle=GetPixel(back.imageM,pos[i].x,pos[i].y);
if((couleur_obstacle.r==r) && (couleur_obstacle.g==g) && (couleur_obstacle.b==b))
collision=1;
i++;
}
return collision;
} 

//void gestion_vie (personnage *perso ,int *k , int *k1 ,  SDL_Surface *ecran , int *run,SDL_Color rouge )
//{
//	if (perso->nombre_vie==3 && (*k1)==0)
//	{perso->affichage_vie=IMG_Load("vie3.png");
//	(*k1)=1;
//	}
  //     
	//if (perso->nombre_vie==2 && (*k)==0)
	//{

//	perso->affichage_vie=IMG_Load("vie2.png");
//	(*k)=1;

//	}

//	if (perso->nombre_vie==1 && (*k1)==0)
//	{perso->affichage_vie=IMG_Load("vie1.png");
//	(*k1)=1;
//	}

//	if (perso->nombre_vie==0)
//	{
		
//	perso->affichage_vie=IMG_Load("vie0.png");
//	}

//		SDL_Flip(ecran);
//		SDL_Delay(1000);

//	}
//
//}

