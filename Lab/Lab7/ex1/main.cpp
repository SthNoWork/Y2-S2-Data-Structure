#include "ex1.h"
#include <iostream>

using namespace std;

int main() {

  Stack stack(5);

  stack.push(2);
  stack.push(5);
  stack.push(1);
  stack.push(9);
  stack.push(10);

  std::cout << "Popped: " << stack.pop() << "\n";
  std::cout << "Peek: " << stack.peek() << "\n";

  stack.display();
  return 0;
}
