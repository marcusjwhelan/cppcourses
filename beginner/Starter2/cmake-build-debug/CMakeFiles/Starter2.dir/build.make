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
CMAKE_SOURCE_DIR = /Users/marcuswhelan/MyCourses/C++/Starter2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/marcuswhelan/MyCourses/C++/Starter2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Starter2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Starter2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Starter2.dir/flags.make

CMakeFiles/Starter2.dir/main.cpp.o: CMakeFiles/Starter2.dir/flags.make
CMakeFiles/Starter2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcuswhelan/MyCourses/C++/Starter2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Starter2.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Starter2.dir/main.cpp.o -c /Users/marcuswhelan/MyCourses/C++/Starter2/main.cpp

CMakeFiles/Starter2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Starter2.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/marcuswhelan/MyCourses/C++/Starter2/main.cpp > CMakeFiles/Starter2.dir/main.cpp.i

CMakeFiles/Starter2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Starter2.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/marcuswhelan/MyCourses/C++/Starter2/main.cpp -o CMakeFiles/Starter2.dir/main.cpp.s

CMakeFiles/Starter2.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Starter2.dir/main.cpp.o.requires

CMakeFiles/Starter2.dir/main.cpp.o.provides: CMakeFiles/Starter2.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Starter2.dir/build.make CMakeFiles/Starter2.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Starter2.dir/main.cpp.o.provides

CMakeFiles/Starter2.dir/main.cpp.o.provides.build: CMakeFiles/Starter2.dir/main.cpp.o


# Object files for target Starter2
Starter2_OBJECTS = \
"CMakeFiles/Starter2.dir/main.cpp.o"

# External object files for target Starter2
Starter2_EXTERNAL_OBJECTS =

Starter2: CMakeFiles/Starter2.dir/main.cpp.o
Starter2: CMakeFiles/Starter2.dir/build.make
Starter2: CMakeFiles/Starter2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/marcuswhelan/MyCourses/C++/Starter2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Starter2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Starter2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Starter2.dir/build: Starter2

.PHONY : CMakeFiles/Starter2.dir/build

CMakeFiles/Starter2.dir/requires: CMakeFiles/Starter2.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Starter2.dir/requires

CMakeFiles/Starter2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Starter2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Starter2.dir/clean

CMakeFiles/Starter2.dir/depend:
	cd /Users/marcuswhelan/MyCourses/C++/Starter2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/marcuswhelan/MyCourses/C++/Starter2 /Users/marcuswhelan/MyCourses/C++/Starter2 /Users/marcuswhelan/MyCourses/C++/Starter2/cmake-build-debug /Users/marcuswhelan/MyCourses/C++/Starter2/cmake-build-debug /Users/marcuswhelan/MyCourses/C++/Starter2/cmake-build-debug/CMakeFiles/Starter2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Starter2.dir/depend

