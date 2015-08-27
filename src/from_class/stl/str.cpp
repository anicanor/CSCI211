#include <string.h>
#include <iostream>
using namespace std;

int main()
{
  const char *str = "hello";

  for (int i = 0; i < strlen(str); i++)
    cout << str[i] << endl;

  for (const char *ptr = str; *ptr != 0; ptr++)
    cout << *ptr << endl;
}
