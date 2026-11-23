main: main.o string.o
	gcc main.o string.o -o main

main.o: main.c string.h
	gcc -Wall -Wextra main.c string.h -c main.o

string.o: string.c string.h
	gcc -Wall -Wextra string.c string.h -c string.o
