# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = "D:\Clion\CLion 2017.3.1\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Clion\CLion 2017.3.1\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\CQ\4_4HexChang

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\CQ\4_4HexChang\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/4_4HexChang.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/4_4HexChang.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/4_4HexChang.dir/flags.make

CMakeFiles/4_4HexChang.dir/main.cpp.obj: CMakeFiles/4_4HexChang.dir/flags.make
CMakeFiles/4_4HexChang.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\CQ\4_4HexChang\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/4_4HexChang.dir/main.cpp.obj"
	D:\CODEBL~1\CODEBL~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\4_4HexChang.dir\main.cpp.obj -c F:\CQ\4_4HexChang\main.cpp

CMakeFiles/4_4HexChang.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/4_4HexChang.dir/main.cpp.i"
	D:\CODEBL~1\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\CQ\4_4HexChang\main.cpp > CMakeFiles\4_4HexChang.dir\main.cpp.i

CMakeFiles/4_4HexChang.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/4_4HexChang.dir/main.cpp.s"
	D:\CODEBL~1\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\CQ\4_4HexChang\main.cpp -o CMakeFiles\4_4HexChang.dir\main.cpp.s

CMakeFiles/4_4HexChang.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/4_4HexChang.dir/main.cpp.obj.requires

CMakeFiles/4_4HexChang.dir/main.cpp.obj.provides: CMakeFiles/4_4HexChang.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\4_4HexChang.dir\build.make CMakeFiles/4_4HexChang.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/4_4HexChang.dir/main.cpp.obj.provides

CMakeFiles/4_4HexChang.dir/main.cpp.obj.provides.build: CMakeFiles/4_4HexChang.dir/main.cpp.obj


# Object files for target 4_4HexChang
4_4HexChang_OBJECTS = \
"CMakeFiles/4_4HexChang.dir/main.cpp.obj"

# External object files for target 4_4HexChang
4_4HexChang_EXTERNAL_OBJECTS =

4_4HexChang.exe: CMakeFiles/4_4HexChang.dir/main.cpp.obj
4_4HexChang.exe: CMakeFiles/4_4HexChang.dir/build.make
4_4HexChang.exe: CMakeFiles/4_4HexChang.dir/linklibs.rsp
4_4HexChang.exe: CMakeFiles/4_4HexChang.dir/objects1.rsp
4_4HexChang.exe: CMakeFiles/4_4HexChang.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\CQ\4_4HexChang\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 4_4HexChang.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\4_4HexChang.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/4_4HexChang.dir/build: 4_4HexChang.exe

.PHONY : CMakeFiles/4_4HexChang.dir/build

CMakeFiles/4_4HexChang.dir/requires: CMakeFiles/4_4HexChang.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/4_4HexChang.dir/requires

CMakeFiles/4_4HexChang.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\4_4HexChang.dir\cmake_clean.cmake
.PHONY : CMakeFiles/4_4HexChang.dir/clean

CMakeFiles/4_4HexChang.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\CQ\4_4HexChang F:\CQ\4_4HexChang F:\CQ\4_4HexChang\cmake-build-debug F:\CQ\4_4HexChang\cmake-build-debug F:\CQ\4_4HexChang\cmake-build-debug\CMakeFiles\4_4HexChang.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/4_4HexChang.dir/depend

