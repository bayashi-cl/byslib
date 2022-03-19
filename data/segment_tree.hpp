#pragma once
#include "../core/stdlib.hpp"
#include "../math/bit.hpp"
namespace bys {
template <class Monoid>
class SegmentTree {
    using T = typename Monoid::set_type;
    int _n, n_leaf;
    std::vector<T> data;

   public:
    SegmentTree(int n) : _n(n), n_leaf(bit_ceil(n)), data(n_leaf * 2, Monoid::identity) {}
    SegmentTree(const vector<T>& v) : _n(v.size()), n_leaf(bit_ceil(_n)), data(n_leaf * 2, Monoid::identity) {
        std::copy(v.begin(), v.end(), data.begin() + n_leaf);
        for (int i = n_leaf - 1; i > 0; --i) data[i] = Monoid::operation(data[i * 2], data[i * 2 + 1]);
    }

    T query(int l, int r) const {
        assert(0 <= l && l < _n);
        assert(l <= r);
        assert(r <= _n);

        T left = Monoid::identity, right = Monoid::identity;
        for (l += n_leaf, r += n_leaf; l < r; l >>= 1, r >>= 1) {
            if (l & 1) left = Monoid::operation(left, data[l++]);
            if (r & 1) right = Monoid::operation(data[--r], right);
        }
        return Monoid::operation(left, right);
    }

    T query_all() const { return data[1]; }

    void update(int i, T val) {
        assert(0 <= i && i < _n);
        i += n_leaf;
        data[i] = val;
        for (i >>= 1; i > 0; i >>= 1) data[i] = Monoid::operation(data[i * 2], data[i * 2 + 1]);
    }

    T operator[](int i) const {
        assert(0 <= i && i < _n);
        return data[i + n_leaf];
    }

    // int bisect_from_left(int l, std::function<bool(S)> f) const {}
    // int bisect_from_right(int r, std::function<bool(S)> f) const {}
};
}  // namespace bys
