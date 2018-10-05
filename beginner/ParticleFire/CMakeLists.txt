cmake_minimum_required(VERSION 3.10)
project(ParticleFire)

set(CMAKE_CXX_STANDARD 17)

add_executable(ParticleFire main.cpp Screen.cpp Screen.h Particle.cpp Particle.h Swarm.cpp Swarm.h)

include_directories("/Library/Frameworks/SDL2.framework/Headers")
target_link_libraries(ParticleFire "/Library/Frameworks/SDL2.framework/SDL2")