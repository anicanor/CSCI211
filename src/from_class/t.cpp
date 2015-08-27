#include <iostream>
using namespace std;

void f()
{
  cout << "this is f()\n";
}

int main()
{
  cout << "f = " << (void *) f << endl;  
}
