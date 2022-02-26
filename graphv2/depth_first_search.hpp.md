---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: core/stdlib.hpp
    title: core/stdlib.hpp
  - icon: ':heavy_check_mark:'
    path: graphv2/edge.hpp
    title: graphv2/edge.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"core/stdlib.hpp\"\n#ifndef LOCAL\n#define NDEBUG\n#endif\n\
    \n#include <algorithm>\n#include <array>\n#include <cassert>\n#include <cmath>\n\
    #include <complex>\n#include <functional>\n#include <iomanip>\n#include <iostream>\n\
    #include <iterator>\n#include <limits>\n#include <map>\n#include <numeric>\n#include\
    \ <queue>\n#include <set>\n#include <stack>\n#include <string>\n#include <type_traits>\n\
    #include <unordered_map>\n#include <unordered_set>\n#include <vector>\n\nnamespace\
    \ bys {\nusing std::array, std::vector, std::string, std::set, std::map, std::pair;\n\
    using std::cin, std::cout, std::endl;\nusing std::min, std::max, std::sort, std::reverse,\
    \ std::abs, std::pow;\n\n// alias\nusing ll = long long int;\nusing ld = long\
    \ double;\nusing Pa = pair<int, int>;\nusing Pall = pair<ll, ll>;\nusing ibool\
    \ = std::int8_t;\ntemplate <class T>\nusing uset = std::unordered_set<T>;\ntemplate\
    \ <class S, class T>\nusing umap = std::unordered_map<S, T>;\n}  // namespace\
    \ bys\n#line 3 \"graphv2/edge.hpp\"\nnamespace bys {\nstruct Edge {\n    std::size_t\
    \ src, dest;\n    ll weight;\n    Edge() {}\n    Edge(std::size_t src, std::size_t\
    \ dest, ll weight = 1) : src(src), dest(dest), weight(weight) {}\n    bool operator<(const\
    \ Edge& rh) const { return weight < rh.weight; }\n    operator int() const { return\
    \ dest; }\n    friend std::ostream& operator<<(std::ostream& os, const Edge& e)\
    \ {\n        return os << \"{\" << e.src << \" -> \" << e.dest << \": \" << e.weight\
    \ << \"}\";\n    }\n};\nstruct DynamicAdjacencyList {\n    std::vector<std::vector<Edge>>\
    \ data;\n    DynamicAdjacencyList(std::size_t n) : data(n, vector<Edge>()), _n(n)\
    \ {}\n    std::vector<vector<Edge>>::reference operator[](std::size_t i) { return\
    \ *(data.begin() + i); }\n    const std::vector<vector<Edge>>::const_reference\
    \ operator[](std::size_t i) const { return *(data.cbegin() + i); }\n    void add_edge(const\
    \ Edge& e) { data[e.src].push_back(e); }\n    void add_edge(std::size_t src, std::size_t\
    \ dest, ll weight = 1) { data[src].push_back({src, dest, weight}); }\n    std::size_t\
    \ size() const { return _n; }\n\n   private:\n    std::size_t _n;\n};\nstruct\
    \ AdjacencyList {\n    AdjacencyList(std::size_t n, std::size_t m) : _n(n), _m(m),\
    \ index(n + 1), _build_flg(m == 0) { buf.reserve(m); }\n\n    struct AdjacencyRange\
    \ {\n        using iterator = std::vector<Edge>::const_iterator;\n        using\
    \ reference = std::vector<Edge>::const_reference;\n        iterator _begin, _end;\n\
    \        iterator begin() const { return _begin; }\n        iterator end() const\
    \ { return _end; }\n        reference operator[](std::size_t i) const { return\
    \ *(_begin + i); }\n        std::size_t size() const { return std::distance(_begin,\
    \ _end); }\n        bool empty() const { return size() == 0; }\n    };\n    AdjacencyRange\
    \ operator[](std::size_t i) const {\n        return AdjacencyRange{data.begin()\
    \ + index[i], data.begin() + index[i + 1]};\n    }\n\n    void build() {\n   \
    \     std::partial_sum(index.begin(), index.end(), index.begin());\n        data.resize(_m);\n\
    \        for (auto&& e : buf) data[--index[e.src]] = e;\n        _build_flg =\
    \ true;\n    }\n    void add_edge(const Edge& e) {\n        ++index[e.src];\n\
    \        buf.emplace_back(e);\n        if (buf.size() == _m) build();\n    }\n\
    \    void add_edge(std::size_t src, std::size_t dest, ll weight = 1) { add_edge(Edge(src,\
    \ dest, weight)); }\n    std::size_t size() const { return _n; }\n    std::size_t\
    \ n_edge() const { return _m; }\n    bool build_flg() const { return _build_flg;\
    \ }\n\n   private:\n    std::size_t _n, _m;\n    std::vector<Edge> buf, data;\n\
    \    std::vector<std::size_t> index;\n    bool _build_flg;\n};\n}  // namespace\
    \ bys\n#line 4 \"graphv2/depth_first_search.hpp\"\nnamespace bys {\nclass DepthFirstSearch\
    \ {\n    const AdjacencyList& _graph;\n    const std::size_t _n;\n\n   public:\n\
    \    std::vector<int> prev, cost;\n    std::vector<std::size_t> pre_order, post_order,\
    \ euler_tour;\n    DepthFirstSearch(const AdjacencyList& graph, std::size_t root)\
    \ : _graph(graph), _n(graph.size()), prev(_n, -1), cost(_n, -1) {\n        pre_order.reserve(_n);\n\
    \        post_order.reserve(_n);\n        euler_tour.reserve(2 * _n - 1);\n  \
    \      cost[root] = 0;\n        search(root);\n    }\n    DepthFirstSearch(const\
    \ AdjacencyList& graph) : _graph(graph), _n(graph.size()), prev(_n, -1), cost(_n,\
    \ -1) {\n        pre_order.reserve(_n);\n        post_order.reserve(_n);\n   \
    \     euler_tour.reserve(2 * _n - 1);\n    }\n\n    void crawl() {\n        for\
    \ (std::size_t i = 0; i < _n; ++i) {\n            if (cost[i] != -1) {\n     \
    \           cost[i] = 0;\n                search(i);\n            }\n        }\n\
    \    }\n    void search(std::size_t now) {\n        pre_order.emplace_back(now);\n\
    \        euler_tour.emplace_back(now);\n        for (auto&& next : _graph[now])\
    \ {\n            if (cost[next] != -1) continue;\n            cost[next] = cost[now]\
    \ + 1;\n            prev[next] = now;\n            search(next.dest);\n      \
    \      euler_tour.emplace_back(now);\n        }\n        post_order.emplace_back(now);\n\
    \    }\n};\n}  // namespace bys\n"
  code: "#pragma once\n#include \"../core/stdlib.hpp\"\n#include \"edge.hpp\"\nnamespace\
    \ bys {\nclass DepthFirstSearch {\n    const AdjacencyList& _graph;\n    const\
    \ std::size_t _n;\n\n   public:\n    std::vector<int> prev, cost;\n    std::vector<std::size_t>\
    \ pre_order, post_order, euler_tour;\n    DepthFirstSearch(const AdjacencyList&\
    \ graph, std::size_t root) : _graph(graph), _n(graph.size()), prev(_n, -1), cost(_n,\
    \ -1) {\n        pre_order.reserve(_n);\n        post_order.reserve(_n);\n   \
    \     euler_tour.reserve(2 * _n - 1);\n        cost[root] = 0;\n        search(root);\n\
    \    }\n    DepthFirstSearch(const AdjacencyList& graph) : _graph(graph), _n(graph.size()),\
    \ prev(_n, -1), cost(_n, -1) {\n        pre_order.reserve(_n);\n        post_order.reserve(_n);\n\
    \        euler_tour.reserve(2 * _n - 1);\n    }\n\n    void crawl() {\n      \
    \  for (std::size_t i = 0; i < _n; ++i) {\n            if (cost[i] != -1) {\n\
    \                cost[i] = 0;\n                search(i);\n            }\n   \
    \     }\n    }\n    void search(std::size_t now) {\n        pre_order.emplace_back(now);\n\
    \        euler_tour.emplace_back(now);\n        for (auto&& next : _graph[now])\
    \ {\n            if (cost[next] != -1) continue;\n            cost[next] = cost[now]\
    \ + 1;\n            prev[next] = now;\n            search(next.dest);\n      \
    \      euler_tour.emplace_back(now);\n        }\n        post_order.emplace_back(now);\n\
    \    }\n};\n}  // namespace bys\n"
  dependsOn:
  - core/stdlib.hpp
  - graphv2/edge.hpp
  isVerificationFile: false
  path: graphv2/depth_first_search.hpp
  requiredBy: []
  timestamp: '2022-02-26 15:09:40+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: graphv2/depth_first_search.hpp
layout: document
redirect_from:
- /library/graphv2/depth_first_search.hpp
- /library/graphv2/depth_first_search.hpp.html
title: graphv2/depth_first_search.hpp
---