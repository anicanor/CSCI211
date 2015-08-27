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

int M;
M=find_largest(values, size);
/*
for (int i=0; i>size; i++)
{
for (int line=values[size]; line>0; line--) 
{
  cout << "*";
} 
cout << endl;
}
*/
  return 0;
} 

