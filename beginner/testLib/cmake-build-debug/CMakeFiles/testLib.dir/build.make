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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/marcuswhelan/MyCourses/C++/testLib

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/marcuswhelan/MyCourses/C++/testLib/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/testLib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testLib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testLib.dir/flags.make

CMakeFiles/testLib.dir/main.cpp.o: CMakeFiles/testLib.dir/flags.make
CMakeFiles/testLib.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcuswhelan/MyCourses/C++/testLib/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testLib.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testLib.dir/main.cpp.o -c /Users/marcuswhelan/MyCourses/C++/testLib/main.cpp

CMakeFiles/testLib.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testLib.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/marcuswhelan/MyCourses/C++/testLib/main.cpp > CMakeFiles/testLib.dir/main.cpp.i

CMakeFiles/testLib.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testLib.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/marcuswhelan/MyCourses/C++/testLib/main.cpp -o CMakeFiles/testLib.dir/main.cpp.s

CMakeFiles/testLib.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/testLib.dir/main.cpp.o.requires

CMakeFiles/testLib.dir/main.cpp.o.provides: CMakeFiles/testLib.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/testLib.dir/build.make CMakeFiles/testLib.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/testLib.dir/main.cpp.o.provides

CMakeFiles/testLib.dir/main.cpp.o.provides.build: CMakeFiles/testLib.dir/main.cpp.o


# Object files for target testLib
testLib_OBJECTS = \
"CMakeFiles/testLib.dir/main.cpp.o"

# External object files for target testLib
testLib_EXTERNAL_OBJECTS =

testLib: CMakeFiles/testLib.dir/main.cpp.o
testLib: CMakeFiles/testLib.dir/build.make
testLib: /Users/marcuswhelan/MyCourses/C++/staticLib/cmake-build-release/libstaticLib.a
testLib: CMakeFiles/testLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/marcuswhelan/MyCourses/C++/testLib/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable testLib"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testLib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testLib.dir/build: testLib

.PHONY : CMakeFiles/testLib.dir/build

CMakeFiles/testLib.dir/requires: CMakeFiles/testLib.dir/main.cpp.o.requires

.PHONY : CMakeFiles/testLib.dir/requires

CMakeFiles/testLib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/testLib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/testLib.dir/clean

CMakeFiles/testLib.dir/depend:
	cd /Users/marcuswhelan/MyCourses/C++/testLib/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/marcuswhelan/MyCourses/C++/testLib /Users/marcuswhelan/MyCourses/C++/testLib /Users/marcuswhelan/MyCourses/C++/testLib/cmake-build-debug /Users/marcuswhelan/MyCourses/C++/testLib/cmake-build-debug /Users/marcuswhelan/MyCourses/C++/testLib/cmake-build-debug/CMakeFiles/testLib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testLib.dir/depend

