file(GLOB DAY2_SRC "src/*.cpp" )
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")
add_library(DAY2 STATIC ${DAY2_SRC})
set_property(TARGET DAY2 PROPERTY POSITION_INDEPENDENT_CODE ON)

add_executable(DAY2_EXEC "main.cpp")
target_link_libraries(DAY2_EXEC PRIVATE DAY2)
