#include <iostream>
#include "../ex1/ex1.h"

void add(List* ls, int& num) {
    Element* node = new Element;
    node->data = num;
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

using namespace std;

int main() {
    int num;
    int count = 0;
    List* ls = new List;
    ls->length = 0;
    ls->head = nullptr;
    ls->tail = nullptr;

    while (count < 2) {
        cout << "Enter a number: ";
        cin >> num;
        cin.clear();

        if (num == 0) {
            count++;
            if (count == 1) {
                cout << "You have entered 0 once. 1 more left to quit." << endl;
            }
        }

        add(ls, num);
    }
    cout << "You have entered the number 0 twice so far. The program is going to stop now" << endl;
    cout << "All data in the list are: ";

    Element* node = new Element;
    node = ls->head;
    for (int i = 0; ls->length > i; i++) {
        cout << node->data << ' ';
        node = node->next;
    }
    return 0;
}