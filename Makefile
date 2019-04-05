prog: mainn.o ennemi.o
	gcc mainn.o ennemi.o  -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -o prog -g
mainn.o:mainn.c
	gcc -c mainn.c -g
ennemi.o:ennemi.c
	gcc -c ennemi.c -g
