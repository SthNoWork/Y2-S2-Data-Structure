/*
1. Write a recursive function to find summation of all odd numbers from 1 to n,
   where n is the input number from user.
*/
#include <iostream>

using namespace std;

int sumOdd(int num) {
    if (num <= 0) return 0;
    if (num % 2 == 1) return num + sumOdd(num - 1);
    return sumOdd(num - 1);
}
int main() {
    int n = 10;
    cout << "Sum odd from 1 to " << n << " is: "<< sumOdd(n) << endl;
    return 0;
}
