#include<iostream>

using namespace std;

int main() {
  
  int a,b;
  cout << "Number1: ";
  cin >> a;
  cout << "Number2: ";
  cin >> b;



  
     int j;
     for(int i=0; i<a; i++) 
     {
     for(j=0; j<b; j++)
     {
     cout << "*";

     }
     cout << endl; 
     }
     
  
     if(a<b)
     {
     int c;
     c=a;
     a=b;
     b=c;
     }
     

  int M;
  if(a<b)
  { 
    M=b;
  }
  else if(a>b)
  {
    M=a;
  }
  
/*
 * 
  for(int row=M; row>0; row--) 
  {
    for(int col=0; col<2; col++)
    {
 */
  for(int row=M; row>0; row--) 
  {
    for(int col=0; col<2; col++)
    {
      if (row<=a)
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
  

  /*
     for(int i=0; i<a; i++) 
     {
     cout << "*";
     }
     cout << endl;

     for(int j=0; j<b; j++)
     {
     cout << "*";
     }
     cout << endl; 
     */




  return 0;
} 

