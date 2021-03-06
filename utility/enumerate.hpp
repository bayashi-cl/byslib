#pragma once
#include "../core/stdlib.hpp"
/**
 * @file enumerate.hpp
 * @brief Python::enumerate
 *
 * Python再現シリーズ enumerate編
 * See: https://docs.python.org/ja/3/library/functions.html#enumerate
 */
namespace bys {
template <class Iterator>
class Enumerate {
    Iterator _begin, _end;
    int _idx;

   public:
    class EnumerateIterator {
        Iterator _iter;
        int _id;

       public:
        EnumerateIterator(Iterator iter, int id) : _iter(iter), _id(id) {}
        void operator++() { ++_iter, ++_id; }
        bool operator!=(const EnumerateIterator& other) const { return _iter != other._iter; }
        auto operator*() { return std::tie(_id, *_iter); }
    };

    Enumerate(Iterator from, Iterator to, int start) : _begin(from), _end(to), _idx(start) {}
    auto begin() const { return EnumerateIterator(_begin, _idx); }
    auto end() const { return EnumerateIterator(_end, _idx + std::distance(_begin, _end)); }
};
/**
 * @brief enumerate
 *
 * @param iterable 対象
 * @param start indexの初期値
 */
template <class Iterable>
auto enumerate(Iterable& iterable, int start = 0) {
    return Enumerate(std::begin(iterable), std::end(iterable), start);
}
/**
 * @brief const enumerate
 *
 * @param iterable 対象
 * @param start indexの初期値
 */
template <class Iterable>
auto cenumerate(Iterable& iterable, int start = 0) {
    return Enumerate(std::cbegin(iterable), std::cend(iterable), start);
}
}  // namespace bys
