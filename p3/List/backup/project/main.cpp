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


  //string videos;
  //string sort;
  string title;
  string URL;
  string comment;
  float length;
  int rating;
  string command;
  //int number_of_videos=0;
  //getline(cin,sort); 
  //Video *video_info[100];

  /*
     while(getline(cin, title))
     {
     getline(cin,URL);
     getline(cin,comment);
     cin >> length;
     cin >> rating;
     cin.ignore();
     Video *new_video= new Video(title, URL, comment, length, rating); //new is to create a new dynamic

  //list.insert(new_video); 

  if (!list.insert(new_video))
  {
  cerr << "Could not insert video <" << title << ">, already in list." << endl;
  }
  }
  list.print();
  */

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

      //list.insert(new_video); 

      if (!list.insert(new_video))
      {
        cerr << "Could not insert video <" << title << ">, already in list." << endl;
        //return 1;
      }
    }


    if(command == "remove")
    {
      getline(cin,title);
      if (!list.remove(title))
      {
        cerr << "Title <" << title << "> not in list, could not delete."<< endl;
        //return 1;
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
      //return 1;
        //error message;
    }
    if(command != "insert" && command != "remove" && command != "print" && command != "length" && command != "lookup")
    {
  cerr << "<" << command << "> is not a legal command, giving up."<< endl;
  return 1;
  }
  }


  return 0;
}
