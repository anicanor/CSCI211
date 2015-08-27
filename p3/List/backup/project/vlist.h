#ifndef VLIST_H
#define VLIST_H

#include<iostream>
#include "video.h"

using namespace std;

class Vlist
{
  public:
    bool insert(Video *video);
    void print();
    bool remove(string target);//target you want to delete
    int length();
    Video* lookup(string title);
    ~ Vlist();

  private:
    class Node
    {
      public:
        Node(Video *video, Node *next)
        {m_video = video; m_next = next;}
        Video *m_video;
        Node *m_next;

    };
    Node *m_head;




};
#endif

