#include<iostream>

using namespace std;

int main()
{
for(int i=0; i<=10; ++i)
{
  cout << i << endl;
}
int array[3] = {1,2,3};

int i=0;

cout << array[i]<<endl;
cout << array[i++]<<endl;//post-increment,array[i] first, then i+1
cout << array[++i]<<endl;//pre-increment, i=i+1 first, then array[i]

}
