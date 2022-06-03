/* --- Day 1: Report Repair

After saving Christmas five years in a row, you've decided to take a vacation at a nice resort on a tropical island. Surely, Christmas will go on without you.

The tropical island has its own currency and is entirely cash-only. The gold coins used there have a little picture of a starfish; the locals just call them stars. None of the currency exchanges seem to have heard of them, but somehow, you'll need to find fifty of these coins by the time you arrive so you can pay the deposit on your room.

To save your vacation, you need to get all fifty stars by December 25th.

Collect stars by solving puzzles. Two puzzles will be made available on each day in the Advent calendar; the second puzzle is unlocked when you complete the first. Each puzzle grants one star. Good luck!

Before you leave, the Elves in accounting just need you to fix your expense report (your puzzle input); apparently, something isn't quite adding up.

Specifically, they need you to find the two entries that sum to 2020 and then multiply those two numbers together.

For example, suppose your expense report contained the following:

1721
979
366
299
675
1456

In this list, the two entries that sum to 2020 are 1721 and 299. Multiplying them together produces 1721 * 299 = 514579, so the correct answer is 514579.

Of course, your expense report is much larger. Find the two entries that sum to 2020; what do you get if you multiply them together?

Your puzzle answer was 1015476. */

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
