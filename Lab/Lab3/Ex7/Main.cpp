#include <iostream>
using namespace std;

void sum1(double *sum, int n) {
    for (int i = 1; i <= n; i++) {
        *sum += 1.0 / (i * i);
    }
}

int main() {
    double result = 0;
    sum1(&result, 5);
    cout << result << endl;
    return 0;
}