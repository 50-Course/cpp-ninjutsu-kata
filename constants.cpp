// this is a simple program to demonstrate the use of
// immutable values in c++
//
// they appears as constants, which are values that cannot be changed
// for the lifetime of the program

#include <iostream>

using namespace std;

// main entrypoint of our program
int main() {
  const int MAX_AGE = 60;
  const int MIN_AGE = 18;

  string name; // stores the name of the user - defaults to ""
  int age;     // stores the age of the user - defaults to null

  // our simple program will ask the user for their name and age
  // if they are working class it would enable them to vote
  // otherwise, it would revoke the user
  cout << "Hello, welcome to our simple voting system! please follow the "
          "instructions below."
       << endl;

  cout << "Please enter your name: " << endl;
  cin >> name;
  cout << "Enter your age: " << endl;
  cin >> age;

  if (MIN_AGE <= age && age <= MAX_AGE) {
    // they are eligible to vote
    cout << "Hello " << name << ", you are eligible to vote!" << endl;
  } else {
    // revoke the user
    cout << "Sorry, you are not eligible to vote, " << name
         << ". You must be between " << MIN_AGE << " and " << MAX_AGE
         << " years old." << endl;
    return -1; // non-zero values indiate an error in the program
  }

  return 0;
}
