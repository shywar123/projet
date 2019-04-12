prog:main.o scroll.o perso.o
	gcc main.o scroll.o perso.o -o prog -lSDL -lSDL_ttf -lSDL_image -lSDL_mixer -g


main.o:main.c
	gcc -c main.c -g

scroll.o:scroll.c
	gcc -c scroll.c -g

perso.o:perso.c
	gcc -c perso.c -g


