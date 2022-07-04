#include <string.h>
// day2.hpp
namespace DAY2 {
class my_class {
private:
  ssize_t read;
  size_t len = 0;
  char *line = NULL;
  int numOfLines = 0;

public:
  int charCount(const char *, const char *);
  int solve();
};
} // namespace DAY2
