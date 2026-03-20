/*
3. C++ Program that can do some operations below. 
   (make a menu for your program so that users can test any functions Run it as infinite loop).
   Solve each operation using recursive operation. 
    a. A function to display n star (*) void  displayStar(int n) 
    b. Display numbers from n to 1  void displayNumbers(int n)
*/
#include "../../utils/input.cpp"
#include <iostream>

void displayStar(int n) {
    if (n <= 0) {
        cout << endl;
        return;
    }
    cout << "* ";
    displayStar(n - 1);
}

void displayNumbers(int n) {
    if (n <= 0) {
        cout << endl;
        return;
    }
    cout << n << ' ';
    displayNumbers(n - 1);
}
int main() {
    int Option;
    do {
        cout << "=== Display * or Number(s) ===" << endl;
        cout << "1. Display *" << endl;
        cout << "2. Display number(s)" << endl;
        cout << "0. Exit" << endl;
        Option = getOption("Option: ", 2);
        switch (Option) {
        case 1:
            displayStar(getInteger("Enter amount of *: "));
            break;
        case 2:
            displayNumbers(getInteger("Enter number: "));
            break;
        }
    } while (Option != 0);
    return 0;
}
