//calc.cpp
//Xuan Jin/shirley
//xjin

#include <iostream>
#include <istream>

#include<cstdlib>
#include<cstdio>

#include <math.h>
#include <cmath>
using namespace std;
#include "dstack.h"

void error()
{
  cerr<< "Error: Invalid expression." << endl; 
  exit(1);
}

int main()
{
  double lh, rh;
  double value, result;
  Dstack stack;

  //while(!cin.eof()) 
  //{
  while(cin.peek()!=EOF)//using cin.peek() is way better than cin.eof() cause peek is reading everything inside the loop, when you intend to terminate the program, they will working on the rest of the program 
  {
    //if(isdigit(cin.peek())==false)
     // error();

    if(isspace(cin.peek()))
      cin.ignore();
    else if(isdigit(cin.peek())==true||cin.peek()=='.')
    {
      cin >> value;
      if(cin.good()==false)
        error();
      stack.push(value);
    }
    else
//if(isdigit(cin.peek())==false)
  error();


    if(cin.peek()=='+')
    {
      //cout << cin.peek()<< endl;
      cin.ignore();
      if(stack.size() < 2)
       error();

      stack.pop(rh);
      stack.pop(lh);

      result = rh +lh;
      stack.push(result);
      //cout << result << endl;
    }
          
    if(cin.peek()=='-')
    {
      cin.ignore();
      if(stack.size() < 2)
       error();

      stack.pop(rh);
      stack.pop(lh);

      result = lh-rh;
      stack.push(result);

      //cout << result << endl;
    }
       
    if(cin.peek()=='*')
    {
      cin.ignore();
      if(stack.size() < 2)
       error();

      stack.pop(rh);
      stack.pop(lh);
      

      result = rh*lh;
      stack.push(result);

      //cout << result << endl;
    }

    if(cin.peek()=='/')
    {
      cin.ignore();
      if(stack.size() < 2)
       error();

      stack.pop(rh);
      stack.pop(lh);

      if(rh==0)
        error();

      result = lh/rh;
      stack.push(result);

     //cout << result << endl;
    }
   
    if(cin.peek()=='^')
    {
      cin.ignore();
      if(stack.size() < 2)
       error();

      stack.pop(rh);
      stack.pop(lh);

      //if(lh<0 && !cin.good())

      //  if(!cin.good())
        //if(stack.isdigit(rh)==false && lh<0)

      

      result = pow(lh, rh);
      stack.push(result);
      if(isnan(result))
        error();

      //cout << result << endl;
    }


  }
  // cout << result<< endl;

  stack.pop(result);
  if(stack.empty())
  {
    cout<<result<<endl;
  }
  else
    error();
    
/*
  if(stack.size()!=1)
    error();
  else
  {
    //stack.push(result);
    stack.pop(result);
    cout <<result<< endl; 
  }
 */ 
  return 0;
}


