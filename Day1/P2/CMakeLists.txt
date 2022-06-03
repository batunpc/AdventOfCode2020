file(GLOB DAY2_SRC "src/*.cpp" )
include_directories(.)
add_library(P2 STATIC ${DAY2_SRC})
set_property(TARGET P2 PROPERTY POSITION_INDEPENDENT_CODE ON)

add_executable(DAY2_EXEC "main.cpp")
target_link_libraries(DAY2_EXEC PRIVATE P2)

