#pragma once

#include "node.cpp"
#include "lli.cpp"

#include <algorithm>
#include <iostream>
#include <memory>

template <typename T>
class LinkedList
{
  int size;
  std::unique_ptr<Node<T>> head;
  std::unique_ptr<Node<T>> tail;

  void init()
  {
    size = 0;
    head.reset(new Node<T>);
    tail.reset(new Node<T>);
    head->next = tail.get();
  }

public:

  LinkedList() { init(); }

  void push_back(const T &value)
  {
    Node<T> *n = new Node<T>(value);
    n->next = head->next;
    head->next = n;
    size++;
  }
  
  void push_front(const T &value)
  {
    Node<T> *n = new Node<T>(value);
    Node<T> *tmp = head.get();
    while(tmp->next != tail.get()) tmp = tmp->next;
    tmp->next = n;
    n->next = tail.get();
    size++;
  }

  int get_size() const
  { 
    return size;
  }

  LinkedListIterator<Node<T>> begin() 
  {
    return LinkedListIterator<Node<T>>(head->next);
  }

  LinkedListIterator<Node<T>> end()
  {
    return LinkedListIterator<Node<T>>(tail.get());
  }

  void clear()
  {
    init();
  }

  void print() 
  {
    if(size == 0)
    {
      std::cout << "list is empty" << std::endl;
    }
    else
    {
      for(auto i = begin(); i != end(); ++i)
      {
        std::cout << i.p->data << std::endl;
      }
    }
  }

};
