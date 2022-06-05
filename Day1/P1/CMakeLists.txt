file(GLOB DAY1_P1_SRC "src/*.cpp" )
include_directories(.)
add_library(DAY1_P1 STATIC ${DAY1_P1_SRC})
set_property(TARGET DAY1_P1 PROPERTY POSITION_INDEPENDENT_CODE ON)

add_executable(DAY1_P1_EXEC "main.cpp")
target_link_libraries(DAY1_P1_EXEC PRIVATE DAY1_P1)

