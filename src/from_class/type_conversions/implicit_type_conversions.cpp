// Demonstrate implicit type conversions

#include <iostream>
using namespace std;

int main()
{

    int a = 1;
    int b = 2;
    int c = 3;
    double x = 24.24;
    double y = 25.25;
    double z = 26.26;

    // the compiler use to give a warning when converting double --> int
    y = b;  // int converted to a double (no problems)
    a = x;  // double TRUNCATED to an int (no warning)

    c = a + z;  // converting double (result) to int (compiler use to warn)
    z = b + y;  // converting int (b) to double                 

    cout << "int a = " << a << endl;
    cout << "int b = " << b << endl;
    cout << "int c = " << c << endl;
    cout << "double x = " << x << endl;
    cout << "double y = " << y << endl;
    cout << "double z = " << z << endl;
}
