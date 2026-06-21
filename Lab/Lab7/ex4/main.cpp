#include "ex4.h"
#include <iostream>

using namespace std;

int main() {

  int input;
  BinaryStack *stack = new BinaryStack;
  std::cout << "Enter Integer: ";
  std::cin >> input;

  int end = input % 2;

  while (input != end) {
    stack->push(input % 2);
    input /= 2;
  }

  stack->display();
  return 0;
}
