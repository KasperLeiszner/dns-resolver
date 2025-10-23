#include "LinkedList.hpp"

void Node::add(T object) {
  Node<T> current = new Node<T>(object); 

  if (tail == null)
    tail = current;

  if (head == null)
  {
    head = current;
    return;
  }

  tail.next = current;
  tail = current;
}
