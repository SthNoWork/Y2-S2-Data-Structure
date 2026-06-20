#ifndef EX2_H
#define EX2_H

#include <iostream>

// Node structure for the singly linked list
struct Element {
    int data;
    Element* next;
};

// Class template for a Singly Linked List-based Stack of integers
class Stack {
private:
    Element* topNode; // Pointer to the top element of the stack
    int count;        // Number of elements in the stack

public:
    // Constructor to initialize the stack
    Stack() {
        // TODO: Set topNode to nullptr and count to 0
    }

    // Destructor to clean up all allocated nodes
    ~Stack() {
        // TODO: Loop through and pop all remaining elements to free memory
    }

    // Push an element onto the stack
    void push(int value) {
        // TODO: Allocate a new Element node, assign the value, 
        // point next to topNode, update topNode to the new node, and increment count.
    }

    // Pop and return the top element from the stack
    int pop() {
        // TODO: Check if the stack is empty. 
        // If empty, print a message and return a placeholder (e.g., -1).
        // Otherwise, store the topNode in a temp pointer, retrieve its data,
        // update topNode to topNode->next, delete the temp node, decrement count, and return the data.
        return -1; // Placeholder
    }

    // Peek at the top element without removing it
    int peek() {
        // TODO: Check if the stack is empty.
        // If empty, return a placeholder (e.g., -1).
        // Otherwise, return topNode->data.
        return -1; // Placeholder
    }

    // Check if the stack is empty
    bool isEmpty() {
        // TODO: Return true if topNode is nullptr (or count is 0), otherwise false
        return true; // Placeholder
    }

    // Return the number of elements in the stack
    int size() {
        // TODO: Return the count variable
        return 0; // Placeholder
    }

    // Print all elements in the stack from top to bottom
    void display() {
        // TODO: Traverse from topNode to the end of the list and print each element
    }
};

#endif // EX2_H
