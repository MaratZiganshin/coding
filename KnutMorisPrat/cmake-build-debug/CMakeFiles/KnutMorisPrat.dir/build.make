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
CMAKE_SOURCE_DIR = C:\GitHub\coding\KnutMorisPrat

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\GitHub\coding\KnutMorisPrat\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/KnutMorisPrat.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/KnutMorisPrat.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/KnutMorisPrat.dir/flags.make

CMakeFiles/KnutMorisPrat.dir/main.cpp.obj: CMakeFiles/KnutMorisPrat.dir/flags.make
CMakeFiles/KnutMorisPrat.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\GitHub\coding\KnutMorisPrat\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/KnutMorisPrat.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\KnutMorisPrat.dir\main.cpp.obj -c C:\GitHub\coding\KnutMorisPrat\main.cpp

CMakeFiles/KnutMorisPrat.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KnutMorisPrat.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\GitHub\coding\KnutMorisPrat\main.cpp > CMakeFiles\KnutMorisPrat.dir\main.cpp.i

CMakeFiles/KnutMorisPrat.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KnutMorisPrat.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\GitHub\coding\KnutMorisPrat\main.cpp -o CMakeFiles\KnutMorisPrat.dir\main.cpp.s

CMakeFiles/KnutMorisPrat.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/KnutMorisPrat.dir/main.cpp.obj.requires

CMakeFiles/KnutMorisPrat.dir/main.cpp.obj.provides: CMakeFiles/KnutMorisPrat.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\KnutMorisPrat.dir\build.make CMakeFiles/KnutMorisPrat.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/KnutMorisPrat.dir/main.cpp.obj.provides

CMakeFiles/KnutMorisPrat.dir/main.cpp.obj.provides.build: CMakeFiles/KnutMorisPrat.dir/main.cpp.obj


# Object files for target KnutMorisPrat
KnutMorisPrat_OBJECTS = \
"CMakeFiles/KnutMorisPrat.dir/main.cpp.obj"

# External object files for target KnutMorisPrat
KnutMorisPrat_EXTERNAL_OBJECTS =

KnutMorisPrat.exe: CMakeFiles/KnutMorisPrat.dir/main.cpp.obj
KnutMorisPrat.exe: CMakeFiles/KnutMorisPrat.dir/build.make
KnutMorisPrat.exe: CMakeFiles/KnutMorisPrat.dir/linklibs.rsp
KnutMorisPrat.exe: CMakeFiles/KnutMorisPrat.dir/objects1.rsp
KnutMorisPrat.exe: CMakeFiles/KnutMorisPrat.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\GitHub\coding\KnutMorisPrat\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable KnutMorisPrat.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\KnutMorisPrat.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/KnutMorisPrat.dir/build: KnutMorisPrat.exe

.PHONY : CMakeFiles/KnutMorisPrat.dir/build

CMakeFiles/KnutMorisPrat.dir/requires: CMakeFiles/KnutMorisPrat.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/KnutMorisPrat.dir/requires

CMakeFiles/KnutMorisPrat.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\KnutMorisPrat.dir\cmake_clean.cmake
.PHONY : CMakeFiles/KnutMorisPrat.dir/clean

CMakeFiles/KnutMorisPrat.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\GitHub\coding\KnutMorisPrat C:\GitHub\coding\KnutMorisPrat C:\GitHub\coding\KnutMorisPrat\cmake-build-debug C:\GitHub\coding\KnutMorisPrat\cmake-build-debug C:\GitHub\coding\KnutMorisPrat\cmake-build-debug\CMakeFiles\KnutMorisPrat.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/KnutMorisPrat.dir/depend

