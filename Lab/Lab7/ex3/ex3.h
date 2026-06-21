#ifndef EX3_H
#define EX3_H

#include <iostream>

struct Element {
  char data;
  Element *next;
};

class Stack {
private:
  Element *topNode;

public:
  Stack() {

    topNode = nullptr;
  }

  ~Stack() {

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
      return -1;
    } else {
      Element *temp = topNode;
      char data = temp->data;
      topNode = topNode->next;
      delete temp;

      return data;
    }

    return '\0';
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
