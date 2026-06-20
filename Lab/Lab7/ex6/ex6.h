#ifndef EX6_H
#define EX6_H

#include <iostream>
#include <string>

// Node structure for the delimiter character stack
struct Element {
    char data;
    Element* next;
};

// Stack to check if brackets/delimiters are balanced
class DelimiterStack {
private:
    Element* topNode;

public:
    DelimiterStack() {
        // TODO: Initialize topNode to nullptr
    }

    ~DelimiterStack() {
        // TODO: Pop all elements to free memory
    }

    // Push left delimiter
    void push(char delimiter) {
        // TODO: Implement push
    }

    // Pop left delimiter
    char pop() {
        // TODO: Implement pop and return character
        return '\0';
    }

    // Check if empty
    bool isEmpty() {
        // TODO: Return if empty
        return true;
    }
};

// Function template to check if delimiters match
// e.g. matching '(' with ')', '[' with ']', '{' with '}'
inline bool isMatchingPair(char character1, char character2) {
    if (character1 == '(' && character2 == ')')
        return true;
    else if (character1 == '{' && character2 == '}')
        return true;
    else if (character1 == '[' && character2 == ']')
        return true;
    return false;
}

// Function template to check if delimiters are balanced
inline bool areDelimitersBalanced(std::string expr) {
    DelimiterStack s;
    // TODO: Loop through string:
    // 1. If left delimiter, push to s.
    // 2. If right delimiter, pop and check if matches.
    // 3. Return true if balanced, false otherwise.
    return false;
}

#endif // EX6_H
