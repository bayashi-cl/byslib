#pragma once
#include <algorithm>
#include <iterator>
#include <vector>
/**
 * @file divisor.hpp
 * @brief Divisor
 */
namespace bys {
/**
 * @brief 約数列挙
 *
 * O(√n)
 */
template <typename T> std::vector<T> make_divisor(T n) {
    std::vector<T> lower, upper;
    for (T i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            lower.emplace_back(i);
            if (T j = n / i; i != j) upper.emplace_back(j);
        }
    }
    std::copy(upper.rbegin(), upper.rend(), std::back_inserter(lower));
    return lower;
}
}  // namespace bys
