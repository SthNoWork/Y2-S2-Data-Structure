#include "ex2.h"
#include <iostream>

int main() {

  Stack *stack = new Stack;

  stack->push(2);
  stack->push(5);
  stack->push(1);
  stack->push(9);
  stack->push(10);

  std::cout << "Popped: " << stack->pop() << "\n";
  std::cout << "Peek: " << stack->peek() << "\n";

  stack->display();
  return 0;
}
