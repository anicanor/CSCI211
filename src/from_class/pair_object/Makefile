pair: main.o pair.o
	g++ -o pair main.o pair.o

main.o: main.cpp pair.h
	g++ -c main.cpp

pair.o: pair.cpp pair.h
	g++ -c pair.cpp

clean:
	rm -f pair.o main.o pair
