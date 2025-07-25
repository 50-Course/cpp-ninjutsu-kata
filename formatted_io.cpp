// this is the practice of basic formatted output
//
//
// We want to do something like this:
//
// print with set width = 10
// Ints    Floats   Doubles
// 45      45.323   45.5468
// 54      54.323   54.5468
// 63      63.323   63.5468
//
// print with tabs
// Ints	Floats	Doubles
// 63       63.323	63.5468
//
//
// In C++ we use the "iomanip" library to format output. We can also use the
// escape sequence "\t" to add tabs in the output.
// \n is used to add a new line in the output.
// // We can use "setw" to set the width of the output.

#include "iostream"
#include <iomanip>

int main() {
  int a = 10;
  int b = 5;
  int c = 2;

  int aa = a + b;
  int bb = a - b;
  int cc = a * b;

  int aaa = aa + 9;
  int bbb = bb + 9;
  int ccc = cc + 9;

  // we want to print the variables in 3-columns
  // Ints, Floats, Doubles
  // std::cout << "\nInts" << std::setw(15) << "Floats" << std::setw(15)
  //           << "Doubles" << "\n ";
  // std::cout << a << "\t" << b << "\t" << c << std::endl;
  // std::cout << aa << "\t" << bb << "\t" << cc << std::endl;
  // std::cout << aaa << "\t" << bbb << "\t" << ccc << std::endl;

  std::cout << "\nInts";
  std::cout << std::setw(10) << "Floats" << std::setw(10) << "Doubles" << "\n";

  // print a, b, c
  std::cout << a;
  std::cout << std::setw(10) << b;
  std::cout << std::setw(10) << c << "\n";

  // print aa, bb, cc
  std::cout << aa;
  std::cout << std::setw(10) << bb;
  std::cout << std::setw(10) << cc << "\n";

  // print aaa, bbb, ccc
  std::cout << aaa;
  std::cout << std::setw(10) << bbb;
  std::cout << std::setw(10) << ccc << "\n";
  return 0;
}
