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
CMAKE_SOURCE_DIR = F:\CQ\4_8PrimeNumbers

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\CQ\4_8PrimeNumbers\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/4_8PrimeNumbers.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/4_8PrimeNumbers.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/4_8PrimeNumbers.dir/flags.make

CMakeFiles/4_8PrimeNumbers.dir/main.cpp.obj: CMakeFiles/4_8PrimeNumbers.dir/flags.make
CMakeFiles/4_8PrimeNumbers.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\CQ\4_8PrimeNumbers\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/4_8PrimeNumbers.dir/main.cpp.obj"
	D:\CODEBL~1\CODEBL~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\4_8PrimeNumbers.dir\main.cpp.obj -c F:\CQ\4_8PrimeNumbers\main.cpp

CMakeFiles/4_8PrimeNumbers.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/4_8PrimeNumbers.dir/main.cpp.i"
	D:\CODEBL~1\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\CQ\4_8PrimeNumbers\main.cpp > CMakeFiles\4_8PrimeNumbers.dir\main.cpp.i

CMakeFiles/4_8PrimeNumbers.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/4_8PrimeNumbers.dir/main.cpp.s"
	D:\CODEBL~1\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\CQ\4_8PrimeNumbers\main.cpp -o CMakeFiles\4_8PrimeNumbers.dir\main.cpp.s

CMakeFiles/4_8PrimeNumbers.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/4_8PrimeNumbers.dir/main.cpp.obj.requires

CMakeFiles/4_8PrimeNumbers.dir/main.cpp.obj.provides: CMakeFiles/4_8PrimeNumbers.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\4_8PrimeNumbers.dir\build.make CMakeFiles/4_8PrimeNumbers.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/4_8PrimeNumbers.dir/main.cpp.obj.provides

CMakeFiles/4_8PrimeNumbers.dir/main.cpp.obj.provides.build: CMakeFiles/4_8PrimeNumbers.dir/main.cpp.obj


# Object files for target 4_8PrimeNumbers
4_8PrimeNumbers_OBJECTS = \
"CMakeFiles/4_8PrimeNumbers.dir/main.cpp.obj"

# External object files for target 4_8PrimeNumbers
4_8PrimeNumbers_EXTERNAL_OBJECTS =

4_8PrimeNumbers.exe: CMakeFiles/4_8PrimeNumbers.dir/main.cpp.obj
4_8PrimeNumbers.exe: CMakeFiles/4_8PrimeNumbers.dir/build.make
4_8PrimeNumbers.exe: CMakeFiles/4_8PrimeNumbers.dir/linklibs.rsp
4_8PrimeNumbers.exe: CMakeFiles/4_8PrimeNumbers.dir/objects1.rsp
4_8PrimeNumbers.exe: CMakeFiles/4_8PrimeNumbers.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\CQ\4_8PrimeNumbers\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 4_8PrimeNumbers.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\4_8PrimeNumbers.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/4_8PrimeNumbers.dir/build: 4_8PrimeNumbers.exe

.PHONY : CMakeFiles/4_8PrimeNumbers.dir/build

CMakeFiles/4_8PrimeNumbers.dir/requires: CMakeFiles/4_8PrimeNumbers.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/4_8PrimeNumbers.dir/requires

CMakeFiles/4_8PrimeNumbers.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\4_8PrimeNumbers.dir\cmake_clean.cmake
.PHONY : CMakeFiles/4_8PrimeNumbers.dir/clean

CMakeFiles/4_8PrimeNumbers.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\CQ\4_8PrimeNumbers F:\CQ\4_8PrimeNumbers F:\CQ\4_8PrimeNumbers\cmake-build-debug F:\CQ\4_8PrimeNumbers\cmake-build-debug F:\CQ\4_8PrimeNumbers\cmake-build-debug\CMakeFiles\4_8PrimeNumbers.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/4_8PrimeNumbers.dir/depend

