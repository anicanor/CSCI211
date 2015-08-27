#include "pqueue.h"
#include "cust.h"
#include <iostream>
using namespace std;

int main()
{
  Pqueue q;

  // the integer after new Cust(...) is the priority for this customer
  q.enqueue(new Cust("One", 1, 1, true),1);
  q.enqueue(new Cust("Two", 2, 2, false),2);
  q.enqueue(new Cust("Three", 3, 3,true),3);
  q.enqueue(new Cust("Four", 4, 4,false),4);

  cout << "removing and printing all elements on the priority queue" << endl;
  cout << "should be ordered One, Two, Three, Four" << endl;
  while (q.empty() == false)
  {
    Cust *cust = q.dequeue();
    cust->print(cout);
  }

  q.enqueue(new Cust("Three", 3, 3,true),3);
  q.enqueue(new Cust("One", 1, 1, true),1);
  q.enqueue(new Cust("Four", 4, 4,false),4);
  q.enqueue(new Cust("Two", 2, 2, false),2);

  cout << endl;
  cout << "removing and printing all elements on the priority queue" << endl;
  cout << "should be ordered One, Two, Three, Four" << endl;
  while (q.empty() == false)
  {
    Cust *cust = q.dequeue();
    cust->print(cout);
  }

  q.enqueue(new Cust("Four", 4, 4,false),4);
  q.enqueue(new Cust("Three", 3, 3,true),3);
  q.enqueue(new Cust("Two", 2, 2, false),2);
  q.enqueue(new Cust("One", 1, 1, true),1);


  cout << endl;
  cout << "removing and printing all elements on the priority queue" << endl;
  cout << "should be ordered One, Two, Three, Four" << endl;
  while (q.empty() == false)
  {
    Cust *cust = q.dequeue();
    cust->print(cout);
  }

  q.enqueue(new Cust("One", 1, 1, true),42);
  q.enqueue(new Cust("Two", 2, 2, false),42);
  q.enqueue(new Cust("Three", 3, 3,true),42);
  q.enqueue(new Cust("Four", 4, 4,false),42);

  cout << endl;
  cout << "removing and printing all elements on the priority queue" << endl;
  cout << "should be ordered One, Two, Three, Four" << endl;
  while (q.empty() == false)
  {
    Cust *cust = q.dequeue();
    cust->print(cout);
  }

  return 0;
}
