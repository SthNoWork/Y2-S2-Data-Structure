#include <iostream>
#include <string>
using namespace std;

struct Element {
    string name;
    Element* next;
};

struct List {
    Element* head;
};

List* createList() {
    List* l = new List;
    l->head = nullptr;
    return l;
}

void addPerson(List* l, string name) {
    Element* e = new Element;
    e->name = name;
    e->next = l->head;
    l->head = e;
}

void display(List* l) {
    for (Element* e = l->head; e; e = e->next)
        cout << e->name << endl;
}

int main() {
    List* l = createList();
    addPerson(l, "Dara");
    addPerson(l, "Sokha");
    addPerson(l, "Maly");
    addPerson(l, "Vanna");
    addPerson(l, "Ratha");
    addPerson(l, "Pisey");
    addPerson(l, "Bopha");
    addPerson(l, "Chanthy");
    addPerson(l, "Sreymom");
    addPerson(l, "Kakada");

    cout << "Person list:" << endl;
    display(l);
}