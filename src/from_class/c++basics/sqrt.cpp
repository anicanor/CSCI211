// Demonstrate the use of a function (sqrt) in the math library

#include "my_class_file.h"
#include <iostream>
#include <cmath>   // newer version of library than math.h
using namespace std;

int main()
{
    double value;
    double sqrt_of_value;

    cout << "enter value: ";
    cin >> value;

    sqrt_of_value = sqrt(value);

    cout << "The square root of " << value << " is " << sqrt_of_value << endl;

    return 0;  // program is ending w/o error (0 means NO error)
}
