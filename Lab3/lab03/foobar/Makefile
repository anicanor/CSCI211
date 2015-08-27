


main: main.o bar.o foo.o
	g++ -Wall -pedantic -g -o main main.o foo.o bar.o

main.o: main.cpp foo.h bar.h
	g++ -Wall -pedantic -g -c main.cpp

foo.o: foo.cpp foo.h
	g++ -Wall -pedantic -g -c foo.cpp

bar.o: bar.cpp bar.h
	g++ -Wall -pedantic -g -c bar.cpp


clean:
	rm -f main *.o 
