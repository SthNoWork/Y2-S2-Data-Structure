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