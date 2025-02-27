CC = gcc
CFLAGS = -Wall

all: matrix_multiplication

matrix_multiplication: main.o
	$(CC) -o matrix_multiplication main.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f *.o matrix_multiplication
	
	







