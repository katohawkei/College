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
include CMakeFiles/6_7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/6_7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/6_7.dir/flags.make

CMakeFiles/6_7.dir/src/term2/l6/7.c.o: CMakeFiles/6_7.dir/flags.make
CMakeFiles/6_7.dir/src/term2/l6/7.c.o: ../src/term2/l6/7.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kato/dev/cprojects/college/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/6_7.dir/src/term2/l6/7.c.o"
	/bin/gcc-9 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/6_7.dir/src/term2/l6/7.c.o   -c /home/kato/dev/cprojects/college/src/term2/l6/7.c

CMakeFiles/6_7.dir/src/term2/l6/7.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/6_7.dir/src/term2/l6/7.c.i"
	/bin/gcc-9 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kato/dev/cprojects/college/src/term2/l6/7.c > CMakeFiles/6_7.dir/src/term2/l6/7.c.i

CMakeFiles/6_7.dir/src/term2/l6/7.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/6_7.dir/src/term2/l6/7.c.s"
	/bin/gcc-9 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kato/dev/cprojects/college/src/term2/l6/7.c -o CMakeFiles/6_7.dir/src/term2/l6/7.c.s

# Object files for target 6_7
6_7_OBJECTS = \
"CMakeFiles/6_7.dir/src/term2/l6/7.c.o"

# External object files for target 6_7
6_7_EXTERNAL_OBJECTS =

6_7: CMakeFiles/6_7.dir/src/term2/l6/7.c.o
6_7: CMakeFiles/6_7.dir/build.make
6_7: CMakeFiles/6_7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kato/dev/cprojects/college/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 6_7"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/6_7.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/6_7.dir/build: 6_7

.PHONY : CMakeFiles/6_7.dir/build

CMakeFiles/6_7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/6_7.dir/cmake_clean.cmake
.PHONY : CMakeFiles/6_7.dir/clean

CMakeFiles/6_7.dir/depend:
	cd /home/kato/dev/cprojects/college/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kato/dev/cprojects/college /home/kato/dev/cprojects/college /home/kato/dev/cprojects/college/build /home/kato/dev/cprojects/college/build /home/kato/dev/cprojects/college/build/CMakeFiles/6_7.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/6_7.dir/depend

