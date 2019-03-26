typedef struct 
{
SDL_Surface *fondenigme;
SDL_Rect pos_fond;
}enigme;



int initialiser_enigme(enigme *back);
void afficher_enigme(SDL_Surface *ecran,enigme *back);

