all : driver.o sieve.o sieve.h
	gcc sieve.o driver.o -lm

run : all
	./a.out 1000000

sieve.o : sieve.c sieve.h
	gcc -o sieve.c -lm

driver.o : driver.c
	gcc -o driver.c -lm

clean : 
	rm *.o