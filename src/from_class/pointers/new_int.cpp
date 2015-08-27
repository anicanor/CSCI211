/*

This program demonstrates using the C++ new operator.

*/

#include <iostream>
using namespace std;

int
main()
{
    int *ptr;  // a pointer that does not point to anything

    ptr = new int;   // reserve (or allocate) some memory for ptr


    // now ptr points to a location in memory large enough to hold an int
    // the new operator will not give any other part of the program the
    // address of this spot in memory

    cout << "new returned the address:  " << ptr << endl << endl;

    cout << "*ptr = " << *ptr << endl;
    cout << "  This spot in memory is not initialized yet." << endl;
    cout << "  IT MIGHT HAVE THE VALUE 0, IT MIGHT HAVE A RANDOM VALUE." <<endl;
    cout << "  DO NOT COUNT ON IT BEING ZERO." << endl << endl;

    // this is the address of the local variable ptr
    // think carefully about what is happening here
    cout << "&ptr = " << &ptr << endl;

    *ptr = 42;  // place the value 42 in the location returned by new

    cout << "*ptr = " << *ptr << endl;
    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(ptr) = " << sizeof(ptr) << endl;
}






