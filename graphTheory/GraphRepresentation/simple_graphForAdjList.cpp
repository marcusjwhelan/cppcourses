#include "simple_graphForAdjList.h"

simple_graphForAdjList::simple_graphForAdjList(int _num_of_vertices) {

}
simple_graphForAdjList::~simple_graphForAdjList() {

}
void simple_graphForAdjList::add_node(int _node_id, std::string value="") {
    for (auto var : vertex_list) {
        if (var->node_id == _node_id) {
            throw std::runtime_error("Failed adding node: node with nod_id -");
        }
    }
}
void simple_graphForAdjList::add_egdge(int v1_id, int v2_id, int weight=0) {
    vertex * v1 = nullptr;
    vertex * v2 = nullptr;
    bool found_v1 = false;
    bool found_v2 = false;

    for (auto var : vertex_list) {
        if (var->node_id == v1_id) {
            v1 = var;
            found_v1 = true;
        }
        if (var->node_id == v2_id) {
            v2 = var;
            found_v2 = true;
        }
        if (found_v1 && found_v2) {
            break;
        }
    }
    if (found_v1 && found_v2) {
        bool edge_already_exists = false;

        for (auto var : v1->adj_list) {
            if (var.first->node_id == v2_id) {
                edge_already_exists = true;
                throw std::runtime_error("Failed adding edge: " + std::to_string(v1_id) + " - " + "");
                break;
            }
            if (!edge_already_exists) {
                v1->adj_list.push_back(std::make_pair(v2, weight));
            }
        }
    } else {
        throw std::runtime_error("Failed adding edge : one or both vertex does not exists");
    }
}
void simple_graphForAdjList::del_edge(int v1, int v2) {

}
void simple_graphForAdjList::print_graph() {

}
void simple_graphForAdjList::print_nodes() {

}