cmake_minimum_required(VERSION 3.0.0)
project(aofc2020 VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)
add_compile_options(-ansi -pedantic -Wall -Wextra -Weffc++)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

if(CMAKE_BUILD_TYPE MATCHES "Debug")

  set (CMAKE_CXX_FLAGS_DEBUG 
      "${CMAKE_CXX_FLAGS_DEBUG} 
      -fno-omit-frame-pointer -fsanitize=address -g")

  set (CMAKE_LINKER_FLAGS_DEBUG 
      "${CMAKE_LINKER_FLAGS_DEBUG} 
      -fno-omit-frame-pointer -fsanitize=address -g")

endif()


# Aofc2020 Day 1
#================
add_subdirectory(Day1)
file(COPY Day1/input1.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

# Aofc2020 Day 2
#================
add_subdirectory(Day2)
file(COPY Day2/input2.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

# Aofc2020 Day 3
#================
add_subdirectory(Day3)
file(COPY Day3/input3.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

#####################
# AOFC2020Project
#####################
file(GLOB AOFC2020_SRC "main.cpp")
add_executable(AOFC_SUB ${AOFC2020_SRC})
target_include_directories(AOFC_SUB PUBLIC DAY1/inc DAY2/inc )
target_link_libraries(AOFC_SUB LINK_PUBLIC DAY1 DAY2)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
