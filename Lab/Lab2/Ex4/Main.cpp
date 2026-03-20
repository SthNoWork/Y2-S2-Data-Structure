/*
4. Write a recursive function that finds and returns the minimum element in an array,
   where the array and its size are given as parameters. 
    int findMin(int a[ ], int n)
*/
#include <iostream>

using namespace std;

int findMin(int a[], int n) {
    if (n == 1) return a[0];
    int prev = findMin(a, n - 1);
    return (a[n - 1] < prev) ? a[n - 1] : prev;
}

int main() {
    int arr[] = {3, 2, 9, 4, 5};
    cout << "Min: " << findMin(arr, 5) << endl;
    return 0;
}