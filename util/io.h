#if !defined(UTIL_IO_H_)
#define UTIL_IO_H_

#include <cstddef>
#include <string>
#include <vector>

namespace aoc2020_util {
// Returns the whole contents of the text file specified by `filename`.
std::string ReadFile(const char *filename);
} // namespace aoc2020_util

#endif // UTIL_IO_H_
