// Demonstrate an explicit type conversion error

#include <iostream>
using namespace std;

int main()
{
    int a = 42;
    double z;

    // The following line basically means:
    //   take the bits that represent the integer a and interpret
    //   those bits as if they represented a double
    // I will lecture on how this works soon
    //   for now focus on the notion that an explicit cast can really 
    //   mess up data

    z = * ((double *) &a);

    cout << "a = " << a << endl;
    cout << "z = " << z << endl;
}
