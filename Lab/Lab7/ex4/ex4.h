#ifndef EX4_H
#define EX4_H

#include <iostream>

// Node structure for integer stack (to store binary digits)
struct Element {
    int data;
    Element* next;
};

class BinaryStack {
private:
    Element* topNode;

public:
    BinaryStack() {
        // TODO: Initialize topNode to nullptr
    }

    ~BinaryStack() {
        // TODO: Pop all elements to prevent memory leaks
    }

    // Push binary digit (0 or 1) onto the stack
    void push(int bit) {
        // TODO: Implement push
    }

    // Pop from stack
    int pop() {
        // TODO: Implement pop and return the popped bit
        return -1;
    }

    // Check if the stack is empty
    bool isEmpty() {
        // TODO: Return true if stack is empty, otherwise false
        return true;
    }

    // Display the binary bits stored in the stack from top to bottom
    // (This prints the binary representation of the decimal number)
    void display() {
        // TODO: Print the contents of the stack from top to bottom
    }
};

#endif // EX4_H
