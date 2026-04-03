#include <string>

struct Student {
    std::string id;
    std::string name;
    int year;
    std::string degree;
};

struct StudentNode {
    Student data;
    StudentNode* next;
};

struct ListStudent {
    StudentNode* head;
    StudentNode* tail;
};