#include "../ex2/ex2.h"

ListStudent* createEmptyList() {
    ListStudent* LS = new ListStudent();
    LS->head = nullptr;
    LS->tail = nullptr;
    return LS;
}

void add(Student s, ListStudent* LS) {
    StudentNode* newNode = new StudentNode();
    newNode->data = s;
    newNode->next = nullptr;
    
    if (LS->head == nullptr) {
        LS->head = newNode;
        LS->tail = newNode;
    } else {
        LS->tail->next = newNode;
        LS->tail = newNode;
    }
}