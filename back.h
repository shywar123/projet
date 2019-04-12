#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

typedef struct
{
SDL_Surface *personnage;
SDL_Rect pospersonnage;
}personnage;


typedef struct
{
SDL_Surface *image;
SDL_Rect positionecran;
SDL_Surface *imageM;
}background;



void initialiser_personnage(personnage *perso);
void initialiser_background(background *back);
void affichage_personnage(SDL_Surface *ecran,personnage *perso);
void affichage_background(SDL_Surface *ecran,background *back);
SDL_Color GetPixel(SDL_Surface *pSurface,int x,int y);
int CollisionParfaite_droite(personnage perso,background back,int r,int g,int b);
int CollisionParfaite_gauche(personnage perso,background back,int r,int g,int b);
//void gestion_vie (personnage *perso ,int *k , int *k1 ,  SDL_Surface *ecran , int *run,SDL_Color rouge );



#endif // HEADER_H_INCLUDED
