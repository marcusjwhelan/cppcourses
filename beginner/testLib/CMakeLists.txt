cmake_minimum_required(VERSION 3.10)
project(testLib)

set(CMAKE_CXX_STANDARD 17)

add_executable(testLib main.cpp)

include_directories("/Users/marcuswhelan/MyCourses/C++/staticLib")
target_link_libraries(testLib "/Users/marcuswhelan/MyCourses/C++/staticLib/cmake-build-release/libstaticLib.a")