/*
Write a C++ program to find the summation of numbers from 1 to n except number 10 and 30,
where n is a number input by a user and n should be greater than 50.
*/

#include "../../utils/input.cpp"
#include <iostream>

using namespace std;

int main() {
    int n;

    // keep asking until n is greater than 50
    while (true) {
        n = getInteger("Enter a number greater than 50: ");
        if (n > 50) break;
        cout << "Invalid input. Please enter a number greater than 50." << endl;
    }

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i == 10 || i == 30) continue; // skip 10 and 30
        sum += i;
    }

    cout << "Summation from 1 to " << n << " (except 10 and 30) = " << sum << endl;

    return 0;
}