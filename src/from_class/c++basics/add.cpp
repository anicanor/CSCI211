// Read two integers from standard input and output the sum

// We will discuss these two lines in more detail in lecture
#include <iostream>   // indicates we want to use the iostream library
using namespace std;  // indicates that we are using the standard library

int main()
{
    int a;
    int b;
    int c;

    // prompt user to a number
    cout << "Enter a number: ";

    // read the number into integer variable a
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;

    c = a + b;

    // output the result
    cout << "The sum is: " << c << endl;

    return 0;  // program is ending w/o error
}
