#include <iostream>
#include "../ex3/ex3.h"

void displayAllStudent(ListStudent* ls) {
    if (ls->head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }
    Element* node = ls->head;

    int count = 1;
    while (node != nullptr) {
        cout << endl;
        cout << "Student #" << count++ << endl;
        cout << "id: " << node->data.id << endl;
        cout << "name: " << node->data.name << endl;
        cout << "year: " << node->data.year << endl;
        node = node->next;
    }
}
int main() {
    ListStudent* stu = createEmptyList();

    Student s1 = {"p202400", "Vanheng", 2007};
    Student s2 = {"p202400", "Caro", 2007};
    Student s3 = {"p202400", "Kimter", 2007};
    Student s4 = {"p202400", "Both", 2007};
    Student s5 = {"p202400", "Vattey", 2007};

    add(stu, s1);
    add(stu, s2);
    add(stu, s3);
    add(stu, s4);
    add(stu, s5);

    displayAllStudent(stu);
    return 0;
}