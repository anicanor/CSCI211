// demonstrates 
// (1) how the total size of dynamically allocated variables reduces the room 
//     available for the run time stack
// 
// (2) how the size of local variables increases the size of the activation
//     records thus reducing the number of recursive calls that can be made
//     before stack overflow
// 
// usage:  collision SIZE_OF_LOCAL_VAR SIZE_OF_DYNAMIC_VAR

#include <stdlib.h>
#include <iostream>
using namespace std;

void f(int count, int local_size, int new_size)
{
    int local_variable[local_size];

    int *ptr = new int[new_size];

    cout << "start of f(), &local_variable = " << &local_variable 
         << " ptr = " << ptr
         << " count = " << count << endl;

    if (count > 0)
    {
        f(count - 1, local_size, new_size);
    }
    cout << "end of f() count = " << count << endl;
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
      cerr << "usage: collision SIZE_OF_LOCAL_VAR SIZE_OF_DYNAMIC_VAR\n";
      return 1;
    }
    cout << "start of main()" << endl;
    f(1000, atoi(argv[1]), atoi(argv[2]));
    cout << "end of main()" << endl;

    return 0;
} 
