#include "day3.hpp"
#include <fstream>
#include <iostream>
#define FNAME "input3.txt"
using namespace DAY3;

int main(void) {
  std::fstream newfile;

  newfile.open(FNAME, std::ios::in);
  if (newfile.is_open()) { // checking whether the file is open
    std::string tp;
    while (getline(newfile, tp)) {
      std::cout << tp << "\n";
    }
    newfile.close(); // close the file object.
  }
}
