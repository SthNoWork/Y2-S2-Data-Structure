#ifndef EX2_H
#define EX2_H

#include <iostream>

// Node structure for the singly linked list
struct Element {
  int data;
  Element *next;
};

// Class template for a Singly Linked List-based Stack of integers
class Stack {
private:
  Element *topNode; // Pointer to the top element of the stack
  int count;        // Number of elements in the stack

public:
  // Constructor to initialize the stack
  Stack() {
    // TODO: Set topNode to nullptr and count to 0
    topNode = nullptr;
    count = -1;
  }

  // Destructor to clean up all allocated nodes
  ~Stack() {
    // TODO: Loop through and pop all remaining elements to free memory
    Element *node = topNode;
    while (node) {
      node = node->next;
      delete topNode;
    }
  }

  // Push an element onto the stack
  void push(int value) {
    // TODO: Allocate a new Element node, assign the value,
    // point next to topNode, update topNode to the new node, and increment
    // count.
    Element *node = new Element;
    node->data = value;
    node->next = topNode;
    topNode = node;
    count++;
  }

  // Pop and return the top element from the stack
  int pop() {
    // TODO: Check if the stack is empty.
    // If empty, print a message and return a placeholder (e.g., -1).
    // Otherwise, store the topNode in a temp pointer, retrieve its data,
    // update topNode to topNode->next, delete the temp node, decrement count,
    // and return the data.
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

  // Peek at the top element without removing it
  int peek() {
    // TODO: Check if the stack is empty.
    // If empty, return a placeholder (e.g., -1).
    // Otherwise, return topNode->data.
    if (isEmpty()) {
      std::cout << "Stack is Empty!\n";
      return -1;
    } else {
      return topNode->data;
    }
  }

  // Check if the stack is empty
  bool isEmpty() {
    // TODO: Return true if topNode is nullptr (or count is 0), otherwise false
    return !topNode;
  }

  // Return the number of elements in the stack
  int size() {
    // TODO: Return the count variable
    return count; // Placeholder
  }

  // Print all elements in the stack from top to bottom
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

#endif // EX2_H
