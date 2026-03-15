/*
Write a C++ program to compute tax salary of a person. The program asks for name, gender and salary
of a person and tell him/her how much tax he/she is required to pay. The tax is computed based on
the rules below:
▪ For males
  • Salary more than 1000 USD, pay tax 9.5%
  • Salary 500 – 1000 USD, pay tax 7%
  • Salary 300 – 500 USD, pay tax 5%
  • Salary less than 300, no need to pay tax
▪ For females
  • Salary more than 1000 USD, pay tax 8%
  • Salary 500 – 1000 USD, pay tax 6.5%
  • Salary 300 – 500 USD, pay tax 3.5%
  • Salary less than 300, no need to pay tax
*/

#include "../../utils/input.cpp"
#include <iostream>

using namespace std;

int main() {
    string name = getString("Enter name: ");
    char gender = getGender("Enter gender (M/F): ");
    double salary = getDouble("Enter salary: ");

    double taxRate = 0;

    if (toupper(gender) == 'M') {
        if (salary > 1000) taxRate = 0.095;
        else if (salary >= 500) taxRate = 0.07;
        else if (salary >= 300) taxRate = 0.05;

    } else {
        if (salary > 1000) taxRate = 0.08;
        else if (salary >= 500) taxRate = 0.065;
        else if (salary >= 300) taxRate = 0.035;
    }

    double tax = salary * taxRate;
    cout << endl;
    cout << "Name: " << name << endl;
    cout << "Salary: $" << salary << endl;

    if (tax == 0) {
        cout << "No tax required." << endl;
    } else {
        cout << "Tax rate: " << (taxRate * 100) << "%" << endl;
        cout << "Tax to pay: $" << tax << endl;
    }

    return 0;
}