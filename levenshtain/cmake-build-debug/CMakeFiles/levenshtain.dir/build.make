# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.7

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CLion 2017.1.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CLion 2017.1.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\GitHub\coding\levenshtain

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\GitHub\coding\levenshtain\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/levenshtain.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/levenshtain.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/levenshtain.dir/flags.make

CMakeFiles/levenshtain.dir/main.cpp.obj: CMakeFiles/levenshtain.dir/flags.make
CMakeFiles/levenshtain.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\GitHub\coding\levenshtain\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/levenshtain.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\levenshtain.dir\main.cpp.obj -c C:\GitHub\coding\levenshtain\main.cpp

CMakeFiles/levenshtain.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/levenshtain.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\GitHub\coding\levenshtain\main.cpp > CMakeFiles\levenshtain.dir\main.cpp.i

CMakeFiles/levenshtain.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/levenshtain.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\GitHub\coding\levenshtain\main.cpp -o CMakeFiles\levenshtain.dir\main.cpp.s

CMakeFiles/levenshtain.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/levenshtain.dir/main.cpp.obj.requires

CMakeFiles/levenshtain.dir/main.cpp.obj.provides: CMakeFiles/levenshtain.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\levenshtain.dir\build.make CMakeFiles/levenshtain.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/levenshtain.dir/main.cpp.obj.provides

CMakeFiles/levenshtain.dir/main.cpp.obj.provides.build: CMakeFiles/levenshtain.dir/main.cpp.obj


# Object files for target levenshtain
levenshtain_OBJECTS = \
"CMakeFiles/levenshtain.dir/main.cpp.obj"

# External object files for target levenshtain
levenshtain_EXTERNAL_OBJECTS =

levenshtain.exe: CMakeFiles/levenshtain.dir/main.cpp.obj
levenshtain.exe: CMakeFiles/levenshtain.dir/build.make
levenshtain.exe: CMakeFiles/levenshtain.dir/linklibs.rsp
levenshtain.exe: CMakeFiles/levenshtain.dir/objects1.rsp
levenshtain.exe: CMakeFiles/levenshtain.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\GitHub\coding\levenshtain\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable levenshtain.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\levenshtain.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/levenshtain.dir/build: levenshtain.exe

.PHONY : CMakeFiles/levenshtain.dir/build

CMakeFiles/levenshtain.dir/requires: CMakeFiles/levenshtain.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/levenshtain.dir/requires

CMakeFiles/levenshtain.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\levenshtain.dir\cmake_clean.cmake
.PHONY : CMakeFiles/levenshtain.dir/clean

CMakeFiles/levenshtain.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\GitHub\coding\levenshtain C:\GitHub\coding\levenshtain C:\GitHub\coding\levenshtain\cmake-build-debug C:\GitHub\coding\levenshtain\cmake-build-debug C:\GitHub\coding\levenshtain\cmake-build-debug\CMakeFiles\levenshtain.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/levenshtain.dir/depend

