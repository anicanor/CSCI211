all: implicit explicit2 explicit

implicit: implicit_type_conversions.cpp
	g++ -Wall -pedantic -g -o implicit implicit_type_conversions.cpp

explicit2: explicit2_type_conversions.cpp
	g++ -Wall -pedantic -g -o explicit2 explicit2_type_conversions.cpp

explicit: explicit_type_conversions.cpp
	g++ -Wall -pedantic -g -o explicit explicit_type_conversions.cpp

clean:
	rm -rf implicit explicit explicit2
