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
    // std::cout << "\n";
    numOfLines++;
  }
  return numOfLines;
  fclose(fp);
  exit(EXIT_SUCCESS);
}

void my_class::splitLines(char *lines) {

  char *rangeSeg = strtok(lines, " ");
  char *charSeg = strtok(NULL, " :");
  char *password = strtok(NULL, " ");
  // char *rangeMin = strtok(piece, "-");
  // char *rangeMax = strtok(NULL, "-");
  //  std::cout << std::stoi(rangeMin) << " " << std::stoi(rangeMax);
  while (rangeSeg != NULL) {
    std::cout << rangeSeg << std::endl;
    while (charSeg != NULL) {
      std::cout << charSeg << std::endl;
      while (password != NULL) {
        std::cout << password << std::endl;
        break;
      }
      break;
    }
    break;
    // rangeSeg = strtok(NULL, "-");
    // charSeg = strtok(NULL, " ");
    //  std::cout << piece << std::endl;
    /* std::cout << rangeSeg << std::endl;
    piece = strtok(NULL, " :"); */
  }
}
