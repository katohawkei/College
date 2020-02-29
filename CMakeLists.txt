
cmake_minimum_required(VERSION 3.13.4)

project(College)

set(CMAKE_C_STANDART 11)
set(SEED_LIB include/seed/seed.c include/seed/seed.h)

add_executable(6_1 term2/src/l6/1.c)
add_executable(6_2 term2/src/l6/2.c)
add_executable(6_3 term2/src/l6/3.c ${SEED_LIB})
add_executable(6_4 term2/src/l6/4.c ${SEED_LIB})
add_executable(6_5 term2/src/l6/5.c ${SEED_LIB})
add_executable(6_6 term2/src/l6/6.c)
add_executable(6_7 term2/src/l6/7.c)
add_executable(6_8 term2/src/l6/8.c)

add_executable(7_1 term2/src/l7/1.c ${SEED_LIB})
add_executable(7_2 term2/src/l7/2.c ${SEED_LIB})
add_executable(7_3 term2/src/l7/3.c ${SEED_LIB})
add_executable(7_4 term2/src/l7/4.c ${SEED_LIB})
