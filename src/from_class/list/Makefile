list: main.o list.o
	g++ -Wall -g -o list main.o list.o

main.o: main.cpp list.h
	g++ -Wall -g -c main.cpp

list.o: list.cpp list.h
	g++ -Wall -g -c list.cpp

clean:
	rm -rf main.o list.o list
