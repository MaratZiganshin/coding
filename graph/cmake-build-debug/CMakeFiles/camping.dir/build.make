# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /snap/clion/17/bin/cmake/bin/cmake

# The command to remove a file.
RM = /snap/clion/17/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/marat/GitHub/coding/graph

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/marat/GitHub/coding/graph/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/camping.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/camping.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/camping.dir/flags.make

CMakeFiles/camping.dir/main.cpp.o: CMakeFiles/camping.dir/flags.make
CMakeFiles/camping.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marat/GitHub/coding/graph/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/camping.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/camping.dir/main.cpp.o -c /home/marat/GitHub/coding/graph/main.cpp

CMakeFiles/camping.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/camping.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/marat/GitHub/coding/graph/main.cpp > CMakeFiles/camping.dir/main.cpp.i

CMakeFiles/camping.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/camping.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/marat/GitHub/coding/graph/main.cpp -o CMakeFiles/camping.dir/main.cpp.s

CMakeFiles/camping.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/camping.dir/main.cpp.o.requires

CMakeFiles/camping.dir/main.cpp.o.provides: CMakeFiles/camping.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/camping.dir/build.make CMakeFiles/camping.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/camping.dir/main.cpp.o.provides

CMakeFiles/camping.dir/main.cpp.o.provides.build: CMakeFiles/camping.dir/main.cpp.o


# Object files for target camping
camping_OBJECTS = \
"CMakeFiles/camping.dir/main.cpp.o"

# External object files for target camping
camping_EXTERNAL_OBJECTS =

camping: CMakeFiles/camping.dir/main.cpp.o
camping: CMakeFiles/camping.dir/build.make
camping: CMakeFiles/camping.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/marat/GitHub/coding/graph/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable camping"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/camping.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/camping.dir/build: camping

.PHONY : CMakeFiles/camping.dir/build

CMakeFiles/camping.dir/requires: CMakeFiles/camping.dir/main.cpp.o.requires

.PHONY : CMakeFiles/camping.dir/requires

CMakeFiles/camping.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/camping.dir/cmake_clean.cmake
.PHONY : CMakeFiles/camping.dir/clean

CMakeFiles/camping.dir/depend:
	cd /home/marat/GitHub/coding/graph/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/marat/GitHub/coding/graph /home/marat/GitHub/coding/graph /home/marat/GitHub/coding/graph/cmake-build-debug /home/marat/GitHub/coding/graph/cmake-build-debug /home/marat/GitHub/coding/graph/cmake-build-debug/CMakeFiles/camping.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/camping.dir/depend
