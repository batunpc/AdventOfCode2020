#include "include/day2.hpp"
#include <cstring>
#include <iostream>
#define FILE_NAME "input2.txt"

using namespace DAY2;

int my_class::solve() {
  int validPasses = 0;
  FILE *fp = fopen(FILE_NAME, "r");
  if (fp == NULL)
    exit(EXIT_FAILURE);
  while ((read = getline(&line, &len, fp)) != -1) {
    char *rangeSeg = strtok(line, " ");
    char *charSeg = strtok(NULL, " :");
    char *password = strtok(NULL, " ");

    while (rangeSeg != NULL) {
      char *rangeMin = strtok(line, "-");
      char *rangeMax = strtok(NULL, "-");
      while (charSeg != NULL) {
        while (password != NULL) {
          // part 1
          /*       if (std::stoi(rangeMin) <= charCount(charSeg, password) &&
                    charCount(charSeg, password) <= std::stoi(rangeMax)) {
                  validPasses += 1;
                } */
          if (*charSeg == password[std::stoi(rangeMin) - 1] &&
              *charSeg != password[std::stoi(rangeMax) - 1]) {
            validPasses++;
          }
          if (*charSeg != password[std::stoi(rangeMin) - 1] &&
              *charSeg == password[std::stoi(rangeMax) - 1]) {
            validPasses++;
          }
          break;
        }
        break;
      }
      break;
    }
  }
  return validPasses;

  fclose(fp);
  exit(EXIT_SUCCESS);
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
