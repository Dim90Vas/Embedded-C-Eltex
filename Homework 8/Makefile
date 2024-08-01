rezultdyn: main.c add.c sub.c mul.c div.c
	gcc -fPIC -c add.c sub.c mul.c div.c
	gcc -shared -o libcalcdyn.so add.o sub.o mul.o div.o  
	gcc -c main.c
	gcc main.o -L. -lcalcdyn -o rezultdyn
