#include <iostream>

class List {
private:
  struct Element {
    int data;
    Element *next;
    Element *previous;
  };
  int length;
  Element *head;
  Element *tail;

public:
  List() {
    length = 0;
    head = nullptr;
    tail = nullptr;
  }

  void initFirst(int num) {
    Element *node = new Element;
    node->data = num;
    node->next = nullptr;
    node->previous = nullptr;
    head = node;
    tail = node;
    length++;
  }

  void addFront(int num) {
    if (length == 0) {
      initFirst(num);
    } else {
      Element *node = new Element;
      node->data = num;
      node->next = ls->head;
      node->previous = nullptr;
      ls->head->previous = node;
      ls->head = node;
      ls->length++;
    }
  }

  void addEnd(int num) {
    if (length == 0) {
      initFirst(num);
    } else {
      Element *node = new Element;
      node->data = num;
      node->next = nullptr;
      node->previous = tail;
      tail->next = node;
      tail = node;
      length++;
    }
  }

  void insertAt(int pos, int num) {
    if (pos < 0 || pos > length) {
      cout << "Position " << pos << " is out of range (0.." << length << ")."
           << endl;
      return;
    }

    if (pos == 0) {
      addFront(num);
      return;
    }
    if (pos == length) {
      addEnd(num);
      return;
    }

    Element *current = head;
    for (int i = 0; i < pos; i++) {
      current = current->next;
    }

    Element *node = new Element;
    node->data = num;
    node->next = current;
    node->previous = current->previous;
    current->previous->next = node;
    current->previous = node;
    length++;
  }

  void displayList() {
    if (head == nullptr) {
      cout << "List is empty." << endl;
      return;
    }
    Element *node = head;
    int count = 1;
    while (node != nullptr) {
      cout << "\nElement #" << count++ << endl;
      cout << "Integer: " << node->data << endl;
      node = node->next;
    }
  }
};
#endif
