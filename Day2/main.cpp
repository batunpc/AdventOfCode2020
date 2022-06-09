#include <iostream>

int read_file(const char *fname) {
  char ch;
  int noc = 0;
  FILE *fp = fopen(fname, "r");
  while (true) {
    ch = fgetc(fp);
    if (ch == EOF)
      break;
    std::cout << " " << ch << std::endl;
    noc++;
  }

  fclose(fp);
  return noc;
}
int main(int argc, char **argv) {
  std::cout << "num of characters: " << read_file("input.txt") << std::endl;
}
