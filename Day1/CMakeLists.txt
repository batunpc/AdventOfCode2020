file(GLOB DAY1_SRC "src/*.cpp" )
include_directories(.)
add_library(DAY1 STATIC ${DAY1_SRC})
set_property(TARGET DAY1 PROPERTY POSITION_INDEPENDENT_CODE ON)

add_executable(DAY1_EXEC "main.cpp")
target_link_libraries(DAY1_EXEC PRIVATE DAY1)


configure_file(
  input.txt 
  ${CMAKE_CURRENT_BINARY_DIR} 
)
