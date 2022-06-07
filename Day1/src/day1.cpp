// day1.cpp
#include "include/day1.h"

#include <iostream>

using namespace DAY1;

unsigned int my_class::challenge(unsigned int data[], unsigned int numData, unsigned int goal) {
    int product;
    for (unsigned int i = 0; i < numData; i++) {
        for (unsigned int j = 0; j < numData - 1; j++) {
            if (data[i] + data[j] == goal) {
                product = data[j] * data[i];
            }
        }
    }
    return product;
}
unsigned int my_class::challenge2nd(unsigned int data[], unsigned int numData, unsigned int goal) {
    int product;
    for (unsigned int i = 0; i < numData; i++) {
        for (unsigned int j = 0; j < numData - 1; j++) {
            for (unsigned int k = 0; k < numData - 1; k++) {
                if (data[i] + data[j] + data[k] == goal) {
                    product = data[j] * data[i] * data[k];
                }
            }
        }
    }
    return product;
}

int my_class::countLines(const char* fname, char* line[], int max) {
    FILE* fp = fopen(fname, "r");
    int rc = 0;
    if (fp == NULL) {
        std::cout << "unable to open " << fname << std::endl;
        return 0;
    } else {
        size_t len;
        while (rc < max && getline(&line[rc], &len, fp) != -1) {
            int lineLength = strlen(line[rc]);
            line[rc][lineLength - 1] = '\0';
            rc++;
        }
        fclose(fp);
    }
    return rc;
}
