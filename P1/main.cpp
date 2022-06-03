#include <iostream>
int countLines(const char* fname, char* line[], int max);

int main(int argc, char* argv[]) {
    char* lines[256] = {0};
    int numLines = countLines("input.txt", lines, 1000);
    std::cout << numLines << std::endl;
    unsigned int values[2000];
    for (int i = 0; i < numLines; i++) {
        values[i] = atoi(lines[i]);
    }
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
