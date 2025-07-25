#include "iostream"
#include <string>

/* Returns a simple greeting when invoked */
std::string greet() { return "Hello"; }

// entry point of our program
int main() {

  // uses the cout object from the i/o stream library
  // to dispay a message on the command line
  std::cout << "Hello, World!";

  return 0; // zero indicates a successful execution
}
