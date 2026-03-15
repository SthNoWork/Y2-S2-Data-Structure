/*
Write a C++ program to convert a  minute to a time format which consists of hour, minute, and
second (h:m:s). A user is required to input a minute.
▪ Hours = minutes / 60
▪ Remainderminutes = minutes % 60
▪ Seconds = remainderminutes * 60
*/

#include "../../utils/input.cpp"
#include <iostream>

using namespace std;

int main() {
    int minutes = getInteger("Enter minutes: ");

    int hours = minutes / 60;            // get hours
    int remainderMinutes = minutes % 60; // get remaining minutes
    int seconds = remainderMinutes * 60; // convert remaining minutes to seconds

    cout << hours << "h : " << remainderMinutes << "m : " << seconds << "s" << endl;

    return 0;
}