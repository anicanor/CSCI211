#include <iostream>
using namespace std;

#include "address.h"

int main()
{

    cout << "start of main()" << endl << endl;

    // Create three Address variables (instantiations of class Address)
    Address tina("Tina Boxer", "123 Elm Street", 95920);
    Address sam("Sam Smith", "456 Main Street", 95921);
    Address tasha("Tasha Jones");

    // call the Address object's print functions
    // class Address print() function is public
    cout << endl << "main() about to print tina object" << endl;
    tina.print();
    cout << endl << "main() about to print sam object" << endl;
    sam.print();
    cout << endl << "main() about to print tasha object" << endl;
    tasha.print();

    cout << endl << "end of main()..." << endl;


    // the following will cause a compilation error
    // m_zip is a private member variable of class Address
    // tina.m_zip = 3;

    return 42;
}













