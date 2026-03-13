/*
Write a C++ program to ask information from a  student such as name,  gender,
major, age then display the greeting message on screen.  Say he/she is eligible
to vote the election if the age is at least 18. Hi, Mr. name! your age is age
year old and you learn major!           : for male (M) Hi, Mrs. name!, you are
age year old and you are majoring in major  : for female (F)

For either Male or Female:
You can vote.   If age is at least 18.
You can not vote  Otherwise.
*/
#include "../../utils/input.cpp"
#include <iostream>

using namespace std;
struct Student {
    string name;
    char gender;
    string major;
    int age;
};

int main() {
    Student student;
    student.name = getString("Enter name: ");
    student.gender = getGender("Enter gender (M/F): ");
    student.major = getString("Enter major: ");
    student.age = getInteger("Enter age: ");

    cout << "Hi, " << ((student.gender == 'M') ? "Mr" : "Mrs") << ". "
         << student.name << "! your age is " << student.age
         << " year old and you learn " << student.major << "!" << endl;
    return 0;
}
