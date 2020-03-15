cmake_minimum_required(VERSION 3.17.0)

project(lib VERSION 2.0)

include_directories(include)

set(MATRIX_LIB matrix.c)
set(ARRAY_LIB array.c)

add_library(matrix STATIC ${MATRIX_LIB})
add_library(array STATIC ${ARRAY_LIB})