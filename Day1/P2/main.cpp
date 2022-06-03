/*
--- Part Two ---

The Elves in accounting are thankful for your help; one of them even offers you a starfish coin they had left over from a past vacation. They offer you a second one if you can find three numbers in your expense report that meet the same criteria.

Using the above example again, the three entries that sum to 2020 are 979, 366, and 675. Multiplying them together produces the answer, 241861950.

In your expense report, what is the product of the three entries that sum to 2020?

Your puzzle answer was 200878544.

Both parts of this puzzle are complete! They provide two gold stars: **
 */
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
            for (unsigned int k = 0; k < numData - 2; k++) {
                if (data[i] + data[j] + data[k] == goal) {
                    product = data[j] * data[i] * data[k];
                }
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
