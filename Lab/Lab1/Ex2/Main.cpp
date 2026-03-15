/*
Write a C++ program to check whether an input character is a vowel or a
consonant. Hint: Use ASCII code to test condition. ▪ Uppercase letters from: 65
to 90, lowercase letters from 97 to 122 ▪ Vowel and its ASCII code: a = 97, e =
101, i = 105, o = 111, u = 117
*/

#include "../../utils/input.cpp"
#include <cctype>
#include <iostream>

using namespace std;

int main() {
    char input = getChar("Enter a character: ");

    input = tolower(input);

    bool isVowel = (input == 97 || input == 101 || input == 105 || input == 111 || input == 117);

    if (isVowel) {
        cout << "Vowel." << endl;
    } else {
        cout << "Not a vowel." << endl;
    }

    return 0;
}