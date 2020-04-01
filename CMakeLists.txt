cmake_minimum_required(VERSION 3.17.0)

# VERSION GCC_COMPILER 9.3.0

project(College VERSION 2.0)

include_directories(include)

add_executable(1 "./src/term2/l11/1.c")
add_executable(2 "./src/term2/l11/2.c")
add_executable(3 "./src/term2/l11/3.c")
add_executable(4 "./src/term2/l11/4.c")

add_subdirectory(lib)

