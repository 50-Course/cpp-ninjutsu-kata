// when working with standard inputs, <std::cin> isn't the best way
// to read values from the input stream. Because, it can read values with
// spaces in between them. Thefore, we could always use the `get_line` from
// std::get_line() which takes an input stream in this case std::cin, and the
// buffer to hold the value
//
// it continues reading until a new line has been achieved then return the
// buffer

#include <iostream>
#include <string>

using namespace std;

int main() {

  // for this kata, we just want to read from the user and return it
  string userName;
  string occupation;
  int age;

  // approach :
  //
  // we would first test how cin works then see how we could cange it to use
  // get_line

  cout << "What's your name? " << endl;
  getline(cin, userName);
  cout << "Occupation: " << endl;
  getline(cin, occupation);

  cout << "Hi, " << userName << ". Welcome aboard as a " << occupation << endl;
  return 0;
}
