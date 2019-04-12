#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED 


typedef struct animation
{
	SDL_Surface *tsawer[4];
	SDL_Surface *tsawerL[4];
	SDL_Surface *bg;
	// anim à droite:
	SDL_Surface *imin1;
	SDL_Surface *imin2;
	SDL_Surface *imin3;
	SDL_Surface *imin4;

	// anim à gauche:
	SDL_Surface *issar1;
	SDL_Surface *issar2;
	SDL_Surface *issar3;
	SDL_Surface *issar4;

	SDL_Rect pos_Sprite;
	SDL_Rect pos_bg;
	SDL_Surface *screen;

	int done;
	int direct;

	SDL_Event event_anim;

}animation;
void anim();

#endif

