/*
Write a C++ program to create three integer numbers n1, n2 and n3.
Assign values of 7, 3, 15 to n1, n2 and n3, respectively.
Next create three pointer variables p1, p2 and p3,
where p1 points to n1, p2 points to n2 and p3 points to n3.  
    a. Display the address and value of n1, n2, and n3 using the pointer variables p1, p2 and p3.  
    b. Update the value of n3 using p3. The value of n3 now should be the sum of n1 and n2.
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n1 = 7, n2 = 3, n3 = 15;
    int *p1 = &n1, *p2 = &n2, *p3 = &n3;

    // a. Display address and value
    printf("%-10s %-20s %-10s\n", "Variable", "Address", "Value");
    printf("%-10s %-20p %-10d\n", "n1", p1, *p1);
    printf("%-10s %-20p %-10d\n", "n2", p2, *p2);
    printf("%-10s %-20p %-10d\n", "n3", p3, *p3);

    // b. Update n3 = n1 + n2 using pointers
    *p3 = *p1 + *p2;
    cout << "n3 = " << *p3 << endl;
    
    return 0;
}