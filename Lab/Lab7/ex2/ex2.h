#ifndef EX2_H
#define EX2_H

#include <iostream>

struct Element {
  int data;
  Element *next;
};

class Stack {
private:
  Element *topNode;
  int count;

public:

  Stack() {

    topNode = nullptr;
    count = -1;
  }

  ~Stack() {

    Element *node = topNode;
    while (node) {
      node = node->next;
      delete topNode;
    }
  }

  void push(int value) {

    Element *node = new Element;
    node->data = value;
    node->next = topNode;
    topNode = node;
    count++;
  }

  int pop() {

    if (isEmpty()) {
      std::cout << "Stack is Empty!\n";
      return -1;
    } else {
      Element *temp = topNode;
      int data = temp->data;
      topNode = topNode->next;
      delete temp;
      count--;
      return data;
    }
  }

  int peek() {

    if (isEmpty()) {
      std::cout << "Stack is Empty!\n";
      return -1;
    } else {
      return topNode->data;
    }
  }

  bool isEmpty() {

    return !topNode;
  }

  int size() {

    return count;
  }

  void display() {
    Element *node = topNode;
    int i = 0;
    std::cout << "\n=== Stack ===\n";
    while (node) {
      std::cout << "#" << i++ << ": " << node->data << "\n";
      node = node->next;
    }
  }
};

#endif
