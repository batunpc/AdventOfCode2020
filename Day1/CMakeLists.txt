file(GLOB DAY1_SRC "src/*.cpp" "${CMAKE_SOURCE_DIR}/util/*.cpp")
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")
include_directories("${CMAKE_SOURCE_DIR}/util")

add_library(DAY1 STATIC ${DAY1_SRC})
set_property(TARGET DAY1 PROPERTY POSITION_INDEPENDENT_CODE ON)

add_executable(DAY1_EXEC "main.cpp")
target_link_libraries(DAY1_EXEC PRIVATE DAY1)
