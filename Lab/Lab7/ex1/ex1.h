#ifndef EX1_H
#define EX1_H

#include <iostream>

// Class template for an Array-based Stack of integers
class Stack {
private:
  int *arr;     // Pointer to array to store stack elements
  int capacity; // Maximum capacity of the stack
  int topIndex; // Index of the top element (-1 when empty)

public:
  // Constructor to initialize the stack with a given size
  Stack(int size) {
    // TODO: Initialize capacity, allocate dynamic array of size, and set
    // topIndex to -1
    arr = new int[size];
    capacity = size;
    topIndex = -1;
  }

  // Destructor to free the allocated memory
  ~Stack() {
    // TODO: Delete the allocated array to prevent memory leaks
    delete[] arr;
  }

  // Push an element onto the stack
  void push(int value) {
    // TODO: Check if the stack is full.
    // If full, print an error message.
    // Otherwise, increment topIndex and store the value in the array.
    if (isFull()) {
      std::cout << "Stack is full!\n";
    } else {
      topIndex++;
      arr[topIndex] = value;
    }
  }

  // Pop and return the top element from the stack
  int pop() {
    // TODO: Check if the stack is empty.
    // If empty, print an error message and return a placeholder (e.g., -1).
    // Otherwise, retrieve the element at topIndex, decrement topIndex, and
    if (isEmpty()) {
      std::cout << "Stack is empty!\n";
      return -1;
    } else {
      int temp = arr[topIndex];
      arr[topIndex] = 0;
      topIndex--;
      return temp;
    }
    // return the element.
  }

  // Peek at the top element without removing it
  int peek() {
    // TODO: Check if the stack is empty.
    // If empty, print an error message and return a placeholder (e.g., -1).
    // Otherwise, return the element at topIndex.
    if (topIndex <= -1) {
      std::cout << "Stack is empty!\n";
      return -1;
    } else {
      return arr[topIndex];
    }
  }

  // Check if the stack is empty
  bool isEmpty() { // TODO: Return true if topIndex is -1, otherwise false
    return topIndex <= -1;
  }

  // Check if the stack is full
  bool isFull() {
    // TODO: Return true if topIndex reaches capacity - 1, otherwise false

    return topIndex >= capacity; // Placeholder
  }

  // Display all stack elements from top to bottom
  void display() {
    // TODO: Loop from topIndex down to 0 and print each element
    std::cout << "\n=== Stack ===\n";
    for (int i = 0; i <= topIndex; i++) {
      std::cout << "#" << i << ": " << arr[i] << "\n";
    };
  }
};

#endif // EX1_H
