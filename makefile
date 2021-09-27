all: euler.o main.o
	gcc -o euler euler.o main.o

main.o: main.c euler.h
	gcc -c main.c

euler.o: euler.h euler.c
	gcc -c euler.c
