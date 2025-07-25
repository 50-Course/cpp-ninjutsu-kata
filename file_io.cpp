//  Using the File API or FIleIO in C++
//
//  In C++, there are several streams for reading and writing operations
//
//  At the very core, there is the `iobase`, abstract interface
// then there are the iostream for working with streams of data (iostream for
// input-output combo), ostream for (output), istream (for input), sstream (for
// string-based streams), fstream (for file based streams)
//
// when working with buffers (which are just "controlled" stream inputs which
// allows us to explicit, to control how much of data we can hold or process at
// any point.
//
// filebuf came from `fstream`,
// stringbuf came from `sstream`
//
// sreambuf is the abstract class for working with buffers. and its implemented
// under `istream` (which means input stream)
//
// the `iostream` header is where concrete implementations for commandline are
// defined: cin (command line input), cout (command line output), cerr (standard
// error), clog (standard logger)
//
// So back to file stream. We can work with <fstream> which is for writing &
// reading, or just ifstream (for reading files only) or <ofstream> for writing
// to files only.
//
// There are certeain modes when working with files:
//
// Modes:
//
// All modes are located within the `std::ios` module in the standard lib
//
// the modes:
//
// for reading: std::ios::in
// for writing (overwrites the file): std::ios::out
//
// for appending to a file: std::ios::ap
// for open for writing and move file pointer to the end: std::ios::ate (which
// means at-the-end)
//
// for opening binary files: std::ios::binary

#include <fstream>
#include <iostream>
#include <ostream>
#include <string>

int main() {
  // we need to work with lines
  std::string line;

  // we would create a new file called output.txt, and read from it
  //
  // the approach:
  //
  // - create a new output filestream object, from which we would write some
  // values into
  // - when we are done writing we would close it up
  //
  // - then we would create input file stream object and read line by line, and
  // when its done we would close it.

  std::string message =
      "This must be exciting, hello world its my first message!";
  std::ofstream f("output.txt", std::ios::out); // our file descriptor

  // only write to file if its open, don't reopen an opened file.
  // otherwise return an error
  if (f.is_open()) {
    f << message << std::endl;
    f.close(); // close the file
  } else {
    // perhaps, it couldn't open it. return an error
    std::cerr << "An error occurred when opening file for write-through!"
              << std::endl;
  }

  // when its done reoopen the file for reaading, read stream line by line
  // and when we are at the end of the file, close the stream
  std::ifstream fd("output.txt", std::ios::in);

  // while the file is open, read into the buffer

  if (fd.is_open()) {

    // read an entire an entire line as store it into variable line (line here
    // is a buffer)
    while (std::getline(fd, line)) {
      // print from that buffer onto the standard output
      std::cout << line << std::endl;

      // if we hve reached the end of the line, close the file
      if (fd.eof()) {
        fd.close();
      }
    }
  }
  return 0;
}
