#include <iostream>
using namespace std;
class Foo
{
  public:
    int m_i;
    double m_x;
    int values[100];

};

int main()
{
  cout << "sizeof(Foo) = " << sizeof(Foo) << endl;

}
