#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "objeeet.h" 


void initialiser_ob (objet *ob)
{
ob->pos_ob.x=400;
ob->pos_ob.y=40;
ob->image=IMG_Load("chauve.png");
}
void initialiser_ob1 (objet *ob1)
{
ob1->pos_ob.x=280;
ob1->pos_ob.y=300;
ob1->image=IMG_Load("baril.png");
}
void initialiser_ob2 (objet *ob2)
{
ob2->pos_ob.x=400;
ob2->pos_ob.y=370;
ob2->image=IMG_Load("Snake.png");
}



void afficher_ob(objet *ob,SDL_Surface *ecran)
{
 SDL_BlitSurface(ob->image, NULL, ecran, &ob->pos_ob);
 SDL_Flip(ecran);
}
void afficher_ob1(objet *ob1,SDL_Surface *ecran)
{
 SDL_BlitSurface(ob1->image, NULL, ecran, &ob1->pos_ob);
 SDL_Flip(ecran);
}
void afficher_ob2(objet *ob2,SDL_Surface *ecran)
{
 SDL_BlitSurface(ob2->image, NULL, ecran, &ob2->pos_ob);
 SDL_Flip(ecran);
}

