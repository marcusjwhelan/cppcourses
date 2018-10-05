cmake_minimum_required(VERSION 3.10)
project(SDLTest)

set(CMAKE_CXX_STANDARD 17)

add_executable(SDLTest main.cpp)

include_directories("/Library/Frameworks/SDL2.framework/Headers")
target_link_libraries(SDLTest "/Library/Frameworks/SDL2.framework/SDL2")