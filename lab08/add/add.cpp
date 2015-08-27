#include <iostream>
#include <cstdlib>
using namespace std;

bool legal_int(char *str)
{
  while(*str)
  {
    if(isdigit(*str)==false)
    {
      cerr<<"Error: illegal integer."<<endl;
      return false;
    }
    /*
       else if(isspace(*str)==false)
       {
       cerr<<"Error: illegal integer." <<endl;
       return 1;
       }
       */
    else str++;
  }
  return true;

}

int main(int argc, char *argv[])
{

    if(argc<2)
    {
      cerr<<"Error: illegal integer."<<endl;
      return 1;
    }

  int sum=0;
  for(int i=1; i<argc; i++)
  {
      if(legal_int(argv[i])==true)
        sum=sum + atoi(argv[i]);
      else return 1;
    }
    cout << sum << endl;
    return 0;
  }
