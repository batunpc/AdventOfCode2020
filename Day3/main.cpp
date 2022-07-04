#include "day3.hpp"
<<<<<<< HEAD
=======
#include <fstream>
>>>>>>> be9028774f112a7613d040b949313b5173cf2b57
#include <iostream>
#define FNAME "input3.txt"
using namespace DAY3;

int main(void) {
  std::fstream newfile;

<<<<<<< HEAD
  std::cout << "Hello world from d3" << std::endl;

  return 0;
=======
  newfile.open(FNAME, std::ios::in);
  if (newfile.is_open()) { // checking whether the file is open
    std::string tp;
    while (getline(newfile, tp)) {
      std::cout << tp << "\n";
    }
    newfile.close(); // close the file object.
  }
>>>>>>> be9028774f112a7613d040b949313b5173cf2b57
}
