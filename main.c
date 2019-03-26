int main()
{
SDL_Surface *ecran=NULL;
int continuer=1,random;
enigme back;
SDL_Event event; 
random=initialiser_enigme(&back);
SDL_Init(SDL_SetVideo(800,450,32,SDL_HWSURFACE |SDL_DOUBLEBUF);
afficher_enigme(ecran,&back);
 while(continuer)
{
SDL_PollEvent(&event);
switch(event.type)
{
continuer=0;
break;
}
}
SDL_FreeSurface(back.fondenigme);
return 0;
}
