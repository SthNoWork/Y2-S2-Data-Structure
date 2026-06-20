#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ex2.h"

int main() {
  srand(time(0));
  int n;
  std::cout << "Enter number of num to generate: ";
  if (!(std::cin >> n)) {
    return 1;
  }

  List *ls = new List();
  for (int i = 0; i < n; i++) {
    int num = rand() % 100;
    ls->add(num);
  }

  std::cout << "List contents:\n";
  ls->display();

  int sum = 0;
  Element *node = ls->head;
  while (node != nullptr) {
    sum += node->data;
    node = node->next;
  }

  double average = n > 0 ? static_cast<double>(sum) / n : 0.0;

  std::cout << "Summation: " << sum << "\n";
  std::cout << "Average: " << average << "\n";

  delete ls;
  return 0;
}