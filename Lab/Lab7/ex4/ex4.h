#ifndef EX4_H
#define EX4_H

#include <iostream>

struct Element {
  int data;
  Element *next;
};

class BinaryStack {
private:
  Element *topNode;

public:
  BinaryStack() {

    topNode = nullptr;
  }

  ~BinaryStack() {

    while (topNode) {
      Element *temp = topNode;
      topNode = topNode->next;
      delete temp;
    }
  }

  void push(int bit) {

    Element *node = new Element;
    node->data = bit;
    node->next = topNode;
    topNode = node;
  }

  int pop() {

    if (isEmpty()) {
      std::cout << "Stack is Empty!\n";
      return -1;
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

  void display() {

    Element *node = topNode;
    int i = 0;
    std::cout << "\n=== Stack ===\n";
    while (node) {
      std::cout << node->data;
      node = node->next;
    }
    std::cout << std::endl;
  }
};

#endif
