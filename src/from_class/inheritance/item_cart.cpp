/***
    This program demonstrates inheritance and 
    class vector from the standard template library.
***/

#include <iostream>
#include <vector>
using namespace std;

// simple class to act as the base class
class Item
{
    public:
        Item(string desc);
        // the "virtual" in the next line allows for print() to be 
        // redefined by classes that inherit this class
        // void print();
        virtual void print();
    protected:
        string m_desc;

};

Item::Item(string desc) 
{
    m_desc = desc;
}

/* virtual */ void Item::print() 
{
    cout << m_desc << endl;
}

// simple class to demonstate inheritance
class Cold_item : public Item
{
    public: 
        Cold_item(string desc, int temp);
        /* virtual */ void print();
    protected:
        int m_temp;
};
// note that print() uses member variables 
//   from Item and Cold_item
/* virtual */ void Cold_item::print()
{
    cout << m_desc << " at " << m_temp << " degrees" << endl;
}

// note: the constructor for the base class Item is called
Cold_item::Cold_item(string desc, int temp) : Item(desc)
{
    m_temp = temp;
}


// holds a collection of Items(and any object that inherits from Item)
// uses a standard template library (STL) vector 
class Cart
{
    public:
        void insert(Item *item);
        void print();
    private:
        // A vector is an array-like abstract data type that 
        // automatically resizes itself
        // It will be covered in the next lecture (or the one after that)
        // The <Item *> creates a vector of pointers to Items
        vector<Item *> m_items; 
};

void Cart::insert(Item *item)
{
    m_items.push_back(item);
}

void Cart::print()
{
    // print all the elements in the vector
    //    iterating through a standard template often takes this form
    vector<Item *>::iterator iter;
    for (iter = m_items.begin(); iter != m_items.end(); iter++)
    {
        // same as below (*iter)->print();
        Item *cur_item = *iter;
        cur_item->print();
    }



    // in the above loop the ++ and * operators have been customized
    // for the vector template
}

int
main()
{

    Cart cart;

    cart.insert(new Item("chips"));
    cart.insert(new Item("salsa"));
    cart.insert(new Item("onion dip"));

    cart.insert(new Cold_item("soda", 45));
    cart.insert(new Cold_item("ice", 32));
    cart.insert(new Cold_item("beer", 36));

    cart.print();
}
