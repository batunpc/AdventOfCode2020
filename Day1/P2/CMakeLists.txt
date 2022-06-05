file(GLOB DAY1_P2_SRC "src/*.cpp" )
include_directories(.)
add_library(DAY1_P2 STATIC ${DAY1_P2_SRC})
set_property(TARGET DAY1_P2 PROPERTY POSITION_INDEPENDENT_CODE ON)

add_executable(DAY1_P2_EXEC "main.cpp")
target_link_libraries(DAY1_P2_EXEC PRIVATE DAY1_P2)

