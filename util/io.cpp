#include "io.h"
#include "check.h"
#include <fstream>
#include <string>
#include <vector>

namespace aoc2020_util {
std::string ReadFile(const char *filename) {
  std::ifstream stream(filename);
  CHECK(stream);

  std::string buffer;
  stream.seekg(0, std::ios::end);
  buffer.resize(stream.tellg());
  stream.seekg(0, std::ios::beg);
  stream.read(&buffer[0], buffer.size());
  stream.close();

  return buffer;
}

} // namespace aoc2020_util
