//Xuan Jin/Shirley 
//CSCI211

#include <iostream>
using namespace std;

#include "course.h" 
Course::Course(string name, int number, int time)
{M_name=name;
  M_number=number;
  M_time=time;
}

// example of how functions are specified
void Course::print()
{

    // the code for the print function goes here
cout << M_name << " " << M_number << " at " << M_time<<endl;
//    cout << "hello\n";


}

