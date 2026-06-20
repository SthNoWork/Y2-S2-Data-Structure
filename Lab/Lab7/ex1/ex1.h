#ifndef EX1_H
#define EX1_H

#include <iostream>

// Class template for an Array-based Stack of integers
class Stack {
private:
    int* arr;         // Pointer to array to store stack elements
    int capacity;     // Maximum capacity of the stack
    int topIndex;     // Index of the top element (-1 when empty)

public:
    // Constructor to initialize the stack with a given size
    Stack(int size = 100) {
        // TODO: Initialize capacity, allocate dynamic array of size, and set topIndex to -1
    }

    // Destructor to free the allocated memory
    ~Stack() {
        // TODO: Delete the allocated array to prevent memory leaks
    }

    // Push an element onto the stack
    void push(int value) {
        // TODO: Check if the stack is full.
        // If full, print an error message.
        // Otherwise, increment topIndex and store the value in the array.
    }

    // Pop and return the top element from the stack
    int pop() {
        // TODO: Check if the stack is empty.
        // If empty, print an error message and return a placeholder (e.g., -1).
        // Otherwise, retrieve the element at topIndex, decrement topIndex, and return the element.
        return -1; // Placeholder
    }

    // Peek at the top element without removing it
    int peek() {
        // TODO: Check if the stack is empty.
        // If empty, print an error message and return a placeholder (e.g., -1).
        // Otherwise, return the element at topIndex.
        return -1; // Placeholder
    }

    // Check if the stack is empty
    bool isEmpty() {
        // TODO: Return true if topIndex is -1, otherwise false
        return true; // Placeholder
    }

    // Check if the stack is full
    bool isFull() {
        // TODO: Return true if topIndex reaches capacity - 1, otherwise false
        return false; // Placeholder
    }

    // Display all stack elements from top to bottom
    void displayStack() {
        // TODO: Loop from topIndex down to 0 and print each element
    }
};

#endif // EX1_H
