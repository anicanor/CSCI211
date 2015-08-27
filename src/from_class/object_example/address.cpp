#include <iostream>
using namespace std;

#include "address.h"

// constructor
Address::Address(string name)
{
    m_name = name;
    m_street = "none";
    m_zip = 0;

    cout << "Address::Address(" 
         << m_name <<") was called" << endl;

}

// constructor
Address::Address(string name, string street, int zip)
{
    m_name = name;
    m_street = street;
    m_zip = zip;

    cout << "Address::Address(" 
         << m_name << ","
         << m_street << ","
         << m_zip<< ") was called" << endl;
}

// in this example the destructor does not do anything useful
// only here to demonstrate how/when destructors are called
Address::~Address()
{
    cout << "Address::~Address() was called" << endl;
}

void Address::print()
{
    cout << m_name << endl;
    cout << m_street << endl;
    cout << m_zip << endl;
}















