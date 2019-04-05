#ifndef BOSS_H_INCLUDED
#define BOSS_H_INCLUDED


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
#endif // BOSS_H_INCLUDED
