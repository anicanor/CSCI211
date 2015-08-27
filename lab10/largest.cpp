#include <iostream>
#include <assert.h>
using namespace std;
int max(int a, int b)
{
  if(a>b)
    return a;
  else
    return b;
}

int largest_in_array(int values[], int size)
{
  //    assert(size > 0);
  if(size==1)
    return values[0];
  else 
    //return largest_in_array( max(values[0],values[1]), size-1);
return max(values[0], largest_in_array(values+1, size-1));
  



}

int main()
{
  int values[1000];
  int size;
  cout << "Enter integers.  Type control-D when done\n";
  for (size = 0; cin >> values[size]; size++)
    ;
  cout << "The largest value is " << largest_in_array(values, size) << endl;
}


/*
 * int max(int a, int b)
 * {
 * return a > ?a:b;
 *if(a>b)
 return a;
 else 
 return b;
 * }
 *
 * int largest_in_array(
 *
 int largest_in_array(int values[], int size)
 {
 assert(size>0);

 if(size==1)
 return values[0];

 return max(values[0], largest_in_array(values + 1, size-1);
 }

 OR
 {
 int tmp=largest_in_array(values + 1, size-1);

 if(values[0] >tmp)
 return values[0];
 else return tmp;
 */
