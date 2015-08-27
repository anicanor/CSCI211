# make is a utility that compiles programs 
# it is much faster than typing the g++ lines all the time

main: main.o address.o
	g++ -Wall -pedantic -o main main.o address.o

main.o: main.cpp address.h
	g++ -Wall -pedantic -c main.cpp

address.o: address.cpp address.h
	g++ -Wall -pedantic -c address.cpp

clean:
	rm -f main main.o address.o
