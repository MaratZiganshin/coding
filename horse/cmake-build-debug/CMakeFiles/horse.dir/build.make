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
CMAKE_SOURCE_DIR = C:\GitHub\coding\horse

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\GitHub\coding\horse\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/horse.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/horse.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/horse.dir/flags.make

CMakeFiles/horse.dir/main.cpp.obj: CMakeFiles/horse.dir/flags.make
CMakeFiles/horse.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\GitHub\coding\horse\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/horse.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\horse.dir\main.cpp.obj -c C:\GitHub\coding\horse\main.cpp

CMakeFiles/horse.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/horse.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\GitHub\coding\horse\main.cpp > CMakeFiles\horse.dir\main.cpp.i

CMakeFiles/horse.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/horse.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\GitHub\coding\horse\main.cpp -o CMakeFiles\horse.dir\main.cpp.s

CMakeFiles/horse.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/horse.dir/main.cpp.obj.requires

CMakeFiles/horse.dir/main.cpp.obj.provides: CMakeFiles/horse.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\horse.dir\build.make CMakeFiles/horse.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/horse.dir/main.cpp.obj.provides

CMakeFiles/horse.dir/main.cpp.obj.provides.build: CMakeFiles/horse.dir/main.cpp.obj


# Object files for target horse
horse_OBJECTS = \
"CMakeFiles/horse.dir/main.cpp.obj"

# External object files for target horse
horse_EXTERNAL_OBJECTS =

horse.exe: CMakeFiles/horse.dir/main.cpp.obj
horse.exe: CMakeFiles/horse.dir/build.make
horse.exe: CMakeFiles/horse.dir/linklibs.rsp
horse.exe: CMakeFiles/horse.dir/objects1.rsp
horse.exe: CMakeFiles/horse.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\GitHub\coding\horse\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable horse.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\horse.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/horse.dir/build: horse.exe

.PHONY : CMakeFiles/horse.dir/build

CMakeFiles/horse.dir/requires: CMakeFiles/horse.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/horse.dir/requires

CMakeFiles/horse.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\horse.dir\cmake_clean.cmake
.PHONY : CMakeFiles/horse.dir/clean

CMakeFiles/horse.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\GitHub\coding\horse C:\GitHub\coding\horse C:\GitHub\coding\horse\cmake-build-debug C:\GitHub\coding\horse\cmake-build-debug C:\GitHub\coding\horse\cmake-build-debug\CMakeFiles\horse.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/horse.dir/depend

