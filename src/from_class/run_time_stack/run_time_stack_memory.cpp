// recursive function f() is called three times
// f() has a local variable (local_variable) 
//
// f() prints the addresses of local_variable when called
//
// this demonstrates the direction the stack grows

#include <iostream>
using namespace std;

void f(int count)
{
    int local_variable;

    cout << "start of f(), &local_variable = " << &local_variable 
         << " count = " << count << endl;

    if (count > 0)
    {
        f(count - 1);
    }
    cout << "end of f() count = " << count << endl;
}

int main()
{
    cout << "start of main()" << endl;
    f(3);
    cout << "end of main()" << endl;

    return 0;
} 
