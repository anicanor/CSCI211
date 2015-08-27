#include <iostream>
using namespace std;
int count = 0;

void f()
{
    count++;
    if (count % 50000 == 0)
        cout << count << endl;
    f();
}

int main()
{
    f();
    return 0;
} 
