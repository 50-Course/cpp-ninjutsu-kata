// in the world of enums, in the shadows of the void code.
// there lived the enumerated, the brave and the bold.
//
// with them, there's peace, with them, there's order,
// with them, there's structure and with them, there's no disorder.
//
// behold, the enums, the guardians of clarity,
//
// in C++, we define them with:

enum MONTHS { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

#include <iostream>

using namespace std;

int main() {

  string currentMonth;

  cout << "Hi! What month is it? " << endl;
  cin >> currentMonth;

  // our simple pogram will check if the month is july
  // and print a message if it is.
  //
  // otherwise it will exist without doing anything

  if (currentMonth == "July" || currentMonth == "JUL") {
    cout << "It's July! Time for summer fun!" << endl;
  } else {
    return 1; // exit the program if it's not July
  }

  // checks if the month

  return 0;
}
