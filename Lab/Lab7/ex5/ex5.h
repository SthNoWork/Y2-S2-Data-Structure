#ifndef EX5_H
#define EX5_H

#include <iostream>

struct Element {
  char data;
  Element *next;
};

class LIFOStack {
private:
  Element *topNode;

public:
  LIFOStack() {

    topNode = nullptr;
  }

  ~LIFOStack() {

    while (topNode) {
      Element *temp = topNode;
      topNode = topNode->next;
      delete temp;
    }
  }

  void push(char value) {

    Element *node = new Element;
    node->data = value;
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

#endif
