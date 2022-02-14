#pragma once
#include "../core/stdlib.hpp"
#include "../core/const.hpp"
namespace bys {
/**
 * @brief Single Source Shortest Path Result
 * 単一始点最短経路問題の答え
 * 経路復元もできる
 */
struct SSSPResult {
    std::size_t source;
    std::vector<ll> cost;
    std::vector<int> prev;

    SSSPResult(std::size_t _n, std::size_t _source) : source(_source), cost(_n, LINF), prev(_n, -1) {}
    vector<std::size_t> path(int to) const {
        vector<std::size_t> res;
        while (to != -1) {
            res.push_back(to);
            to = prev[to];
        }
        std::reverse(res.begin(), res.end());
        return res;
    }
};
struct APSPResult {
    std::vector<std::vector<ll>> cost;
    std::vector<std::vector<int>> prev;
    APSPResult(std::size_t _n) : cost(_n, vector(_n, LINF)), prev(_n, vector(_n, -1)) {}
    std::vector<std::size_t> path(int from, int to) {
        vector<std::size_t> res;
        for (int now = to; now != from; now = prev[from][now]) {
            res.push_back(now);
        }
        res.push_back(from);
        std::reverse(res.begin(), res.end());
        return res;
    }
};
}  // namespace bys