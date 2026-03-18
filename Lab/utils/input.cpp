#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;

template <typename T>
bool tryParseExact(const string& line, T& out) {
    stringstream stream(line); // treat the string as a stream to read from

    stream >> out; // try to read the value
    if (stream.fail()) {
        return false;
    }

    // Ignore trailing spaces, then require end-of-input.
    stream >> ws;
    return stream.eof();
}

int getInteger(string comment) {
    string line;
    int x;

    while (true) {
        cout << comment;
        getline(cin, line);

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
        getline(cin, line);

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
        getline(cin, line);

        if (tryParseExact(line, x)) {
            return x;
        }

        cout << "Invalid input. Please enter a double number." << endl;
    }
}

char getChar(string comment) {
    string line;

    while (true) {
        cout << comment;
        getline(cin, line);

        if (line.size() == 1) {
            return line[0];
        }

        cout << "Invalid input. Please enter exactly one character." << endl;
    }
}

string getString(string comment) {
    string line;

    while (true) {
        cout << comment;
        getline(cin, line);

        if (!line.empty()) {
            return line;
        }

        cout << "Invalid input. Please enter a non-empty string." << endl;
    }
}

char getGender(string comment) {
    while (true) {
        char gender = toupper(getChar(comment));
        if (gender == 'M' || gender == 'F') {
            return gender;
        }

        cout << "Invalid input. Please enter M or F." << endl;
    }
}

int getOption(string comment, int maxOption) {
    if (maxOption < 0) {
        return 0;
    }

    while (true) {
        int option = getInteger(comment);
        if (option >= 0 && option <= maxOption) {
            return option;
        }

        cout << "Invalid option. Please enter a number from 0 to "
             << maxOption << "." << endl;
    }
}