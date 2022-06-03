file(GLOB DAY1_SRC "src/*.cpp" )
include_directories(.)
add_library(P1 STATIC ${DAY1_SRC})
set_property(TARGET P1 PROPERTY POSITION_INDEPENDENT_CODE ON)

add_executable(DAY1_EXEC "main.cpp")
target_link_libraries(DAY1_EXEC PRIVATE P1)

