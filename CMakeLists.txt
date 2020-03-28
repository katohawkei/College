cmake_minimum_required(VERSION 3.17.0)

# VERSION GCC_COMPILER 9.3.0

project(College VERSION 2.0)

include_directories(include)

add_executable(1 "./src/term2/l10/1.c")
add_executable(2 "./src/term2/l10/2.c")
add_executable(3 "./src/term2/l10/3.c")
add_executable(4 "./src/term2/l10/4.c")

add_subdirectory(lib)

target_link_libraries(1 array)
target_link_libraries(2 array)
target_link_libraries(3 array)
target_link_libraries(4 array)