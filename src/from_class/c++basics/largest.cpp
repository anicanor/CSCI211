// used as an example of a function that has local variables when
// discussing the run-time stack

#include <iostream>
#include <assert.h>
using namespace std;


// return the largest value in the given array
// does not work if array is empty
int largest(int values[], int size)
{
  assert(size > 0);
  int max = values[0];

  for (int i = 1; i < size; i++)
  {
    if (values[i] > max)
      max = values[i];
  }

  return max;
}

int main()
{
  int nums[] = {42,86,99,102};

  cout << "largest = " << largest(nums, 4) << endl;

}
