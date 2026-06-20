#ifndef EX5_H
#define EX5_H

#include <iostream>

// Node structure for the character stack
struct Element {
    char data;
    Element* next;
};

// Stack implementation to track LIFO operations on sequence:
// E A S * Y * Q U E * * * S T * * * I O * N * * ***
class LIFOStack {
private:
    Element* topNode;

public:
    LIFOStack() {
        // TODO: Initialize topNode to nullptr
    }

    ~LIFOStack() {
        // TODO: Pop all elements to free memory
    }

    // Push a character
    void push(char value) {
        // TODO: Implement push
    }

    // Pop and return character
    char pop() {
        // TODO: Implement pop, print the popped character (or return it to be printed)
        return '\0';
    }

    // Check if the stack is empty
    bool isEmpty() {
        // TODO: Return if empty
        return true;
    }
};

#endif // EX5_H
