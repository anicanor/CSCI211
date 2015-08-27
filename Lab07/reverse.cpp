#include <iostream>
using namespace std;
#include "dstack.h"

int main()
{
    double value;// if the value is a double, you should always include the doubled, change need to be made in the Node class
    Dstack stack;

    // as long as there is input
    while (cin >> value)
      stack.push(value);
      
    // as long as the stack is not empty, pop numbers and print them
    while (!stack.empty())
    {
      stack.pop(value);
      cout << value << endl;
    }
    return 0;
}


/***

    an alternative way to implement pop is to have it return a bool
    and put the value in a reference parameter

    // as long as the stack is not empty, pop numbers and print them
    // pop return false if the pop failed
    double vlaue;
    while (stack.pop(value))
      cout << value << endl;


***/
