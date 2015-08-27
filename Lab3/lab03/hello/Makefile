# simple makefile to demonstrate how easy it is to use make
# form:
#    target: files target depends on 
#    <tab> command to generate target

hello: hello.cpp
	g++ -Wall -pedantic -g -o hello hello.cpp

# This rule tells make what to delete when the user types "make clean"
# BE VERY CAREFUL to only put generated files here
clean:
	rm hello
