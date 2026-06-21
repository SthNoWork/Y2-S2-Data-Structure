#include "ex5.h"
#include <iostream>

using namespace std;

int main() {

  LIFOStack *stack = new LIFOStack;
  string input;
  cout << "Enter String: ";
  getline(std::cin, input);

  for (char x : input) {
    if (x == ' ') {
      continue;
    }
    if (x == '*') {
      std::cout << "Popped: " << stack->pop() << std::endl;
    } else {
      std::cout << "Pushed: " << x << std::endl;
      stack->push(x);
    }
  }
  std::cout << std::endl;

  delete stack;
  return 0;
}