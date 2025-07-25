#include "iostream"
#include <string>

/* Returns a simple greeting when invoked */
std::string greet(std::string name) { return "Hello, world"; }

// entry point of our program
int main() {

  // uses the cout object from the i/o stream library
  // to dispay a message on the command line
  std::cout << "Hello, World!";

  int age = 0;
  std::string name;

  std::cout << "\nEnter your age: ";
  // reads the user input from the command line
  // and stores it in the variable 'age'
  std::cin >> age;

  std::cout << "\nWhat\'s your name? ";
  std::cin >> name;

  // greets the user using the greet function to display
  // their name and age
  greet(name);

  return 0; // zero indicates a successful execution
}
