#include <string.h>
// day2.hpp
namespace DAY2 {
class my_class {
private:
  int x = 0;
  int y = 0;
  ssize_t read;
  size_t len = 0;
  char *line = NULL;
  int numOfLines = 0;

public:
  int readLines(const char *);
  void splitLines(char *);
};
} // namespace DAY2
