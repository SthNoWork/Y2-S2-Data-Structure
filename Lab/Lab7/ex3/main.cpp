#include "ex3.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
  Stack *stack = new Stack;
  string input;
  cout << "Enter String: ";
  cin >> input;

  for (char x : input) {
    stack->push(x);
  }

  stack->display();

  return 0;
}