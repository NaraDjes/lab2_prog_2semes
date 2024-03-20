all: main
main: ./src/main.o ./src/IntVector.o
	gcc -Wall ./src/main.o ./src/IntVector.o -o main
main.o: ./src/main.c
	gcc -Wall ./src/main.c -o ./src/main.o
IntVector.o: ./src/IntVector.c
	gcc -Wall ./src/IntVector.c -o ./src/IntVector.o