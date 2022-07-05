#ifndef UTIL_CHECK_H_
#define UTIL_CHECK_H_

#include <cstdlib>
#include <iostream>

#define CHECK(condition)                                                       \
  do {                                                                         \
    if (!(condition)) {                                                        \
      std::cerr << __FILE__ << ":" << __LINE__                                 \
                << ": CHECK failed: " #condition << "\n";                      \
      std::exit(1);                                                            \
    }                                                                          \
  } while (false)

#define CHECK_OK(status)                                                       \
  do {                                                                         \
    const absl::Status _actual_status = ::check_detail::AsStatus(status);      \
    if (!_actual_status.ok()) {                                                \
      std::cerr << __FILE__ << ":" << __LINE__                                 \
                << ": CHECK_OK failed: " << _actual_status << "\n";            \
      std::exit(1);                                                            \
    }                                                                          \
  } while (false)

#define CHECK_FAIL()                                                           \
  std::cerr << __FILE__ << ":" << __LINE__ << ": CHECK_FAIL\n";                \
  std::exit(1)

#endif // UTIL_CHECK_H_
