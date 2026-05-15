#include "ex1.h"

int main() {
    List* ls = createList();

    addFront(ls, 25);
    addEnd(ls, 10);
    insertAt(ls, 1, 20);

    displayList(ls);
    return 0;
}