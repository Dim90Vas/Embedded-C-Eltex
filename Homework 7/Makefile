rezult: main.c add.c sub.c mul.c div.c
	gcc -c add.c sub.c mul.c div.c
	ar rc libcalc.a add.o sub.o mul.o div.o  
	ranlib libcalc.a
	gcc -c main.c
	gcc main.o -L. -lcalc -o rezult
