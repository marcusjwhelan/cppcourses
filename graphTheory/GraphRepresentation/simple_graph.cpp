#include "simple_graph.h"

/**
 * Constructor
 * @param _num_of_vertices default 10
 */
simple_graph::simple_graph(int _num_of_vertices): num_of_vertices(_num_of_vertices) {
    num_of_edges = 0;
    vertex_matrix = new int*[_num_of_vertices];


    for (int i = 0; i < _num_of_vertices; i++) {
        // allocate mem for an array of ints
        vertex_matrix[i] = new int[_num_of_vertices];
    }

    // init. set all to max in that array
    for (int x = 0; x < num_of_vertices; x++) {
        for (int y = 0; y < num_of_vertices; y++) {
            vertex_matrix[x][y] = INT_MAX;
        }
    }
}
/**
 * Destructor -> dealocate mem of items created in class
 */
simple_graph::~simple_graph() {
    for (int i = 0; i < num_of_vertices; i++) {
        // dealocate mem in matix for.
        delete[] vertex_matrix[i];
    }
    // finally delete full matrix
    delete[] vertex_matrix;
}
/**
 * Set the egdge weight of a vertices
 * @param v1
 * @param v2
 * @param wight
 */
void simple_graph::add_egdge(int v1, int v2, int wight) {
    // if the value of this particular coord has not been set
    // increase the number of edges because we are adding it now
    if (vertex_matrix[v1-1][v2-1] == INT_MAX) {
        num_of_edges++;
    }
    // here set the weight of this edge by the given coord
    vertex_matrix[v1-1][v2-1] = wight;
}
/**
 * Reset the edge weight to represent an empty edge
 * @param v1
 * @param v2
 */
void simple_graph::del_edge(int v1, int v2) {
    // if the edge has not been set no need to decrement the edge count
    if (vertex_matrix[v1-1][v2-1] != INT_MAX) {
        num_of_edges--;
    }
    vertex_matrix[v1-1][v2-1] = INT_MAX;
}
/**
 * Iterate all vertices and print to console
 *
 */
void simple_graph::print_graph() {
    for (int x = 0; x < num_of_vertices; x++) {
        for (int y = 0; y < num_of_vertices; y++) {
            // Print value if not set to empty
            if (vertex_matrix[x][y] != INT_MAX) {
                std::cout << vertex_matrix[x][y];
            } else {
                // otherwise print I
                std::cout << "I";
            }
            std::cout << " ";
        }
        std::cout << std::endl;
    }
}