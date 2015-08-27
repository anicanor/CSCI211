#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int count = 0;

// make 250000 recursive calls
void f()
{
    if (++count % 50000 == 0)
        cout << "count = " << count << endl;

    if (count <= 250000)
        f();
}

int main()
{
    f();
}
