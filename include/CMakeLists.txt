cmake_minimum_required(VERSION 3.17.0)

project(matrix)

set(SOURCE_LIB matrix/matrix.c)

add_library(matrix STATIC ${SOURCE_LIB})