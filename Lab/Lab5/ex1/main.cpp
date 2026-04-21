#include <iostream>
using namespace std;

struct Element {
    char data;
    Element* next;
};

struct List {
    Element* head;
    Element* tail;
};

List* createList() {
    List* l = new List;
    l->head = l->tail = nullptr;
    return l;
}

void addToEnd(List* l, char c) {
    Element* e = new Element;
    e->data = c;
    e->next = nullptr;
    if (!l->head) l->head = l->tail = e;
    else { l->tail->next = e; l->tail = e; }
}

void display(List* l) {
    for (Element* e = l->head; e; e = e->next)
        cout << e->data << " ";
    cout << endl;
}

int main() {
    List* small = createList();
    List* capital = createList();

    for (char c = 'a'; c <= 'z'; c++) addToEnd(small, c);
    for (char c = 'A'; c <= 'Z'; c++) addToEnd(capital, c);

    cout << "Small letters: ";   display(small);
    cout << "Capital letters: "; display(capital);
}