cmake_minimum_required(VERSION 3.17.0)

project(matrix)

set(SOURCE_LIB matrix/matrix.c)
set(SEED_LIB seed/seed.c)

add_library(matrix STATIC ${SOURCE_LIB})
add_library(seed STATIC ${SEED_LIB})