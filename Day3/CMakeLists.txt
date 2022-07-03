file(GLOB DAY3_SRC "src/*.cpp" )
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")
add_library(DAY3 STATIC ${DAY3_SRC})
set_property(TARGET DAY3 PROPERTY POSITION_INDEPENDENT_CODE ON)

add_executable(DAY3_EXEC "main.cpp")
target_link_libraries(DAY3_EXEC PRIVATE DAY3)
