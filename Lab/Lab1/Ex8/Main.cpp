/*
Create 5 functions to:
i)   convert temperature Celsius to Fahrenheit: Fahrenheit = (Celsius * 9.0 / 5.0) + 32
ii)  convert temperature Fahrenheit to Celsius: Celsius = (Fahrenheit – 32) * 5.0 / 9.0
iii) find root of quadratic equation ax2+bx+c=0.
iv)  compute BMI of a person's weight and height and tell whether he/she is
overweight, underweight and other terms according to BMI list:
     - bmi = weight / (height * height)
     - bmi < 18.5, underweight
     - bmi < 25,   normal weight
     - bmi < 30,   overweight
     - else,       obese
v)   sum numbers from 1 to n except those numbers that are divisible by 3, n is a parameter.

Design a menu program to demonstrate these 5 functions.
*/

#include "../../utils/input.cpp"
#include <cmath>
#include <iostream>

using namespace std;

void celsiusToFahrenheit() {
    double celsius = getDouble("Enter Celsius: ");
    double fahrenheit = (celsius * 9.0 / 5.0) + 32;
    cout << celsius << " celsius = " << fahrenheit << " fahrenheit" << endl;
}

void fahrenheitToCelsius() {
    double fahrenheit = getDouble("Enter Fahrenheit: ");
    double celsius = (fahrenheit - 32) * 5.0 / 9.0;
    cout << fahrenheit << " fahrenheit = " << celsius << " celsius" << endl;
}

void quadraticRoots() {
    double a = getDouble("Enter a: ");
    double b = getDouble("Enter b: ");
    double c = getDouble("Enter c: ");

    double discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Two roots: " << root1 << " and " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "One root: " << root << endl;
    } else {
        cout << "No real roots." << endl;
    }
}

void bmiCalculator() {
    double weight = getDouble("Enter weight (kg): ");
    double height = getDouble("Enter height (m): ");

    double bmi = weight / (height * height);

    cout << "BMI: " << bmi << " - ";

    if (bmi < 18.5) cout << "Underweight" << endl;
    else if (bmi < 25) cout << "Normal weight" << endl;
    else if (bmi < 30) cout << "Overweight" << endl;
    else cout << "Obese" << endl;
}

void sumExceptDivisibleBy3() {
    int n = getInteger("Enter n: ");
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) continue;
        sum += i;
    }

    cout << "Sum from 1 to " << n << " (except divisible by 3) = " << sum << endl;
}

int main() {
    while (true) {
        cout << endl;
        cout << "1. Celsius to Fahrenheit" << endl;
        cout << "2. Fahrenheit to Celsius" << endl;
        cout << "3. Quadratic Equation Roots" << endl;
        cout << "4. BMI Calculator" << endl;
        cout << "5. Sum 1 to n (except divisible by 3)" << endl;
        cout << "0. Exit" << endl;

        int option = getOption("Enter option: ", 5);

        if (option == 0) break;
        else if (option == 1) celsiusToFahrenheit();
        else if (option == 2) fahrenheitToCelsius();
        else if (option == 3) quadraticRoots();
        else if (option == 4) bmiCalculator();
        else if (option == 5) sumExceptDivisibleBy3();
    }

    return 0;
}