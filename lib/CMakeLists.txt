cmake_minimum_required(VERSION 3.17.0)

project(matrix)

include_directories(include)

set(MATRIX_LIB matrix.c)
set(SEED_LIB seed.c)

add_library(matrix STATIC ${MATRIX_LIB})
add_library(seed STATIC ${SEED_LIB})