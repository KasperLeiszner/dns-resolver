#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include "node.hpp"

template <typename T>
class LinkedList {
  public:
    void add(T object);
    void remove(T object);
    T search(T object);
    void print();
  private:
    Node<T>* head;
    Node<T>* tail;
};


#endif
