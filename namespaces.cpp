// this is about learning how to use namespace in c++
//
// namespaces are used to organize code into logical groups and to prevent naeme
// collisions
//
// it has its flaws, but it is a good way to organize code

#include <iostream> // note: the angular brackets checks directly in the standard library
// the double quotes checks in the current directory first, before the standard
// libary #include "iostream" checks locally first, before the standard library

using namespace std; // here we, tell the compiler to assume we are using the
                     // standard library namespace

int main() {
  cout << "Hello world, let's breath some C++";
  return 0;
}
