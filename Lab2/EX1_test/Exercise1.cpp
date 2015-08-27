#include <iostream>
#include<string> 
using namespace std;

int main()
{
  int value;

  cin >> value; // as long as we can read an integer from standard input (cin)
  // when the user enters control-D the "cin >> value" will return false
  while (cin >> value)
  {
    switch(value)     // write the integer just read to standard output
    {
      
        cout << "zero" << endl;
        break;
      case 1: 
        cout << "one" << endl;
        break;
      case 2:
        cout << "two" << endl;
        break;
      case 3: 
        cout << "three" << endl;
        break;
      case 4:
        cout << "four" << endl;
        break;
      case 5:
        cout << "five" << endl;
        break;
      case 6: 
        cout << "six" << endl;
        break;
      case 7:
        cout << "seven" << endl;
        break;
      case 8: 
        cout << "eight" << endl;
        break;
      case 9: 
        cout << "nine" << endl;
      default: 
        cout << "zero" << endl;
        break;
    } 

  }

  // return 0 from main() if there were no errors
  return 0; 

}
