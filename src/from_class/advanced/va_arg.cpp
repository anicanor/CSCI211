// Demonstrating a function that takes a variable number of arguments
// This code is based on the example in GNU's va_start man page

#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdarg.h>


void print(const char *name, ...) 
{
     va_list ap;

     va_start(ap, name);

     cout << "name = " << name << endl;

     while (1)
     {
          char *s = va_arg(ap, char *);
          if (s == NULL)
            break;
          cout << "arg = " << s << endl;
     }

     // finish processing the variable arguments
     va_end(ap);
}

int main()
{
    print("hello", "one", "two", "three", 0);
}
