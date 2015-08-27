/*

This is the same program as new_object.cpp with a destructor

*/

#include <iostream>
using namespace std;

class Pair
{
    public:
        Pair(int a, int b);                // constructor for class Pair
        ~Pair();                           // destructor for class Pair
        void print();
    
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

Pair::~Pair()
{
    cout << "Pair::~Pair() was called" << endl;
}

void
Pair::print()
{
    cout << "(" << m_a << "," << m_b << ")" << endl;
}


int
main()
{
    // array to hold the dynamically created Pair objects
    // the "= {NULL}" initializes ALL elements of the array
    Pair *data[100];
    int num_pairs = 0;   // the number of pair objects we have created
    int a,b;             // hold values read from cin

    cout << "enter a pair of numbers: ";
    // as long as there is an int to read,read it (as long as not EOF)
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

        // the following is a shortcut to the above line
        // data[i]->print();
    }

    // now we should delete (un-reserve) the memory allocated by new
    
    for (int i = 0; i < num_pairs; i++)
    {
        delete data[i];
        data[i] = 0;   // not necessary but good programming practice
    }

    return 0;
}
