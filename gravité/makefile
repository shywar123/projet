prog:main.o gravite.o
	gcc main.o gravite.o -o prog -lSDL -lSDL_ttf -lSDL_image -lSDL_mixer  -g
main.o:main.c
	gcc -c main.c -g
gravite.o: gravite.c
	gcc -c gravite.c -g
