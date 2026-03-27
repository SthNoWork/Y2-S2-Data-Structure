/*
Write a function in C++ program to exchange two numbers.
These two variables are passed through parameters of the function using pointer.   
    void exchange(float *a, float *b)
*/
#include <iostream>

using namespace std;

void exchange(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    float a = 6, b = 9;
    exchange (&a, &b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
