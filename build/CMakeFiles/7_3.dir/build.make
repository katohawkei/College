# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kato/dev/cprojects/college

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kato/dev/cprojects/college/build

# Include any dependencies generated for this target.
include CMakeFiles/7_3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/7_3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/7_3.dir/flags.make

CMakeFiles/7_3.dir/l7/3.c.o: CMakeFiles/7_3.dir/flags.make
CMakeFiles/7_3.dir/l7/3.c.o: ../l7/3.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kato/dev/cprojects/college/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/7_3.dir/l7/3.c.o"
	/bin/gcc-9 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/7_3.dir/l7/3.c.o   -c /home/kato/dev/cprojects/college/l7/3.c

CMakeFiles/7_3.dir/l7/3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/7_3.dir/l7/3.c.i"
	/bin/gcc-9 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kato/dev/cprojects/college/l7/3.c > CMakeFiles/7_3.dir/l7/3.c.i

CMakeFiles/7_3.dir/l7/3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/7_3.dir/l7/3.c.s"
	/bin/gcc-9 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kato/dev/cprojects/college/l7/3.c -o CMakeFiles/7_3.dir/l7/3.c.s

CMakeFiles/7_3.dir/include/seed/seed.c.o: CMakeFiles/7_3.dir/flags.make
CMakeFiles/7_3.dir/include/seed/seed.c.o: ../include/seed/seed.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kato/dev/cprojects/college/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/7_3.dir/include/seed/seed.c.o"
	/bin/gcc-9 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/7_3.dir/include/seed/seed.c.o   -c /home/kato/dev/cprojects/college/include/seed/seed.c

CMakeFiles/7_3.dir/include/seed/seed.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/7_3.dir/include/seed/seed.c.i"
	/bin/gcc-9 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kato/dev/cprojects/college/include/seed/seed.c > CMakeFiles/7_3.dir/include/seed/seed.c.i

CMakeFiles/7_3.dir/include/seed/seed.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/7_3.dir/include/seed/seed.c.s"
	/bin/gcc-9 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kato/dev/cprojects/college/include/seed/seed.c -o CMakeFiles/7_3.dir/include/seed/seed.c.s

# Object files for target 7_3
7_3_OBJECTS = \
"CMakeFiles/7_3.dir/l7/3.c.o" \
"CMakeFiles/7_3.dir/include/seed/seed.c.o"

# External object files for target 7_3
7_3_EXTERNAL_OBJECTS =

7_3: CMakeFiles/7_3.dir/l7/3.c.o
7_3: CMakeFiles/7_3.dir/include/seed/seed.c.o
7_3: CMakeFiles/7_3.dir/build.make
7_3: CMakeFiles/7_3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kato/dev/cprojects/college/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable 7_3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/7_3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/7_3.dir/build: 7_3

.PHONY : CMakeFiles/7_3.dir/build

CMakeFiles/7_3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/7_3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/7_3.dir/clean

CMakeFiles/7_3.dir/depend:
	cd /home/kato/dev/cprojects/college/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kato/dev/cprojects/college /home/kato/dev/cprojects/college /home/kato/dev/cprojects/college/build /home/kato/dev/cprojects/college/build /home/kato/dev/cprojects/college/build/CMakeFiles/7_3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/7_3.dir/depend

