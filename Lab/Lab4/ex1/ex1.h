struct Element {
    int data;
    Element* next;
};

struct List {
    int length;
    Element* head;
    Element* tail;
};