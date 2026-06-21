#ifndef EX1_H
#define EX1_H

#include <iostream>

class Stack {
private:
  int *arr;
  int capacity;
  int topIndex;

public:

  Stack(int size) {

    arr = new int[size];
    capacity = size;
    topIndex = -1;
  }

  ~Stack() {

    delete[] arr;
  }

  void push(int value) {

    if (isFull()) {
      std::cout << "Stack is full!\n";
    } else {
      topIndex++;
      arr[topIndex] = value;
    }
  }

  int pop() {

    if (isEmpty()) {
      std::cout << "Stack is empty!\n";
      return -1;
    } else {
      int temp = arr[topIndex];
      arr[topIndex] = 0;
      topIndex--;
      return temp;
    }

  }

  int peek() {

    if (topIndex <= -1) {
      std::cout << "Stack is empty!\n";
      return -1;
    } else {
      return arr[topIndex];
    }
  }

  bool isEmpty() {
    return topIndex <= -1;
  }

  bool isFull() {

    return topIndex >= capacity;
  }

  void display() {

    std::cout << "\n=== Stack ===\n";
    for (int i = 0; i <= topIndex; i++) {
      std::cout << "#" << i << ": " << arr[i] << "\n";
    };
  }
};

#endif
