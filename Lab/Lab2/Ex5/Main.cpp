/*
5. Write a recursive function that computes and returns the sum of all elements in an array,
   where the array and its size are given as parameters. 
    int findsum(int a[ ], int n)
*/
#include <iostream>

using namespace std;

int findsum(int a[], int n) {
    if (n == 1) return a[0];
    return a[n - 1] + findsum(a, n - 1);
}
int main() {
    int arr[] = {3, 2, 9, 4, 5};
    cout << "Sum: " << findsum(arr, 5) << endl;
    return 0;
}