# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Dev\projects\C\College

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Dev\projects\C\College\build

# Include any dependencies generated for this target.
include CMakeFiles/3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/3.dir/flags.make

CMakeFiles/3.dir/src/term2/l11/3.c.obj: CMakeFiles/3.dir/flags.make
CMakeFiles/3.dir/src/term2/l11/3.c.obj: CMakeFiles/3.dir/includes_C.rsp
CMakeFiles/3.dir/src/term2/l11/3.c.obj: ../src/term2/l11/3.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Dev\projects\C\College\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/3.dir/src/term2/l11/3.c.obj"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\3.dir\src\term2\l11\3.c.obj   -c D:\Dev\projects\C\College\src\term2\l11\3.c

CMakeFiles/3.dir/src/term2/l11/3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/3.dir/src/term2/l11/3.c.i"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Dev\projects\C\College\src\term2\l11\3.c > CMakeFiles\3.dir\src\term2\l11\3.c.i

CMakeFiles/3.dir/src/term2/l11/3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/3.dir/src/term2/l11/3.c.s"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Dev\projects\C\College\src\term2\l11\3.c -o CMakeFiles\3.dir\src\term2\l11\3.c.s

# Object files for target 3
3_OBJECTS = \
"CMakeFiles/3.dir/src/term2/l11/3.c.obj"

# External object files for target 3
3_EXTERNAL_OBJECTS =

3.exe: CMakeFiles/3.dir/src/term2/l11/3.c.obj
3.exe: CMakeFiles/3.dir/build.make
3.exe: CMakeFiles/3.dir/linklibs.rsp
3.exe: CMakeFiles/3.dir/objects1.rsp
3.exe: CMakeFiles/3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Dev\projects\C\College\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/3.dir/build: 3.exe

.PHONY : CMakeFiles/3.dir/build

CMakeFiles/3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/3.dir/clean

CMakeFiles/3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Dev\projects\C\College D:\Dev\projects\C\College D:\Dev\projects\C\College\build D:\Dev\projects\C\College\build D:\Dev\projects\C\College\build\CMakeFiles\3.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/3.dir/depend

