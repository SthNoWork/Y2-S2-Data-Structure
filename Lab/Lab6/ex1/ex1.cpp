#include "ex1.h"

int main() {
    // 1) Create an empty list
    List* myList = createList();
    cout << "--- List Created ---" << endl;

    // Data to work with
    int val1 = 10, val2 = 20, val3 = 30, val4 = 40;

    // 2) Add to front
    cout << "\nAdding 20 and then 10 to the front..." << endl;
    addFront(myList, val2); // List: 20
    addFront(myList, val1); // List: 10 <-> 20

    // 3) Add to end
    cout << "Adding 30 and 40 to the end..." << endl;
    addEnd(myList, val3); // List: 10 <-> 20 <-> 30
    addEnd(myList, val4); // List: 10 <-> 20 <-> 30 <-> 40

    // 5) Display current list
    displayList(myList);

    // 4) Update specific position
    // Let's change the "20" (at index 1) to "99"
    int pos = 1;
    int newVal = 99;
    cout << "\nUpdating position " << pos << " to " << newVal << "..." << endl;
    update(myList, pos, newVal);

    // Display again to verify the update
    displayList(myList);

    return 0;
}