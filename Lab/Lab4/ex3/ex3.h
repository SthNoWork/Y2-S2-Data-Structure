#include <string>
using namespace std;

struct Student {
    string id;
    string name;
    int year;
};

struct Element {
    Student data;
    Element* next;
};

struct ListStudent {
    int length;
    Element* head;
    Element* tail;
};

ListStudent* createEmptyList() {
    ListStudent* ls = new ListStudent;
    ls->length = 0;
    ls->head = nullptr;
    ls->tail = nullptr;
    return ls;
}

void add(ListStudent* ls, Student stu) {
    Element* node = new Element;
    node->data = stu;
    node->next = nullptr;

    if (ls->length == 0) {
        ls->head = node;
        ls->tail = node;
    } else {
        ls->tail->next = node;
        ls->tail = node;
    }
    ls->length++;
}
