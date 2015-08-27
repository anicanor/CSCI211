// what happens to the body of a pure virtual function
// see how Date::print() is called from Time::print()

#include <iostream>
#include <string>
using namespace std;

class Date
{
    public:
        Date(string date);
        virtual void print() = 0; // now print is a pure virtual function
    protected:
        string m_date;
};

Date::Date(string date) 
{
    m_date = date;
}

// the "= 0" makes print a pure virtual function
// and the class Data is an abstract class
// when you provide a body to a pure virtual function, it can only be 
// called using Date:: (see Time::print() below)
// usually one does not provide a body to a pure virtual function
void Date::print()
{
    cout << "date = " << m_date << endl;
}


// class Time : public Date
class Time : protected Date
{
    public:
        Time(string date, string time);
        /* virtual */ void print();
    private:
        string m_time;
};

Time::Time(string date, string time) : Date(date)
{
    m_time = time;
}

void Time::print()
{
    // if Date::print() is pure virtual function 
    // BUT we provided a body for it, so we can call it here
    // using the Date:: notation
    Date::print();
    cout << "time = " << m_date << " " << m_time << endl;
}

int main()
{
    // can't instantiate an abstract class (one w/a purely virtual function)
    // Date *date = new Date("4/24/08");
    //date->print();

    Time *time = new Time("4/24/08", "2:00pm");
    time->print();
}
