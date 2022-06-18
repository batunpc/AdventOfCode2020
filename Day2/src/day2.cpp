#include "include/day2.hpp"
#include <cstring>
#include <iostream>

using namespace DAY2;

int my_class::readLines(const char *file_name) {
  FILE *fp = fopen(file_name, "r");
  if (fp == NULL)
    exit(EXIT_FAILURE);

  while ((read = getline(&line, &len, fp)) != -1) {
    solve(line);
    // std::cout << "\n";
    numOfLines++;
  }
  return numOfLines;
  fclose(fp);
  exit(EXIT_SUCCESS);
}

void my_class::solve(char *lines) {
  char *rangeSeg = strtok(lines, " ");
  char *charSeg = strtok(NULL, " :");
  char *password = strtok(NULL, " ");

  char *rangeMin = strtok(lines, "-");
  char *rangeMax = strtok(NULL, "-");
  while (rangeSeg != NULL) {

    std::cout << std::stoi(rangeMin) << " " << std::stoi(rangeMax) << std::endl;

    while (charSeg != NULL) {
      std::cout << charSeg << std::endl;
      while (password != NULL) {
        std::cout << password << std::endl;
        break;
      }
      break;
    }
    break;
  }
}

int my_class::charCount(const char *target, const char *line) {
  int count = 0;
  for (size_t i = 0; i < strlen(line); i++) {
    if (line[i] == *target) {
      count += 1;
    }
  }
  return count++;
}
