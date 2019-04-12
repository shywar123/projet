prog: test.o ennemi.o perso.o enigf.o 
	gcc test.o ennemi.o perso.o enigf.o  -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -o prog -g

test.o:test.c
	gcc -c test.c -g
ennemi.o:ennemi.c
	gcc -c ennemi.c -g
perso.o:perso.c
	gcc -c perso.c -g
enigf.o:enigf.c
	gcc -c enigf.c -g 


