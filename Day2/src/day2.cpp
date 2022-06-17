#include "include/day2.hpp"
#include <cstring>
#include <iostream>

using namespace DAY2;

int my_class::readLines(const char *file_name) {
  FILE *fp = fopen(file_name, "r");
  if (fp == NULL)
    exit(EXIT_FAILURE);

  while ((read = getline(&line, &len, fp)) != -1) {
    splitLines(line);
    numOfLines++;
  }
  return numOfLines;
  fclose(fp);
  exit(EXIT_SUCCESS);
}

void my_class::splitLines(char *lines) {
  char *piece = strtok(lines, " ");
  while (piece != NULL) {
    std::cout << piece << std::endl;
    piece = strtok(NULL, " ");
  }
}
