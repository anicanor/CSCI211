
#include "cust.h"
#include "pqueue.h"

#include<iostream>
#include<fstream>
#include<istream>

using namespace std;



int main(int argc, char *argv[])
{


  string cust_name;
  int arr_time;
  int items;
  bool cust_type;
  int num_customers=0;

  ifstream ifile(argv[3], ios::in);

  Pqueue q;
  
  // the integer after new Cust(...) is the priority for this customer
  
  q.enqueue(new Cust("One", 1, 1, true),2);
  q.enqueue(new Cust("Two", 2, 2, false),1);
  q.enqueue(new Cust("Three", 3, 3,true),4);
  q.enqueue(new Cust("Four", 4, 4,false),3);
  
  //while( >> cust_name)
  while(ifile >> cust_name)
  {


  q.enqueue(new Cust(cust_name, 1, 1, true),1);

  }

  while (q.empty() == false)
  {
  Cust *cust = q.dequeue();
  cust->print(cout);
  }

  return 0;
}

