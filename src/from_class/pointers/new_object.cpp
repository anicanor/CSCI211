/*

This program demonstrates using the C++ new operator.

A simple class called Pair is created to illustrate the instantiation of a
class using the new operator.

Usually a class is put in its own .h and .cpp files.  The class is inside
of this file so it is easier to talk about in class.  You should always 
put classes in a .h and .cpp files.

The main program reads in pairs of integers, and for each pair read in, 
a new Pair class is instantiated.

An array of pointers is used to hold pointers to all the Pair objects 
that are created.

This program does not have any error detection (e.g. bad input such as 
an non-even number of integers entered by the user) in order to keep the
code simple.

*/

#include <iostream>
using namespace std;

class Pair
{
    public:
        Pair(int a, int b);                // constructor for class Pair
        void print();
        void sum();
    
    private: 
        int m_a;
        int m_b;
};

Pair::Pair(int a, int b)
{
    cout << "Pair::Pair(" << a << "," << b << ") was called" << endl;
    m_a = a;
    m_b = b;

    // sum(); can call other member functions here
}

void Pair::print()
{
    cout << "(" << m_a << "," << m_b << ")" << endl;
}
void Pair::sum()
{
    cout << "the sum of m_a and m_b is " << m_a + m_b << endl;
}

int main()
{
    // array to hold the dynamically created Pair objects
    // the "= {NULL}" initializes ALL elements of the array
    Pair *data[100];
    int num_pairs = 0;   // the number of pair objects we have created
    int a,b;             // hold values read from cin

    // as long as there is an int to read,read it (as long as not EOF)
    cout << "enter a pair of numbers: ";
    while (cin >> a) 
    {
        //read 2nd integer in pair 
        // (dangerous assumption, what if no more nums?)
        cin >> b; 

        // instantiate a new Pair object using the new operator
        data[num_pairs] = new Pair(a,b);

        // we have read another pair of integers, update our counter
        num_pairs++;  
        cout << "enter a pair of numbers: ";
    }
    cout << endl;

    // print out all the pairs pointed to by the data array
    for (int i = 0; i < num_pairs; i++)
    {
        cout << "pair " << i << " = ";
        // dereference the pointer data[i] so we an call its print()
        (*data[i]).print(); 

        // data[i].print(); this is an error

        // the following is a shortcut to the above line
        // data[i]->print();
    }

    // NOTE: the memory associated with all the pair objects above is not
    // deallocated.  In a complete program this would be done using the 
    // C++ delete operator.
    // see new_object2.cpp for how to call the destructor

    return 0;
}
