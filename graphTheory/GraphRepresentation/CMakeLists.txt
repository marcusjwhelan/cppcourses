cmake_minimum_required(VERSION 3.10)
project(GraphRepresentation)

set(CMAKE_CXX_STANDARD 17)

add_executable(GraphRepresentation main.cpp simple_graph.cpp simple_graph.h adjacencyListRepresentation.cpp adjacencyListRepresentation.h simple_graphForAdjList.cpp simple_graphForAdjList.h)