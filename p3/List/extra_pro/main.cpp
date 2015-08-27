// main.cpp
// Xuan Jin/Shirley
// xjin

#include<iostream>
#include<istream>
#include<fstream>
#include<string>

#include"video.h"
#include"vlist.h"

using namespace std;

int main()
{
  Vlist list;


  string title;
  string URL;
  string comment;
  float length;
  int rating;
  string command;

  while(getline(cin,command)) 
  {
    if (command == "insert")
    {
      getline(cin,title);
      getline(cin,URL);
      getline(cin,comment);
      cin >> length;
      cin >> rating;
      cin.ignore();
      Video *new_video= new Video(title, URL, comment, length, rating); //new is to create a new dynamic

      if (!list.insert(new_video))
      {
        cerr << "Could not insert video <" << title << ">, already in list." << endl;
      }
    }


    if(command == "remove")
    {
      getline(cin,title);
      if (!list.remove(title))
      {
        cerr << "Title <" << title << "> not in list, could not delete."<< endl;
      }
    }

    if (command == "print")
    {
      list.print();
    }

    if (command == "length")
    {
      cout<<list.length() << endl;
    }

    if (command == "lookup")
    {
      getline(cin,title);
      Video *video = list.lookup(title);
      if (video)
        video->print();
      else
        cerr << "Title <" << title << "> not in list." << endl;
    }
    if(command != "insert" && command != "remove" && command != "print" && command != "length" && command != "lookup")
    {
  cerr << "<" << command << "> is not a legal command, giving up."<< endl;
  return 1;
  }
  }

  return 0;
}
