// program to demonstrate using "cin >>" as the conditional in a loop

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str;
  int count = 0;

  // as long as there is another string in standard input
  // execute this loop
  while (cin >> str)
  {
    cout << "you entered: \"" << str << "\"\n";
    count++;
  }

  cout << "you entered " << count << " strings\n";
}
