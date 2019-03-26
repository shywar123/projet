#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <time.h>
#include <enigme.h>

int initialiser_enigme(enigme *back)
{
srand(time(NULL));
int rand_num=1;
back->pos_fond=0;
back->pos_fond=0;
if(rand_num==1)
back->fondenigme=IMG_Load("fond_enigme.png");
if(rand_num==2)
back->fondenigme=IMG_Load("enigm2");
if(rand_num==3)
back->fondenigme=IMG_Load("enigme3");
if(rand_num==4)
back->fondenigme=IMG_Load("enigme4");
return 1;
void afficher_enigme(SDL_Surface *ecran,enigme *back)
{
SDL_BlitSurface(back->fondenigme,NULLn,ecran, &back->pos_fond);
}


