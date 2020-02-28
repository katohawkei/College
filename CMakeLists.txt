
cmake_minimum_required(VERSION 3.16.4)

project(College)

set(CMAKE_C_STANDART 11)
set(SEED_LIB include/seed/seed.c include/seed/seed.h)

add_executable(6_1 l6/1.c)
add_executable(6_2 l6/2.c)
add_executable(6_3 l6/3.c ${SEED_LIB})
add_executable(6_4 l6/4.c ${SEED_LIB})
add_executable(6_5 l6/5.c ${SEED_LIB})
add_executable(6_6 l6/6.c)
add_executable(6_7 l6/7.c)
add_executable(6_8 l6/8.c)

add_executable(7_1 l7/1.c ${SEED_LIB})
add_executable(7_2 l7/2.c ${SEED_LIB})
add_executable(7_3 l7/3.c ${SEED_LIB})
add_executable(7_4 l7/4.c ${SEED_LIB})
