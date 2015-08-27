#include <iostream>
using namespace std;
void swap(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
}
int main()
{
  int i = 42;
  int j = 86;
  swap(i,j);
  cout << "i = " << i << " j = " << j << endl;
}
