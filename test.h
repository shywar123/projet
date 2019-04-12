#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <time.h>
#define W_Screen 800
#define H_Screen 600


#define SPEED 5


#define SPRITE_H 96
#define SPRITE_W  111
#define MAX_FRAMES 8


  #define W_BackgImg 259
  #define H_BackgImg 194w




typedef struct 
{
         SDL_Surface *image;
	 SDL_Rect positionp;


}personage;

void  init_persoP(personage *p); 
void  afficherjoueur(personage *p, SDL_Surface *screen); 
 _Bool CollisionBB(personage *p,SDL_Rect position1);

typedef enum STATE STATE;
enum STATE {WAITING, FOLLOWING, ATTACKING};



typedef struct 
{
	//int vie; 
	SDL_Surface *image ;
	SDL_Rect pos_bs;
	STATE STATE;

}boss;


void initialiser_bs (boss *bs);
void afficher_bs(boss *bs,SDL_Surface *ecran);


typedef struct 
{
 SDL_Surface * img;
 SDL_Rect 	p;
}enigme;

void init_enigme(enigme * e) ;
void  generate_afficher (SDL_Surface * screen  , char image [],enigme *e,int *alea) ;
 int solution_e (char image []) ;
int resolution (int * running,int *run);
void afficher_resultat (SDL_Surface * screen,int s,int r,enigme *en) ;




typedef enum STATE STATE;
enum STATE {WAITING, FOLLOWING, ATTACKING};



typedef struct 
{
	//int vie; 
	SDL_Surface *image ;
	SDL_Rect pos_es;
	STATE STATE;

}ennemi;

void initialiser_es (ennemi *es);
void afficher_es(ennemi *es,SDL_Surface *ecran);
void dep_es(ennemi *es,SDL_Surface *ecran);

#endif // TEST_H_INCLUDED
















