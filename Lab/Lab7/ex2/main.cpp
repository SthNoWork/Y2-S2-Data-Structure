/*
Write a C++ program to implement a stack data structure using a singly linked list to store integer numbers

with the following operations:
push(),  pop(),  peek(),  isEmpty(),  return the size. and display from top to bottom.
*/

#include <iostream>

using namespace std;

struct Element {
    int data;
    Element* next;
};

struct Stack {
    int size;
    Element* top;
};

Stack* createStack() {
    Stack* s = new Stack;
    s->size = 0;
    s->top  = nullptr;
    return s;
}

bool isEmpty(Stack* s) {
    return s->top == nullptr;
}

int getSize(Stack* s) {
    return s->size;
}

void push(Stack* s, int data) {
    Element* node = new Element;
    node->data    = data;
    node->next    = s->top;
    s->top        = node;
    s->size++;
}

void pop(Stack* s) {
    if (isEmpty(s)) {
        cout << "  [pop] Stack is empty — nothing to remove.\n";
        return;
    }
    Element* node = s->top;
    s->top        = node->next;
    delete node;
    s->size--;
}

int peek(Stack* s) {
    if (isEmpty(s)) {
        cout << "  [peek] Stack is empty.\n";
        return -1;
    }
    return s->top->data;
}

void display(Stack* s) {
    if (isEmpty(s)) {
        cout << "  [display] Stack is empty.\n";
        return;
    }

    cout << "  Top → ";
    Element* current = s->top;
    while (current != nullptr) {
        cout << current->data;
        if (current->next != nullptr) cout << " → ";
        current = current->next;
    }
    cout << " → Bottom\n";
}

void freeStack(Stack* s) {
    while (!isEmpty(s)) pop(s);
    delete s;
}

int main() {

    Stack* s = createStack();

    cout << "\n--- push 10, 20, 30 ---\n";
    push(s, 10);
    push(s, 20);
    push(s, 30);
    display(s);

    cout << "\n--- peek ---\n";
    cout << "  Top value: " << peek(s) << "\n";

    cout << "\n--- size ---\n";
    cout << "  Size: " << getSize(s) << "\n";

    cout << "\n--- isEmpty ---\n";
    cout << "  Is empty? " << (isEmpty(s) ? "Yes" : "No") << "\n";

    cout << "\n--- pop once ---\n";
    pop(s);
    display(s);

    cout << "\n--- pop twice more ---\n";
    pop(s);
    pop(s);
    display(s);

    cout << "\n--- pop on empty stack ---\n";
    pop(s);

    freeStack(s);
    return 0;
}
