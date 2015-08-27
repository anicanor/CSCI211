// used to demonstrate how the shell can use the return value of a program
//
// after running a program from the bash prompt, you can see what value
// it returned by looking at the shell variable $?
//
// $ cat divide.cpp
// $ echo $?
//
#include <iostream>
using namespace std;

int main()
{
  double numerator;
  double denominator;
  double result;

  cout << "enter a numerator: ";
  cin >> numerator;

  cout << "enter a denominator: ";
  cin >> denominator;

  result = numerator/denominator;

  cout << numerator << "/" << denominator << " = " << result << endl;

  // 42 is a NON STANDARD return value, to demonstrate how return values
  // can be used by the shell ($? shell variable)
  return 42;

}
