#include <iostream>
using namespace std;
#include "dstack.h"

int main()
{
    double value;
    Dstack stack;

    // as long as there is input
    while (cin >> value)
      stack.push(value);
      
    // as long as the stack is not empty, pop numbers and print them
    while (!stack.empty())
      cout << stack.pop() << endl;

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
