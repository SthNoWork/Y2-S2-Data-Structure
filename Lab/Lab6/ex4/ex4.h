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

  // get min value
  int getMin() {
    if (head == nullptr) {
      std::cerr << "List is empty!\n";
      return 0;
    }
    int minVal = head->data;
    Element *curr = head->next;
    while (curr != nullptr) {
      if (curr->data < minVal) {
        minVal = curr->data;
      }
      curr = curr->next;
    }
    return minVal;
  }

  // get max value
  int getMax() {
    if (head == nullptr) {
      std::cerr << "List is empty!\n";
      return 0;
    }
    int maxVal = head->data;
    Element *curr = head->next;
    while (curr != nullptr) {
      if (curr->data > maxVal) {
        maxVal = curr->data;
      }
      curr = curr->next;
    }
    return maxVal;
  }

  void display() {
    Element *node = head;

    while (node) {
      std::cout << "Num: " << node->data << "\n";
      node = node->next;
    }
  }
};
