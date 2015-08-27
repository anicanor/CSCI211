// Demonstrate explicit type conversions
// see implit_type_conversion.cpp

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

    y = b;  // int converted to a double (no problems)
    // the (int) below surpresses the compiler warning
    a = (int) x;  // double TRUNCATED to an int  -- line 18
    c = (int) (a + z);  // converting double (result) to int (c)     -- line 20

    z =  b + y;  // converting int (b) to double              -- line 21

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
}
