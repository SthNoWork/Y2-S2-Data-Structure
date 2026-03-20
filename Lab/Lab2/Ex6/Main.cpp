/*
6. Write a recursive program using C++ language to ask many numbers from a user
    (ask user to input one number then ask again and again).
    When the user inputs number -1,
    the program stops asking user for more numbers.
    Display total summation of all input numbers. 

    Example:  
    Enter number : 7 
    Enter number : 9 
    Enter number : -10 
    Enter number : 90 
    Enter number : -1 
    Total = 95
*/
#include "../../utils/input.cpp"
#include <iostream>

using namespace std;

int sumInput(int &sum, int option) {
    option = getInteger ("Enter number: ");
    if (option == -1) {
        cout << "Total = " << sum << endl;
        return 0;
    }
    sum += option;
    sumInput(sum, option);
}

int main() {
    int sum;
    sumInput(sum, 0);
    return 0;
}
