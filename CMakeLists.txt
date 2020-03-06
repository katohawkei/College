
cmake_minimum_required(VERSION 3.13.4)

project(College)

set(CMAKE_C_STANDART 11)
set(MATRIX_LIB include/matrix/matrix.c include/matrix/matrix.h)

#set(SEED_LIB include/seed/seed.c include/seed/seed.h)

# LABA 6
# add_executable(6_1 src/term2/l6/1.c)
# add_executable(6_2 src/term2/l6/2.c)
# add_executable(6_3 src/term2/l6/3.c ${SEED_LIB})
# add_executable(6_4 src/term2/l6/4.c ${SEED_LIB})
# add_executable(6_5 src/term2/l6/5.c ${SEED_LIB})
# add_executable(6_6 src/term2/l6/6.c)
# add_executable(6_7 src/term2/l6/7.c)
# add_executable(6_8 src/term2/l6/8.c)

# LABA 7
# add_executable(7_1 src/term2/l7/1.c ${SEED_LIB})
# add_executable(7_2 src/term2/l7/2.c ${SEED_LIB})
# add_executable(7_3 src/term2/l7/3.c ${SEED_LIB})
# add_executable(7_4 src/term2/l7/4.c ${SEED_LIB})

# # LABA 8
add_executable(1 src/term2/l8/1.c ${MATRIX_LIB})
add_executable(2 src/term2/l8/2.c ${MATRIX_LIB})
add_executable(3 src/term2/l8/3.c ${MATRIX_LIB})
add_executable(4 src/term2/l8/4.c ${MATRIX_LIB})