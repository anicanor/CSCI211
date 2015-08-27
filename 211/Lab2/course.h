//Xuan Jin/Shirley
//CSCI211

#ifndef COURSE_H
#define COURSE_H

// put any includes here (such as #include <iostream>)

class Course
{
    public:
      Course(string name, int number, int time);
      
        // public member functions go here
        void print();
    private:
        string M_name;
        int M_number;
        int M_time;
        // member variables go here

        // member function used only by other member functions go here

}; // don't forget this ;

#endif








