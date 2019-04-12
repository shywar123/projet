# ifndef PERSO_H_INCLUDED
# define  PERSO_H_INCLUDED

typedef struct 
{
         SDL_Surface *image;
	 SDL_Rect positionp;


}personage;

void  init_persoP(personage *p); 
void  afficherjoueur(personage *p, SDL_Surface *ecran); 
void deplacerpreso(personage *p,SDL_Surface *ecarn);
void scroll(SDL_Rect *camera,SDL_Surface *ecran,SDL_Event *e,personage *p);

# endif
