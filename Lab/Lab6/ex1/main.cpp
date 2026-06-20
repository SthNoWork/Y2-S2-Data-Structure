#include "ex1.h"

int main() {
  List *ls = new List();
  ls->add(5);
  ls->add(6);
  ls->add(1);
  ls->add(8);
  ls->add(10);
  ls->add(6);

  ls->addHead(100);
  ls->addPos(33, 3);
  ls->display();

  delete ls;
  return 0;
}