#ifndef EX1_H
#define EX1_H

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

// ─── Internal helper ────────────────────────────────────────────────────────

void initFirst(List* ls, int num) {
    Element* node = new Element;
    node->data = num;
    node->next = nullptr;
    node->previous = nullptr;
    ls->head = node;
    ls->tail = node;
    ls->length++;
}

// ─── 1) Create an empty list ─────────────────────────────────────────────────

List* createList() {
    List* ls = new List;
    ls->length = 0;
    ls->head = nullptr;
    ls->tail = nullptr;
    return ls;
}

// ─── 2) Add a number to the front of the list ────────────────────────────────

void addFront(List* ls, int num) {
    if (ls->length == 0) {
        initFirst(ls, num);
    }
    else {
        Element* node = new Element;
        node->data = num;
        node->next = ls->head;
        node->previous = nullptr;    // new head has no predecessor
        ls->head->previous = node;
        ls->head = node;
        ls->length++;
    }
}

// ─── 3) Add a number to the end of the list ──────────────────────────────────

void addEnd(List* ls, int num) {
    if (ls->length == 0) {
        initFirst(ls, num);
    }
    else {
        Element* node = new Element;
        node->data = num;
        node->next = nullptr;    // new tail has no successor
        node->previous = ls->tail;
        ls->tail->next = node;
        ls->tail = node;
        ls->length++;
    }
}

// ─── 4) Insert a number at a specific position ───────────────────────────────

void insertAt(List* ls, int pos, int num) {
    if (pos < 0 || pos > ls->length) {
        cout << "Position " << pos << " is out of range (0.." << ls->length << ")." << endl;
        return;
    }

    if (pos == 0) {
        addFront(ls, num);
        return;
    }
    if (pos == ls->length) {
        addEnd(ls, num);
        return;
    }

    Element* current = ls->head;
    for (int i = 0; i < pos; i++) {
        current = current->next;
    }

    Element* node = new Element;
    node->data = num;
    node->next = current;
    node->previous = current->previous;
    current->previous->next = node;
    current->previous = node;
    ls->length++;
}

// ─── 5) Display the list ─────────────────────────────────────────────────────

void displayList(List* ls) {
    if (ls->head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }
    Element* node = ls->head;
    int count = 1;
    while (node != nullptr) {
        cout << "\nElement #" << count++ << endl;
        cout << "Integer: " << node->data << endl;
        node = node->next;
    }
}

#endif // EX1_H