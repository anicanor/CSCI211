#include <iostream>
using namespace std;

#include "istack.h"

int main()
{
  char ch;
  int open_ch;
  Istack stack(12);

  while (cin >> ch)
  {
    switch (ch)
    {
      case '{':
      case '(': stack.push(ch); 
                break;
      case '}': if (!stack.pop(open_ch) || open_ch != '{')
                {
                  cerr << "not balanced\n";
                  return 1;
                }
                break;
      case ')': if (!stack.pop(open_ch) || open_ch != '(')
                {
                  cerr << "not balanced\n";
                  return 1;
                }
                break;
    }
  }
  cout << "balanced\n";
  return 0;
}
