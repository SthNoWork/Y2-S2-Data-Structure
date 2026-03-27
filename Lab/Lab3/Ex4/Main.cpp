/*
Write a function to solve this quadratic equation ax2 + bx + c = 0, where a is not equal to 0.
Store values of x1, x2 and delta using the parameters given to the function.
The prototype of this function is defined by:   
    void solveEquation(int a, int b, int c, float *x1, float *x2, float *delta)
*/
#include <cmath>
#include <iostream>

using namespace std;

void solveEquation(int a, int b, int c, float *x1, float *x2, float *delta) {
    *delta = pow(b, 2) - (4 * a * c);

    if (*delta >= 0) {
        *x1 = (-b + sqrt(*delta)) / (2 * a);
        *x2 = (-b - sqrt(*delta)) / (2 * a);
    }
}

int main() {
    int a, b, c;
    cout << "Enter a, b, and c: " << endl;
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "a can't be 0." << endl;
        return 0;
    }

    float x1 = 0, x2 = 0, delta = 0;

    solveEquation(a, b, c, &x1, &x2, &delta);

    if (delta < 0) {
        cout << "Imaginary." << endl;
    } else if (delta == 0) {
        cout << "x1 =" << x1 << endl;
    } else {
        cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
    }

    return 0;
}