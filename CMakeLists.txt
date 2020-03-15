cmake_minimum_required(VERSION 3.17.0)

project(College VERSION 2.0)

include_directories(include)

# add_executable(1 src/term2/l9/1.c)
add_executable(2 src/term2/l9/2.c)
add_executable(3 src/term2/l9/3.c) 
add_executable(4 src/term2/l9/4.c)

add_subdirectory(lib)

# target_link_libraries(1 matrix)
target_link_libraries(2 matrix)
target_link_libraries(3 matrix) 
target_link_libraries(4 matrix array)