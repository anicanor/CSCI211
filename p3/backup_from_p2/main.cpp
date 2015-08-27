// mai.cpp
// Xuan Jin/Shirley
// xjin

#include<iostream>
#include<istream>
#include<fstream>
#include<string>

#include"video.h"

using namespace std;

int main()
{
  string videos;
  string sort;
  string title;
  string URL;
  string comment;
  float length;
  int rating;
  int number_of_videos=0;
  getline(cin,sort); 
  Video *video_info[100];

  while(getline(cin, title))
  {
    if(number_of_videos==100)
    {
      cerr << "Too many videos, giving up." << endl;
      return 1;
    }
    //getline(cin,title);
    getline(cin,URL);
    getline(cin,comment);
    cin >> length;
    cin >> rating;
    cin.ignore();
    video_info[number_of_videos] = new Video(title, URL, comment, length, rating); 
    number_of_videos++;
  }
  /*
     if(number_of_videos>100)
  //{
  // cerr << "Too many videos, giving up." << endl;
  //return 1;
  //}
  //else
  //   {
  */
/*
  for(int i=0; i < number_of_videos; i++) 
  {
    video_info[i]->print();
  } 

  cout << sort << endl;
*/
 /*
  if(sort=="length"||sort=="rating"||sort=="title")
  {
  for(int last = number_of_videos -1; last > 0; last--)
    for (int cur = 0; cur < last; cur++)
      if (video_info[cur]->longer(video_info[cur+1])||video_info[cur]->lower(video_info[cur+1])||video_info[cur]->alph(video_info[cur+1]))
        swap(video_info[cur], video_info[cur+1]);  // since videos is an array of pointers you can simply swap the addresses at the cur and cur+1 locations.if (sort==length) 
  
  for(int i=0; i < number_of_videos; i++) 
  {
    video_info[i]->print();
  }
  }
  else 
  {
    cerr << sort << "is not a legal sorting method, giving up." << endl;
  

  for(int i=0; i < number_of_videos; i++) 
  {
    video_info[i]->print();
  }
  }
*/

  if(sort=="length")
  {
  for(int last = number_of_videos -1; last > 0; last--)
    for (int cur = 0; cur < last; cur++)
      if (video_info[cur]->longer(video_info[cur+1]))
        swap(video_info[cur], video_info[cur+1]);  // since videos is an array of pointers you can simply swap the addresses at the cur and cur+1 locations.if (sort==length) 
  
  for(int i=0; i < number_of_videos; i++) 
  {
    video_info[i]->print();
  }
  }


  if(sort=="rating")
  {
  for(int last = number_of_videos -1; last > 0; last--)
    for (int cur = 0; cur < last; cur++)
      if (video_info[cur]->lower(video_info[cur+1]))
        swap(video_info[cur], video_info[cur+1]);  // since videos is an array of pointers you can simply swap the addresses at the cur and cur+1 locations.if (sort==length) 

  for(int i=0; i < number_of_videos; i++) 
  {
    video_info[i]->print();
  } 
  
  }

  
  if(sort=="title")
  {
  for(int last = number_of_videos -1; last > 0; last--)
    for (int cur = 0; cur < last; cur++)
      if (video_info[cur]->alph(video_info[cur+1]))
        swap(video_info[cur], video_info[cur+1]);  // since videos is an array of pointers you can simply swap the addresses at the cur and cur+1 locations.if (sort==length) 

  for(int i=0; i < number_of_videos; i++) 
  {
    video_info[i]->print();
  } 
  }

  if(sort!="length"&&sort!="rating"&&sort!="title")

//if(sort=="**bad_sorting_method**")
{
    cerr << sort << " is not a legal sorting method, giving up." << endl;
    return 1;
}   

  return 0;
}
