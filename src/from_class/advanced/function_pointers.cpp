#include <iostream>
using namespace std;

int f(int value)
{
    cout << "this is function f. value = " << value << endl;
    return value;
}

int g(int value)
{
    cout << "this is function g. value = " << value << endl;
    return value;
}

int call_function(int (*func)(int), int value)
{
    return func(value);
}

int main()
{
    // call each function
    //f(11);
    //g(11);

    // pass a pointer to f() to call_function() so it will call f()
    // NOTE: a pointer to a function is the name of the function w/o the ()
    // call_function(f);

    // do the same with g()
    int g_return = call_function(g, 42);
    int f_return = call_function(f, 43);

    cout << "g_return = " << g_return << endl;
    cout << "f_return = " << f_return << endl;
}
