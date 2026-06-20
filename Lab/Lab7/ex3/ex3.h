#ifndef EX3_H
#define EX3_H

#include <iostream>

// Node structure for the character stack
struct Element {
    char data;
    Element* next;
};

// Class template for a linked list-based Character Stack
class CharStack {
private:
    Element* topNode;

public:
    CharStack() {
        // TODO: Initialize topNode to nullptr
    }

    ~CharStack() {
        // TODO: Pop all elements to prevent memory leaks
    }

    // Push a character onto the stack
    void push(char value) {
        // TODO: Push character onto the stack
    }

    // Pop a character from the stack
    char pop() {
        // TODO: Pop character from the stack and return it
        return '\0'; // Placeholder
    }

    // Check if the stack is empty
    bool isEmpty() {
        // TODO: Return true if stack is empty, otherwise false
        return true; // Placeholder
    }

    // Display stack elements (from top to bottom)
    void display() {
        // TODO: Print all elements in stack
    }
};

#endif // EX3_H
