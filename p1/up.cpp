#include<iostream>

using namespace std;

int find_largest(int values[], int size)
{
  int largest = 0;
  int i; 
  for(i=0; i < size; i++) 
  {
  if(values[i] > largest) 
  {
    largest=values[i];
  }
  }
  return largest;
}

int main() {
  

  cout << "Numbers: " ;

//const int MAX = 100;
int values[100];
int size;
//int M=0; 

/*
for (size=0 ; size <= 101; size++) 
{
  cin >> values[size];
  if(values[size]==0)
    break;
}
*/


for (size=0 ; size < 101; size++) 
{
  cin >> values[size];

for (int line=values[size]; line>0; line--) 
{
  cout << "*";
}
cout << endl;
  if(values[size]==0)
    break;
}

//for (int j=0; j<=i; j++)
//{
/*
if (values>M)
{
  M=values;
}
*/

int M;
M=find_largest(values, size);
/*
int M=0; //the max number in the array
if (values[i]>M)
{
  M=values[i];
}
*/

for(int row=M; row>0; row--) 
{ 
  for(int col=0; col<size; col++) 
  {
    if (row<=values[col])
    {
      cout << "*";
    }
    else 
    { 
      cout << " ";
    }
  }
  cout << endl;
} 


  return 0;
} 

