// Demonstrate an explicit type conversion error

#include <iostream>
using namespace std;

int main()
{
    int a = 9999;
    int int_value = 42;
    int b = 9999;
    double *double_pointer;

    // The following line basically means:
    //   take the bits that represent the integer a and interpret
    //   those bits as if they represented a double
    // I will lecture on how this works soon
    //   for now focus on the notion that an explicit cast can really 
    //   mess up data

    // the following causes the compiler to issue and error
    //    -- cannot convert int address to a double address
    // double_pointer = &int_value; 

    // including an explicit case allows this to happen
    double_pointer = (double *) &int_value;

    cout << "int_value = " << int_value << endl;
    cout << "the double_pointer points to the address of int_value" << endl;
    cout << "*double_pointer = " << *double_pointer << endl;

}
