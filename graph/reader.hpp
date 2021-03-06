#pragma once
#include "../core/io.hpp"
#include "../core/stdlib.hpp"
#include "edge.hpp"

namespace bys {
Adj read_adj_uv(int n, int m, bool directed = false, int index = 1) {
    Adj graph(n);
    for (int i = 0; i < m; ++i) {
        auto [u, v] = scanner.read<int, 2>();
        u -= index;
        v -= index;
        graph[u].push_back({v});
        if (!directed) graph[v].push_back({u});
    }
    return graph;
}
Adj read_adj_uvc(int n, int m, bool directed = false, int index = 1) {
    Adj graph(n);
    for (int i = 0; i < m; ++i) {
        auto [u, v, c] = scanner.read<int, int, ll>();
        u -= index;
        v -= index;
        graph[u].push_back({v, c});
        if (!directed) graph[v].push_back({u, c});
    }
    return graph;
}
EdgeList read_elist_uv(int m, int index = 1) {
    EdgeList elist;
    elist.reserve(m);
    for (int i = 0; i < m; ++i) {
        auto [u, v] = scanner.read<int, 2>();
        u -= index;
        v -= index;
        elist.push_back({u, v, 1});
    }
    return elist;
}
EdgeList read_elist_uvc(int m, int index = 1) {
    EdgeList elist;
    elist.reserve(m);
    for (int i = 0; i < m; ++i) {
        auto [u, v, c] = scanner.read<int, int, ll>();
        u -= index;
        v -= index;
        elist.push_back({u, v, c});
    }
    return elist;
}
}  // namespace bys
