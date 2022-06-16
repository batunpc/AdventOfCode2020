#include "include/day2.hpp"
#include <cstring>
#include <iostream>
#define FILE_NAME "input2.txt"

using namespace DAY2;
int my_class::readLines() {
  FILE *fp = fopen(FILE_NAME, "r");
  if (fp == NULL)
    exit(EXIT_FAILURE);
  while ((read = getline(&line, &len, fp)) != -1) {
    std::cout << line;
    numOfLines++;
  }
  return numOfLines;
  if (line)
    delete line;
  exit(EXIT_SUCCESS);
}
