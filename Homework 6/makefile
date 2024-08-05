main: main.o func.o
	gcc -o main main.o func.o
main.o: main.c header.h
	gcc -c main.c
func.o: func.c header.h
	gcc -c func.c

