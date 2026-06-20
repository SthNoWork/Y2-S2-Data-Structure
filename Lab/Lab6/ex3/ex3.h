#include <iostream>

struct Element {
  int data;
  Element *prev;
  Element *next;
};

class List {
public:
  int length;
  Element *head;
  Element *tail;

  // create empty list
  List() {
    length = 0;
    head = nullptr;
    tail = nullptr;
  }

  ~List() {
    Element *current = head;
    while (current != nullptr) {
      Element *next = current->next;
      delete current;
      current = next;
    }
  }

  // add num to begin
  void addHead(int num) {
    Element *node = new Element();
    node->data = num;
    node->next = head;
    node->prev = nullptr;
    if (head != nullptr) {
      head->prev = node;
    }
    head = node;
    if (tail == nullptr) {
      tail = node;
    }
    length++;
  }

  // add num to end
  void add(int num) {
    Element *node = new Element();
    node->data = num;
    node->next = nullptr;
    node->prev = nullptr;

    if (head == nullptr) {
      head = node;
      tail = node;
    } else {
      tail->next = node;
      node->prev = tail;
      tail = node;
    }
    length++;
  }

  // add to specific pos
  void addPos(int num, int pos) {
    if (pos <= 1) {
      addHead(num);
    } else if (pos > length) {
      add(num);
    } else {
      Element *node = new Element();
      node->data = num;

      Element *temp = head;
      for (int i = 1; i < pos; i++) {
        if (temp != nullptr) {
          temp = temp->next;
        }
      }
      if (temp != nullptr) {
        node->next = temp;
        node->prev = temp->prev;
        if (temp->prev != nullptr) {
          temp->prev->next = node;
        } else {
          head = node;
        }
        temp->prev = node;
        length++;
      } else {
        add(num);
      }
    }
  }

  // delete head
  void deleteHead() {
    if (head == nullptr) return;
    Element *temp = head;
    head = head->next;
    if (head != nullptr) {
      head->prev = nullptr;
    } else {
      tail = nullptr;
    }
    delete temp;
    length--;
  }

  // delete tail
  void deleteTail() {
    if (tail == nullptr) return;
    Element *temp = tail;
    tail = tail->prev;
    if (tail != nullptr) {
      tail->next = nullptr;
    } else {
      head = nullptr;
    }
    delete temp;
    length--;
  }

  // delete specific pos
  void deletePos(int pos) {
    if (pos <= 1) {
      deleteHead();
    } else if (pos >= length) {
      deleteTail();
    } else {
      Element *temp = head;
      for (int i = 1; i < pos; i++) {
        if (temp != nullptr) {
          temp = temp->next;
        }
      }
      if (temp != nullptr) {
        if (temp->prev != nullptr) {
          temp->prev->next = temp->next;
        }
        if (temp->next != nullptr) {
          temp->next->prev = temp->prev;
        }
        delete temp;
        length--;
      }
    }
  }

  void display() {
    Element *node = head;

    while (node) {
      std::cout << "Num: " << node->data << "\n";
      node = node->next;
    }
  }
};
