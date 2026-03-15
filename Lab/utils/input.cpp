#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;

template <typename T>
bool tryParseExact(const string& line, T& out) {
    stringstream stream(line); // treat the string as a stream to read from
    char leftover;             // used to check if there are extra characters

    bool parsedSuccessfully = (stream >> out);        // try to read the value
    bool noLeftover = !(stream >> leftover);          // make sure nothing is left

    return parsedSuccessfully && noLeftover;
}

int getInteger (string comment) {
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
    string line;

    while (true) {
        cout << comment;
        getline(cin, line);

        if (line.size() == 1) {
            char c = static_cast<char>(toupper(static_cast<unsigned char>(line[0])));
            if (c == 'M' || c == 'F') {
                return c;
            }
        }

        cout << "Invalid input. Please enter M or F." << endl;
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