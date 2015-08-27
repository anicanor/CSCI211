//calc.cpp
//Xuan Jin/Shirley
//xjin
#include <math.h>
#include <cmath>
#include<cstdlib>
#include<cstdio>
#include <string>
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
  string oper;

  Dstack stack;

  //while(!cin.eof()) 
  //{
  while(cin.peek()!=EOF)//using cin.peek() is way better than cin.eof() cause peek is reading everything inside the loop, when you intend to terminate the program, they will working on the rest of the program 
  {
    if(isspace(cin.peek()))
      cin.ignore();
    if(isdigit(cin.peek())==true||cin.peek()=='.')
    {
      cin >> value;
      if(cin.good()==false)
        error();
      stack.push(value);
    }

    else if(cin.peek()!= '+'&&cin.peek()!='-'&&cin.peek()!='*'&&cin.peek()!='/'&&cin.peek()!='^')
    { 
      cin >> oper;
      //cout << oper << endl;
      //if(cin.good()==false)
      //  error();

      //stack.push(oper);
    }

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

      if(rh<0 && !cin.good())
        error();

      result = pow(lh, rh);
      stack.push(result);
if(isnan(result))
  error();
      //cout << result << endl;
    }
    //if(cin.peek()=='sqrt')

    if(oper=="sqrt")
    {
      cin.ignore();
      //if(stack.size()<2)
      // error();

      stack.pop(result);
      //stack.pop(lh);
if(result<0)
  error();

      result = sqrt(result);
      stack.push(result);
      //cout << result << endl;
    }
    if(oper=="cos")
    {

      cin.ignore();
      //if(stack.size()<2)
      // error();

      stack.pop(result);
      result=result*M_PI/180;


      result = cos(result);
      stack.push(result);
      //cout << result << endl;
    }
    if(oper=="sin")
    {

      cin.ignore();
      //if(stack.size()<2)
      // error();

      stack.pop(result);
      result=result*M_PI/180;
      //stack.pop(lh);


      result = sin(result);
      stack.push(result);
      //cout << result << endl;
    }
    if(oper=="ave")
    {

      cin.ignore();
      //if(stack.size()<2)
      // error();
      int n=stack.size();
      double sum=0;
      for(int i=n; !stack.empty(); i--)
      {
        stack.pop(value);
        sum=sum+value;
      }


      result = (sum)/n;
      stack.push(result);
      //cout << result << endl;
    }

    //    }

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


