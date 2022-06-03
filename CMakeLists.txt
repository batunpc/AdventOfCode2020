cmake_minimum_required(VERSION 3.0.0)
project(aofc2020 VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)
add_compile_options(-ansi -pedantic -Wall -Wextra -Weffc++)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# Aofc2020 Day 1
#================
add_subdirectory(P1)
#reading the file
#file(GLOB MY_FILES "*.txt")
#file(COPY ${MY_FILES} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
configure_file(
  ${CMAKE_CURRENT_SOURCE_DIR}/P1/input.txt 
  ${CMAKE_CURRENT_BINARY_DIR} COPYONLY 
)
# Aofc2020 Day 2
#================
add_subdirectory(P2)


#####################
# CMakeMainSubproject
#####################
file(GLOB AOFC2020_SRC "main.cpp")
add_executable(AOFC_SUB ${AOFC2020_SRC})
target_include_directories(AOFC_SUB PUBLIC P1/include P2/include)
target_link_libraries(AOFC_SUB LINK_PUBLIC P1 P2)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
