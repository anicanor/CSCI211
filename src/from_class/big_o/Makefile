all: infinite list_fast list_slow

infinite: infinite.cpp
	g++ -g -o infinite infinite.cpp

list_slow: list_slow.cpp
	g++ -g -o list_slow list_slow.cpp -pg

list_fast: list_fast.cpp
	g++ -g -o list_fast list_fast.cpp -pg

clean:
	rm -f infinite list_fast list_slow
