/*
  Program to test a basic class Cust.
*/

#include "cust.h"

#include <iostream>
using namespace std;


int main()
{
  Cust *cust = new Cust("Homer", 42, 12, false);
  cust->print(cout);

  cust = new Cust("Bart", 86, 2, true);
  cust->print(cout);

  return 0;
}
