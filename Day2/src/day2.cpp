#include "include/day2.hpp"
#include <cstring>
#include <iostream>
#define FILE_NAME "input2.txt"

using namespace DAY2;
int my_class::readSplitLines() {
  FILE *fp = fopen(FILE_NAME, "r");
  if (fp == NULL)
    exit(EXIT_FAILURE);

  while ((read = getline(&line, &len, fp)) != -1) {
    char *piece = strtok(line, " ");
    while (piece != NULL) {
      std::cout << piece << std::endl;
      piece = strtok(NULL, " ");
    }
    numOfLines++;
  }
  return numOfLines;
  fclose(fp);
  exit(EXIT_SUCCESS);
}
