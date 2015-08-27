//Xuan Jin/Shirley
//CSCI211

#include <iostream>
using namespace std;

#include "course.h"

int main()
{
  Course programming("CSCI", 211, 1000);
  programming.print();
  
  Course english("ENGL", 130, 1400);
  english.print();
  
  Course physics("PHYS", 204, 800);
  physics.print();
}
