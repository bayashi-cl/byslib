#pragma once
#include "edge.hpp"
namespace bys {
std::vector<int> topological_sort(const AdjacencyList& graph) {
    auto n = graph.size();
    std::vector<int> res, degree(n);
    res.reserve(n);
    for (std::size_t i = 0; i < n; ++i) {
        for (auto&& e : graph[i]) ++degree[e.dest];
    }
    std::queue<std::size_t> que;
    for (std::size_t i = 0; i < n; ++i) {
        if (degree[i] == 0) que.push(i);
    }
    while (!que.empty()) {
        auto top = que.front();
        que.pop();
        res.emplace_back(top);
        for (auto&& nxt : graph[top]) {
            if (--degree[nxt.dest] == 0) que.push(nxt.dest);
        }
    }
    return res;
}
}  // namespace bys
