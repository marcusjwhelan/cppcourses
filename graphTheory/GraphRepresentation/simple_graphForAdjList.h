#ifndef GRAPHREPRESENTATION_SIMPLE_GRAPHFORADJLIST_H
#define GRAPHREPRESENTATION_SIMPLE_GRAPHFORADJLIST_H

#include <iostream>
#include <vector>
#include "adjacencyListRepresentation.h"

class simple_graphForAdjList {
    std::vector<vertex*> vertex_list;
public:
    explicit simple_graphForAdjList(int _num_of_vertices);
    ~simple_graphForAdjList();
    void add_node(int _node_id, std::string value="");
    void add_egdge(int v1_id, int v2_id, int weight=0);
    void del_edge(int v1, int v2);
    void print_graph();
    void print_nodes();
};


#endif
