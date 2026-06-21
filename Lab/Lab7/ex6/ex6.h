#ifndef EX6_H
#define EX6_H

#include <iostream>
#include <string>

struct Element {
  char data;
  Element *next;
};

class DelimiterStack {
private:
  Element *topNode;

public:
  DelimiterStack() {

    topNode = nullptr;
  }

  ~DelimiterStack() {

    while (topNode) {
      Element *temp = topNode;
      topNode = topNode->next;
      delete temp;
    }
  }

  void push(char delimiter) {

    Element *node = new Element;
    node->data = delimiter;
    node->next = topNode;
    topNode = node;
  }

  char pop() {

    if (isEmpty()) {
      std::cout << "Stack is Empty!\n";
      return '\0';
    } else {
      Element *temp = topNode;
      char data = temp->data;
      topNode = topNode->next;
      delete temp;

      return data;
    }
  }

  bool isEmpty() {

    return !topNode;
  }
};

inline bool isMatchingPair(char character1, char character2) {
  if (character1 == '(' && character2 == ')')
    return true;
  else if (character1 == '{' && character2 == '}')
    return true;
  else if (character1 == '[' && character2 == ']')
    return true;
  return false;
}

inline bool areDelimitersBalanced(std::string expr) {
  DelimiterStack s;
  for (char x : expr) {
    if (x == '(' || x == '{' || x == '[') {
      s.push(x);
    } else if (x == ')' || x == '}' || x == ']') {
      if (s.isEmpty()) {
        return false;
      }
      char open = s.pop();
      if (!isMatchingPair(open, x)) {
        return false;
      }
    }
  }
  return s.isEmpty();
}

#endif
