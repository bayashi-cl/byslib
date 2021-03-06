#define PROBLEM "https://judge.yosupo.jp/problem/unionfind"

#include "../../core/core.hpp"
#include "../../data/union_find.hpp"
#include "../../utility/change.hpp"
#include "../../utility/range.hpp"

namespace bys {
void Solver::solve() {
    auto [n, q] = scanner.read<int, 2>();
    auto que = scanner.readvec<array<int, 3>>(q);
    UnionFindTree uft(n);
    for (auto&& [t, u, v] : que) {
        if (t == 0) {
            uft.unite(u, v);
        } else {
            print(uft.same(u, v) ? 1 : 0);
        }
    }
}
}  // namespace bys

int main() {
    bys::Solver solver;
    solver.solve(/* bys::scanner.read<int>() */);
    return 0;
}
