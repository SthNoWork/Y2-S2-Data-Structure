#include <iostream>
#include "ex4.h"

int main() {
  List *ls = new List();
  ls->add(35);
  ls->add(12);
  ls->add(89);
  ls->add(4);
  ls->add(56);
  ls->add(72);

  std::cout << "List elements:\n";
  ls->display();

  std::cout << "\nMinimum element: " << ls->getMin() << "\n";
  std::cout << "Maximum element: " << ls->getMax() << "\n";

  delete ls;
  return 0;
}
