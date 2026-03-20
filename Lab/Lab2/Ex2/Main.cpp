/*
2. C++ program that can perform various mathematic operations below.
   Solve each operation using recursive operation. 
    a. A power function to calculate mn. It is m multiply m for n times (m*m*...*m)  
        int  power(int m,  int n) 
    b. A function to calculate sum of square of first n integer 12+22+...+n2. 
        int  sumSquare(int n) 
    c. Sum the digits of a number. Ex: 123 = 1+2+3 = 6  
        int  sumDigit(int  n)
*/
#include <iostream>

using namespace std;

int power(int m, int n) {
    if (n == 0) return 1;
    return m * power(m, n - 1);
}

int sumSquare(int n) {
    if (n <= 0) return 0;
    return (n * n) + sumSquare(n - 1);
}

int sumDigit(int n) {
    if (n <= 0) return 0;
    return n + sumDigit(n - 1);
}

int main() {
    cout << "a: " << power(2, 3) << endl;
    cout << "b: " << sumSquare(3) << endl;
    cout << "c: " << sumDigit(3) << endl;
    return 0;
}
