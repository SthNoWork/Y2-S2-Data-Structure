#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;

template <typename T>
bool tryParseExact(const string& line, T& out) {
    stringstream ss(line);
    char extra;
    return (ss >> out) && !(ss >> extra);
}

int getInteger (string comment) {
    string line;
    int x;

    while (true) {
        cout << comment;
        if (!getline(cin, line)) {
            return 0;
        }

        if (tryParseExact(line, x)) {
            return x;
        }

        cout << "Invalid input. Please enter a whole number." << endl;
    }
}

float getFloat(string comment) {
    string line;
    float x;

    while (true) {
        cout << comment;
        if (!getline(cin, line)) {
            return 0.0f;
        }

        if (tryParseExact(line, x)) {
            return x;
        }

        cout << "Invalid input. Please enter a float number." << endl;
    }
}

double getDouble(string comment) {
    string line;
    double x;

    while (true) {
        cout << comment;
        if (!getline(cin, line)) {
            return 0.0;
        }

        if (tryParseExact(line, x)) {
            return x;
        }

        cout << "Invalid input. Please enter a double number." << endl;
    }
}

string getString(string comment) {
    string line;

    while (true) {
        cout << comment;
        if (!getline(cin, line)) {
            return "";
        }

        if (!line.empty()) {
            return line;
        }

        cout << "Invalid input. Please enter a non-empty string." << endl;
    }
}

char getGender(string comment) {
    string line;

    while (true) {
        cout << comment;
        if (!getline(cin, line)) {
            return '\0';
        }

        if (line.size() == 1) {
            char c = static_cast<char>(toupper(static_cast<unsigned char>(line[0])));
            if (c == 'M' || c == 'F') {
                return c;
            }
        }

        cout << "Invalid input. Please enter M or F." << endl;
    }
}