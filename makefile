all: myparse.o
	gcc -o a.out myparse.o

myparse.o: myparse.c
	gcc -c myparse.c

run:
	./a.out

clean:
	rm *.o
	rm *~
