#include "ex3.h"
#include <iostream>

int main() {
  List *ls = new List();
  ls->add(10);
  ls->add(20);
  ls->add(30);
  ls->add(40);
  ls->add(50);

  std::cout << "Original list:\n";
  ls->display();

  std::cout << "\nDeleting from beginning (head):\n";
  ls->deleteHead();
  ls->display();

  std::cout << "\nDeleting from end (tail):\n";
  ls->deleteTail();
  ls->display();

  std::cout << "\nDeleting at position 2:\n";
  ls->deletePos(2);
  ls->display();

  delete ls;
  return 0;
}