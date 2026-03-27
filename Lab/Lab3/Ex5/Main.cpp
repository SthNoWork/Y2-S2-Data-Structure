/*
Write a C++ program to ask a user for 7 integer numbers and store in an array. Then write a function 
that can find min and max values from this array. You are recommended to use pointer. Pass your 
max and min variable as reference via function parameter.  
The prototype of this function is defined by:     
    void findMaxMin(int *arr, int *max,   int *min)
*/
#include <iostream>

using namespace std;

void findMaxMin(int *arr, int *max, int *min) {
    *max = arr[0];
    *min = arr[0];

    for (int i = 1; i < 7; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    int arr[7];

    for (int &x : arr) {
        cout << "Enter integer: ";
        cin >> x;
    }

    int maxValue, minValue;

    findMaxMin(arr, &maxValue, &minValue);

    cout << "--- Results ---" << endl;
    cout << "Maximum: " << maxValue << endl;
    cout << "Minimum: " << minValue << endl;

    return 0;
}