#ifndef GRAPHREPRESENTATION_ADJACENCYLISTREPRESENTATION_H
#define GRAPHREPRESENTATION_ADJACENCYLISTREPRESENTATION_H

#include <iostream>

// vertext data types
#include <vector>
#include <list>

enum NODE_COLOR

/**
 *
 * ADJ-LIST IS BEST USED FOR SPARSE GRAPHS
 *
 */
struct vertex {
    int node_id;
    std::string value; // name

    // use vector or List
    // delete more frequintly. use List
    // vector has better cache locality
    std::vector<std::pair<vertex *, int>> adj_list;

    NODE_COLOR color = WHITE;
    int distance = INT_MAX;
    vertex * predecessor = NULL;

    vertex();
    vertex(int _id, std::string _value = "");
    void print_vertex();
};


#endif
