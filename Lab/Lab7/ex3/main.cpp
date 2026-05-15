/*
Write a program to ask a piece of text from a user.
Display the text in a reverse order using stack.

Hint: Push each character in the text into stack. Display stack.
*/

#include <iostream>

using namespace std;

struct Element {
    char data;
    Element* next;
};

struct Stack {
    int size;
    Element* top;
};

Stack* createStack() {
    Stack* s = new Stack;
    s->size = 0;
    s->top = nullptr;
    return s;
}

void push(Stack* s, char data) {
    Element* node = new Element;
    node->data = data;
    node->next = s->top;
    s->top = node;
    s->size++;
}

void display(Stack* s) {
    Element* node = s->top;
    while (node != nullptr) {
        cout << node->data;
        node = node->next;
    }
}

int main () {
    Stack* s = createStack();
    string input;
    cout << "Enter String: ";
    cin >> input;

    for (char x : input) {
        push(s,x);
    }

    display(s);
    
    return 0;
}