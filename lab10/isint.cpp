#include <iostream>
#include <ctype.h>
#include <assert.h>
using namespace std;

bool is_int(char str[])
{ 
  //if(str[0]==0)
   // return false;
    if(!isdigit(str[0])||str[0]==0)
    return false;
  else if(str[1]==0)
    return true;

    return is_int(str+1);

  // replace this will the real code...
}

int main()
{
  char buf[1000];
  cout << "Enter a string: ";
  cin >> buf;

  if (is_int(buf))
    cout << "<" << buf << "> is an integer.\n";
  else cout << "<" << buf << "> is NOT an integer.\n";
}

/*
   {
   if(*str == 0|| !isdigit(*str))
   return false;
   if(str[1] == 0)
   return true;
   
   return is_int(str+1);
   }
*  str[0]==*str;
*
 *
 */
