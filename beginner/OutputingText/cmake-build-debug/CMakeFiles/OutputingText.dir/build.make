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
CMAKE_SOURCE_DIR = /Users/marcuswhelan/MyCourses/C++/OutputingText

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/marcuswhelan/MyCourses/C++/OutputingText/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/OutputingText.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/OutputingText.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OutputingText.dir/flags.make

CMakeFiles/OutputingText.dir/main.cpp.o: CMakeFiles/OutputingText.dir/flags.make
CMakeFiles/OutputingText.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marcuswhelan/MyCourses/C++/OutputingText/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/OutputingText.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OutputingText.dir/main.cpp.o -c /Users/marcuswhelan/MyCourses/C++/OutputingText/main.cpp

CMakeFiles/OutputingText.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OutputingText.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/marcuswhelan/MyCourses/C++/OutputingText/main.cpp > CMakeFiles/OutputingText.dir/main.cpp.i

CMakeFiles/OutputingText.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OutputingText.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/marcuswhelan/MyCourses/C++/OutputingText/main.cpp -o CMakeFiles/OutputingText.dir/main.cpp.s

CMakeFiles/OutputingText.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/OutputingText.dir/main.cpp.o.requires

CMakeFiles/OutputingText.dir/main.cpp.o.provides: CMakeFiles/OutputingText.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/OutputingText.dir/build.make CMakeFiles/OutputingText.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/OutputingText.dir/main.cpp.o.provides

CMakeFiles/OutputingText.dir/main.cpp.o.provides.build: CMakeFiles/OutputingText.dir/main.cpp.o


# Object files for target OutputingText
OutputingText_OBJECTS = \
"CMakeFiles/OutputingText.dir/main.cpp.o"

# External object files for target OutputingText
OutputingText_EXTERNAL_OBJECTS =

OutputingText: CMakeFiles/OutputingText.dir/main.cpp.o
OutputingText: CMakeFiles/OutputingText.dir/build.make
OutputingText: CMakeFiles/OutputingText.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/marcuswhelan/MyCourses/C++/OutputingText/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable OutputingText"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/OutputingText.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OutputingText.dir/build: OutputingText

.PHONY : CMakeFiles/OutputingText.dir/build

CMakeFiles/OutputingText.dir/requires: CMakeFiles/OutputingText.dir/main.cpp.o.requires

.PHONY : CMakeFiles/OutputingText.dir/requires

CMakeFiles/OutputingText.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/OutputingText.dir/cmake_clean.cmake
.PHONY : CMakeFiles/OutputingText.dir/clean

CMakeFiles/OutputingText.dir/depend:
	cd /Users/marcuswhelan/MyCourses/C++/OutputingText/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/marcuswhelan/MyCourses/C++/OutputingText /Users/marcuswhelan/MyCourses/C++/OutputingText /Users/marcuswhelan/MyCourses/C++/OutputingText/cmake-build-debug /Users/marcuswhelan/MyCourses/C++/OutputingText/cmake-build-debug /Users/marcuswhelan/MyCourses/C++/OutputingText/cmake-build-debug/CMakeFiles/OutputingText.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/OutputingText.dir/depend
