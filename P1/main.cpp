#include <iostream>
int countLines(const char* fname, char* line[], int max);
unsigned int challenge(unsigned int data[], unsigned int numData, unsigned int goal);

int main(int argc, char* argv[]) {
    char* lines[256] = {0};
    int numLines = countLines("input.txt", lines, 1000);
    unsigned int values[2000];
    for (int i = 0; i < numLines; i++) {
        values[i] = atoi(lines[i]);
    }
    std::cout << challenge(values, numLines, 2020) << std::endl;
}

unsigned int challenge(unsigned int data[], unsigned int numData, unsigned int goal) {
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

int countLines(const char* fname, char* line[], int max) {
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
