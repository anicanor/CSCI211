// Simple program to illustrate the syntax for C++ classes

// the following two lines and the last line (#endif) prevent the file
//    from being included too many times 
//    ALWAYS PUT THESE LINES IN YOUR .h FILES
#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>
using namespace std;

class Address
{
    public:
        Address(string name, string street, int zip);
        Address(string name);
        ~Address();
        void print();
    private:
        string m_name;
        string m_street;
        int m_zip;
};

#endif













