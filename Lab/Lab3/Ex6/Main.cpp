/*
Write a C++ program to ask a user for 7 float numbers and store in an array.
Create a pointer variable and let it reference to the array.  
    a. Display all numbers stored in array by using another pointer variable.  Let’s loop through array. 
    b. Compute the summation and multiplication of all numbers in this array using pointer operation.  
REMARK: You are not allowed to access element in array using the bracket [ ].
You are required to use pointer operation.
*/
#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

int main() {
    float arr[7];

    for (float &x : arr) {
        cout << "Enter float number: ";
        cin >> x;
    }

    cout << endl;
    cout << "Stored Numbers: ";
    for (float x : arr) {
        cout << x << "  ";
    }

    float sum = 0.0f;
    float mult = 1.0f;

    for (float x : arr) {
        sum += x;
        mult *= x;
    }

    cout << "\n\n--- Results ---" << endl;
    cout << "Summation:      " << sum << endl;
    cout << "Multiplication: " << mult << endl;

    return 0;
}