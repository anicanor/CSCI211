// main.cpp 
//Xuan Jin/Shirley 
//xjin
#include"btree.h"

#include<iostream>
#include<vector>

using namespace std;

void print_vector(vector<string> &strings)
{
  cout << '{';
  for(unsigned int i=0; i<strings.size(); i++)
  {
    cout << strings[i] ;
    if(i != strings.size()-1)
      cout << ", ";
  }

  cout << '}'<< endl;
}

int main()
{
  Btree tree;
  string command;
  string argument;
  string target;

  while(cin >> command)
  {
    if(command == "echo")
    {
      if(cin.peek()==' ')
        cin.ignore();
      getline(cin,argument);
      //if(cin.peek()==' ')
      //{ cin.ignore();}
      cout << argument << endl; 
    }


    else if(command == "find")
    {
    //  if(cin.peek()==' ')
     //   cin.ignore();
    //  getline(cin,argument);
      cin >> argument;
      if(!tree.look_up(argument))
        //If the target string is in the tree print the following to standard output:  "<str> is in tree.\n"  where str is the target
        //If the target string is NOT in the tree print the following to standard output:  "<str> is not in tree.\n"
        cout<<"<"<<argument<<"> is not in tree." <<endl;
      else
        cout << "<" <<argument <<"> in tree.\n"; 
    }   
    else if(command == "insert")
    {
      if(cin.peek()==' ')
        cin.ignore();
      getline(cin, argument);
      if(!tree.insert(argument))
      {
        cerr<< "insert <"<<argument<<"> failed.  String already in tree." << endl;
      }
      //else
      // treevec.push_back(argument);
    }

    else if(command == "size")
    {
      if(cin.peek()==' ')
        cin.ignore();
      cout << tree.size() << endl;
    }

    else if(command == "balanced")
    {
      if(cin.peek()==' ')
        cin.ignore();

      if(tree.balanced()==-1)
      {
        cout << "Tree is not balanced.\n";
      }
      else 
      {
        cout << "Tree is balanced.\n";
      }
    }

    else if(command == "print")
    {
      if(cin.peek()==' ')
        cin.ignore();

      vector<string> treevec;
      tree.print_depth_first(treevec);
      print_vector(treevec);

    }

    else if(command == "breadth")
    {
      if(cin.peek()==' ')
        cin.ignore();

      vector<string> breadth;
      tree.print_breadth(breadth);
      print_vector(breadth);
    }

    else if(command == "distance" )
    {
      if(cin.peek()==' ')
        cin.ignore();
      double ave_dis = tree.distance_total()/(tree.size());
      cout <<"Average distance of nodes to root = "<<   ave_dis << endl; 
    }



    
       else if(command == "rebalance")
       {
         if(cin.peek()==' ')
           cin.ignore();

         tree.rebalance();
       }
       

    //Illegal command <cmd>\n" where cmd is the illegal command.  After an illegal command is entered, skip all other characters on that line of input.


       else 
       {
         cerr << "Illegal command <"<< command <<">.\n";
         string buffer;
         getline(cin, buffer);
       }   

  }


  return 0;
}

