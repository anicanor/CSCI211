/*

This program demonstrates using the C++ new operator.

A simple class called Pair is created to illustrate the instantiation of a
class using the new operator.

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
}

void
Pair::print()
{
    cout << "(" << m_a << "," << m_b << ")" << endl;
}
void
Pair::sum()
{
    cout << "the sum of m_a and m_b is " << m_a + m_b << endl;
}
int
main()
{
    int i(99);
    
    Pair p(42, 86);

    p.print();
    p.sum();

}

