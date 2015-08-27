//Xuan Jin/Shirley
//CSCI211

#include <iostream>
using namespace std;

int main()
{
  int num;
  //cout << " Number: ";

  bool all_even=true;
  while(cin>>num)
  {
    if(num%2!=0)
    {
      all_even=false;
      cout << "not all even" <<endl;
      return 1;
    }
    else
    {
      all_even=true;
      cerr << "all even" << endl;
      return 0;
    }
  }

  // write to standard output
  /*
     if (all_even==false) {
     cout << "all even" <<endl;
     }
  // write to standard error
  if (all_even==true) {
  cerr << "not all even" << endl;
  }
  // return 0 from main() if there were no errors
  */
  return 0;
}
