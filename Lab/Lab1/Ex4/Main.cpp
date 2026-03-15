/*
Create a C++ program that can play a game Rock-Paper-Scissor. The game plays between the
user against the computer.
*/

#include "../../utils/input.cpp"
#include <iostream>
#include <random>

using namespace std;

int determineWin(int user, int computer) {
    if (user == computer) return 0;

    if ((user == 1 && computer == 2) ||
        (user == 2 && computer == 3) ||
        (user == 3 && computer == 1))
        return 1;

    return -1;
}

int main() {

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 3);

    int option;
    int computerChoice;
    int result;

    while (true) {
        cout << "=== Rock-Paper-Scissor ===" << endl;
        cout << "1. Paper" << endl;
        cout << "2. Rock" << endl;
        cout << "3. Scissor" << endl;
        cout << "0. Exit" << endl;

        option = getOption("Option: ", 3);
        if (option == 0) break;

        computerChoice = dist(gen);

        result = determineWin(option, computerChoice);

        if (result == 0) cout << "Draw\n";
        else if (result == 1) cout << "You win!\n";
        else cout << "You lose!\n";

        cout << endl;
    }

    return 0;
}