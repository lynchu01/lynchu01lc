lowercase: lowercase.o changecase.o
	cc  -o lowercase lowercase.o changecase.o

changecase.o: changecase.c
	cc -c changecase.c

lowercase.o: lowercase.c lowercase.h
	cc -c lowercase.c

clean:
	rm *.o
	rm lowercase
 



