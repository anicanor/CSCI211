/*
    This program demonstrates the concept of a pointer (ptr below).

    It also demonstrates the address of (&) and dereference (*) operators

*/
#include <iostream>
using namespace std;

int main()
{
    int i = 42;
    int *ptr = &i; // this * declares a pointer,  & is address of operator

    cout << "i = " << i << endl; // prints the value of i

    *ptr = 99;          // this * dereferences the ptr variable
                        // put 99 in the spot in memory referenced by ptr

    cout << "i = " << i << endl; // prints the value of i
    cout << "&i = " << &i << endl; // prints the address of i
    cout << "ptr = " << ptr << endl; // prints memory address held by ptr
    cout << "*ptr = " << *ptr << endl; // prints integer ptr "points to"
    cout << "&ptr = " << &ptr << endl; // prints the address of ptr

    return 0;
}
