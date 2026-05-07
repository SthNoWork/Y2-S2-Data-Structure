#include <iostream>
using namespace std;

struct Element {
    int data;
    Element* next;
    Element* previous;
};

struct List {
    int length;
    Element* head;
    Element* tail;
};

// 1) Create an empty list
List* createList() {
    List* ls = new List;
    ls->length = 0;
    ls->head = nullptr;
    ls->tail = nullptr;
    return ls;
}

void initFirst(List* ls, int& num) {
    Element* node = new Element;
    ls->length++;
    node->data = num;
    node->next = nullptr;
    node->previous = nullptr;
    ls->head = node;
    ls->tail = node;
}

// 2) Add a number to begin of list
void addFront(List* ls, int& num) {
    if (ls->length == 0) {
        initFirst(ls, num);
    } else {
        Element* node = new Element;
        node->data = num;

        node->next = ls->head;
        node->previous = nullptr; // FIX: New head must point back to nothing
        ls->head->previous = node;
        ls->head = node;
        ls->length++;
    }
}

// 3) Add a number to end of list
void addEnd(List* ls, int& num) {
    if (ls->length == 0) {
        initFirst(ls, num);
    } else {
        Element* node = new Element;
        node->data = num;

        node->next = nullptr; // FIX: New tail must point forward to nothing
        node->previous = ls->tail;
        ls->tail->next = node;
        ls->tail = node;
        ls->length++;
    }
}

// 4) Add a number to specific position in the list
void update(List* ls, int& pos, int& num) {
    if (pos < 0 || pos >= ls->length) {
        cout << "No!" << endl;
        return;
    } else {
        Element* node;
        node = ls->head;
        for (int i = 0; i < pos; i++) {
            node = node->next;
        }
        node->data = num;
    }
}

// 5) display list
void displayList(List* ls) {
    if (ls->head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }
    Element* node = ls->head;

    int count = 1;
    while (node != nullptr) {
        cout << endl;
        cout << "Student #" << count++ << endl;
        cout << "Integer: " << node->data << endl;
        node = node->next;
    }
}