reverse: reverse.o istack.o
	g++ -Wall -pedantic -g -o reverse reverse.o istack.o

reverse.o: reverse.cpp istack.h
	g++ -Wall -pedantic -g -c reverse.cpp

istack.o: istack.cpp istack.h
	g++ -Wall -pedantic -g -c istack.cpp
