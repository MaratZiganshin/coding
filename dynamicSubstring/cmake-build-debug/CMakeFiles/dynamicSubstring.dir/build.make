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
CMAKE_SOURCE_DIR = C:\GitHub\coding\dynamicSubstring

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\GitHub\coding\dynamicSubstring\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/dynamicSubstring.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dynamicSubstring.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dynamicSubstring.dir/flags.make

CMakeFiles/dynamicSubstring.dir/main.cpp.obj: CMakeFiles/dynamicSubstring.dir/flags.make
CMakeFiles/dynamicSubstring.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\GitHub\coding\dynamicSubstring\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dynamicSubstring.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\dynamicSubstring.dir\main.cpp.obj -c C:\GitHub\coding\dynamicSubstring\main.cpp

CMakeFiles/dynamicSubstring.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dynamicSubstring.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\GitHub\coding\dynamicSubstring\main.cpp > CMakeFiles\dynamicSubstring.dir\main.cpp.i

CMakeFiles/dynamicSubstring.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dynamicSubstring.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\GitHub\coding\dynamicSubstring\main.cpp -o CMakeFiles\dynamicSubstring.dir\main.cpp.s

CMakeFiles/dynamicSubstring.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/dynamicSubstring.dir/main.cpp.obj.requires

CMakeFiles/dynamicSubstring.dir/main.cpp.obj.provides: CMakeFiles/dynamicSubstring.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\dynamicSubstring.dir\build.make CMakeFiles/dynamicSubstring.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/dynamicSubstring.dir/main.cpp.obj.provides

CMakeFiles/dynamicSubstring.dir/main.cpp.obj.provides.build: CMakeFiles/dynamicSubstring.dir/main.cpp.obj


# Object files for target dynamicSubstring
dynamicSubstring_OBJECTS = \
"CMakeFiles/dynamicSubstring.dir/main.cpp.obj"

# External object files for target dynamicSubstring
dynamicSubstring_EXTERNAL_OBJECTS =

dynamicSubstring.exe: CMakeFiles/dynamicSubstring.dir/main.cpp.obj
dynamicSubstring.exe: CMakeFiles/dynamicSubstring.dir/build.make
dynamicSubstring.exe: CMakeFiles/dynamicSubstring.dir/linklibs.rsp
dynamicSubstring.exe: CMakeFiles/dynamicSubstring.dir/objects1.rsp
dynamicSubstring.exe: CMakeFiles/dynamicSubstring.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\GitHub\coding\dynamicSubstring\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable dynamicSubstring.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\dynamicSubstring.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dynamicSubstring.dir/build: dynamicSubstring.exe

.PHONY : CMakeFiles/dynamicSubstring.dir/build

CMakeFiles/dynamicSubstring.dir/requires: CMakeFiles/dynamicSubstring.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/dynamicSubstring.dir/requires

CMakeFiles/dynamicSubstring.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\dynamicSubstring.dir\cmake_clean.cmake
.PHONY : CMakeFiles/dynamicSubstring.dir/clean

CMakeFiles/dynamicSubstring.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\GitHub\coding\dynamicSubstring C:\GitHub\coding\dynamicSubstring C:\GitHub\coding\dynamicSubstring\cmake-build-debug C:\GitHub\coding\dynamicSubstring\cmake-build-debug C:\GitHub\coding\dynamicSubstring\cmake-build-debug\CMakeFiles\dynamicSubstring.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dynamicSubstring.dir/depend

