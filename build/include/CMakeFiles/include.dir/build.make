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
CMAKE_SOURCE_DIR = C:\Dev\c_cpp_projects\College

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Dev\c_cpp_projects\College\build

# Include any dependencies generated for this target.
include include/CMakeFiles/include.dir/depend.make

# Include the progress variables for this target.
include include/CMakeFiles/include.dir/progress.make

# Include the compile flags for this target's objects.
include include/CMakeFiles/include.dir/flags.make

include/CMakeFiles/include.dir/matrix/matrix.c.obj: include/CMakeFiles/include.dir/flags.make
include/CMakeFiles/include.dir/matrix/matrix.c.obj: include/CMakeFiles/include.dir/includes_C.rsp
include/CMakeFiles/include.dir/matrix/matrix.c.obj: ../include/matrix/matrix.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Dev\c_cpp_projects\College\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object include/CMakeFiles/include.dir/matrix/matrix.c.obj"
	cd /d C:\Dev\c_cpp_projects\College\build\include && C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\include.dir\matrix\matrix.c.obj   -c C:\Dev\c_cpp_projects\College\include\matrix\matrix.c

include/CMakeFiles/include.dir/matrix/matrix.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/include.dir/matrix/matrix.c.i"
	cd /d C:\Dev\c_cpp_projects\College\build\include && C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Dev\c_cpp_projects\College\include\matrix\matrix.c > CMakeFiles\include.dir\matrix\matrix.c.i

include/CMakeFiles/include.dir/matrix/matrix.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/include.dir/matrix/matrix.c.s"
	cd /d C:\Dev\c_cpp_projects\College\build\include && C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Dev\c_cpp_projects\College\include\matrix\matrix.c -o CMakeFiles\include.dir\matrix\matrix.c.s

# Object files for target include
include_OBJECTS = \
"CMakeFiles/include.dir/matrix/matrix.c.obj"

# External object files for target include
include_EXTERNAL_OBJECTS =

include/libinclude.a: include/CMakeFiles/include.dir/matrix/matrix.c.obj
include/libinclude.a: include/CMakeFiles/include.dir/build.make
include/libinclude.a: include/CMakeFiles/include.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Dev\c_cpp_projects\College\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libinclude.a"
	cd /d C:\Dev\c_cpp_projects\College\build\include && $(CMAKE_COMMAND) -P CMakeFiles\include.dir\cmake_clean_target.cmake
	cd /d C:\Dev\c_cpp_projects\College\build\include && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\include.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
include/CMakeFiles/include.dir/build: include/libinclude.a

.PHONY : include/CMakeFiles/include.dir/build

include/CMakeFiles/include.dir/clean:
	cd /d C:\Dev\c_cpp_projects\College\build\include && $(CMAKE_COMMAND) -P CMakeFiles\include.dir\cmake_clean.cmake
.PHONY : include/CMakeFiles/include.dir/clean

include/CMakeFiles/include.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Dev\c_cpp_projects\College C:\Dev\c_cpp_projects\College\include C:\Dev\c_cpp_projects\College\build C:\Dev\c_cpp_projects\College\build\include C:\Dev\c_cpp_projects\College\build\include\CMakeFiles\include.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : include/CMakeFiles/include.dir/depend

