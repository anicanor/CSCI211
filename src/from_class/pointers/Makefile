all: ptr new_int new_object new_object2

ptr: ptr.cpp
	g++ -Wall -pedantic -o ptr ptr.cpp

new_int: new_int.cpp
	g++ -Wall -pedantic -o new_int new_int.cpp

new_object: new_object.cpp
	g++ -Wall -pedantic -o new_object new_object.cpp

new_object2: new_object2.cpp
	g++ -Wall -pedantic -o new_object2 new_object2.cpp

clean:
	rm -f ptr new_int new_object new_object2
