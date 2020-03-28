cmake_minimum_required(VERSION 3.17.0)

project(lib VERSION 2.0)

include_directories(include)

set(ARRAY_LIB array.c)

add_library(array STATIC ${ARRAY_LIB})