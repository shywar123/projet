prog:main.o menu.o
	gcc main.o menu.o -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -o prog -g 

main.o: main.c 
	gcc -c main.c -g
menu.o:menu.c
	gcc -c menu.c -g




