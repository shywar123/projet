programme:main.o enigme.o
	gcc main.o enigme.o -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -o programme -g 

main.o: main.c 
	gcc -c main.c -g
enigme.o:enigme.c
	gcc -c enigme.c -g
