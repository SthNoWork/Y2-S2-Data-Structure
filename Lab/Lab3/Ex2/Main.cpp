/*
2. Write a Write a C++ program to get a number, say n, from a user. Then modify the value of n to n+7 
using a pointer variable.  
Remark: You are not allowed to use n=n+7. Use pointer operation instead.
*/
#include <iostream>

using namespace std;

int main() {
    int input;
    cout << "Enter Integer: ";
    cin >> input;

    int *pointer = &input;
    *pointer += 7;

    cout << "Result: " << input << endl;
    
    return 0;
}
