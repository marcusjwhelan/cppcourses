#ifndef GRAPHREPRESENTATION_ADJACENTMATRIXREPRESENTATION_H
#define GRAPHREPRESENTATION_ADJACENTMATRIXREPRESENTATION_H

#include <iostream>

/**
 *
 * ADJ-MATRIX IS BEST USED FOR DENSE GRAPHS
 *
 */

// IN COURSE CLASS NAME IS simple_graph
class simple_graph {
    int ** vertex_matrix;
    int num_of_vertices{10};
    int num_of_edges;
public:
    explicit simple_graph(int _num_of_vertices);
    ~simple_graph();
    void add_egdge(int v1, int v2, int wight);
    void del_edge(int v1, int v2);
    void print_graph();
};


#endif
