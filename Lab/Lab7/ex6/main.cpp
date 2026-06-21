#include "ex6.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
  string input;
  cout << "Enter String: ";
  getline(cin, input);

  if (areDelimitersBalanced(input)) {
    cout << "Balanced!" << endl;
  } else {
    cout << "Not balanced!" << endl;
  }

  return 0;
}
