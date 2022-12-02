---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: byslib/core/constant.hpp
    title: Const
  - icon: ':question:'
    path: byslib/core/int_alias.hpp
    title: byslib/core/int_alias.hpp
  - icon: ':question:'
    path: byslib/core/traits.hpp
    title: Types
  - icon: ':question:'
    path: byslib/extension/change.hpp
    title: chmin/chmax
  - icon: ':question:'
    path: byslib/extension/enumerate.hpp
    title: Python::enumerate
  - icon: ':question:'
    path: byslib/extension/irange.hpp
    title: Python::range
  - icon: ':question:'
    path: byslib/extension/macro.hpp
    title: Macro
  - icon: ':question:'
    path: byslib/extension/subrange.hpp
    title: byslib/extension/subrange.hpp
  - icon: ':question:'
    path: byslib/io/io.hpp
    title: I/O
  - icon: ':question:'
    path: byslib/io/printer.hpp
    title: Output
  - icon: ':question:'
    path: byslib/io/scanner.hpp
    title: Input
  - icon: ':question:'
    path: byslib/procon/solver.hpp
    title: Solver
  - icon: ':question:'
    path: byslib/procon/stdlib.hpp
    title: STL Template
  _extendedRequiredBy:
  - icon: ':warning:'
    path: template.cpp
    title: template.cpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/AOJ/CGL_1_A.test.cpp
    title: test/AOJ/CGL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/AOJ/CGL_1_B.test.cpp
    title: test/AOJ/CGL_1_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/AOJ/CGL_1_C.test.cpp
    title: test/AOJ/CGL_1_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/AOJ/CGL_2_A.test.cpp
    title: test/AOJ/CGL_2_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/AOJ/CGL_2_B.test.cpp
    title: test/AOJ/CGL_2_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/AOJ/CGL_2_C.test.cpp
    title: test/AOJ/CGL_2_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/AOJ/CGL_2_D.test.cpp
    title: test/AOJ/CGL_2_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/AOJ/CGL_3_A.test.cpp
    title: test/AOJ/CGL_3_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/AOJ/CGL_3_B.test.cpp
    title: test/AOJ/CGL_3_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/AOJ/DSL_1_A.test.cpp
    title: test/AOJ/DSL_1_A.test.cpp
  - icon: ':x:'
    path: test/AOJ/DSL_2_A.test.cpp
    title: test/AOJ/DSL_2_A.test.cpp
  - icon: ':x:'
    path: test/AOJ/DSL_2_B.test.cpp
    title: test/AOJ/DSL_2_B.test.cpp
  - icon: ':x:'
    path: test/AOJ/DSL_2_D.test.cpp
    title: test/AOJ/DSL_2_D.test.cpp
  - icon: ':x:'
    path: test/AOJ/DSL_2_E.test.cpp
    title: test/AOJ/DSL_2_E.test.cpp
  - icon: ':x:'
    path: test/AOJ/DSL_2_F.test.cpp
    title: test/AOJ/DSL_2_F.test.cpp
  - icon: ':x:'
    path: test/AOJ/DSL_2_G.test.cpp
    title: test/AOJ/DSL_2_G.test.cpp
  - icon: ':x:'
    path: test/AOJ/DSL_2_H.test.cpp
    title: test/AOJ/DSL_2_H.test.cpp
  - icon: ':x:'
    path: test/AOJ/DSL_2_I.test.cpp
    title: test/AOJ/DSL_2_I.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/AOJ/DSL_5_A.test.cpp
    title: test/AOJ/DSL_5_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/AOJ/DSL_5_B.test.cpp
    title: test/AOJ/DSL_5_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/AOJ/GRL_1_A.test.cpp
    title: test/AOJ/GRL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/AOJ/GRL_1_B.test.cpp
    title: test/AOJ/GRL_1_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/AOJ/GRL_1_C.test.cpp
    title: test/AOJ/GRL_1_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/test.test.cpp
    title: test/test.test.cpp
  - icon: ':x:'
    path: test/yosupo/point_add_range_sum.test.cpp
    title: test/yosupo/point_add_range_sum.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yosupo/range_affine_range_sum.test.cpp
    title: test/yosupo/range_affine_range_sum.test.cpp
  - icon: ':x:'
    path: test/yosupo/static_range_sum.test.cpp
    title: test/yosupo/static_range_sum.test.cpp
  - icon: ':x:'
    path: test/yosupo/staticrmq.test.cpp
    title: test/yosupo/staticrmq.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yosupo/unionfind.test.cpp
    title: test/yosupo/unionfind.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':question:'
  attributes:
    links:
    - https://bayashi-cl.github.io/byslib/
    - https://github.com/bayashi-cl/byslib
  bundledCode: "/**\n * @file template.hpp\n * @author bayashi_cl\n *\n * C++ library\
    \ for competitive programming by bayashi_cl\n * Repository: https://github.com/bayashi-cl/byslib\n\
    \ * Document  : https://bayashi-cl.github.io/byslib/\n */\n#ifndef LOCAL\n#define\
    \ NDEBUG\n#endif\n\n#include <cstddef>\n#include <limits>\n#include <tuple>\n\
    #include <utility>\n\n#include <cstdint>\nnamespace bys {\nusing i8 = std::int8_t;\n\
    using i16 = std::int16_t;\nusing i32 = std::int32_t;\nusing i64 = std::int64_t;\n\
    using i128 = __int128_t;\nusing u8 = std::uint8_t;\nusing u16 = std::uint16_t;\n\
    using u32 = std::uint32_t;\nusing u64 = std::uint64_t;\nusing u128 = __uint128_t;\n\
    using f32 = float;\nusing f64 = double;\nusing f128 = long double;\n\nusing isize\
    \ = std::ptrdiff_t;\nusing usize = std::size_t;\n\n#define DEFINE_NUM_LITERAL(name,\
    \ type) \\\n    constexpr auto operator\"\" name(unsigned long long x) { return\
    \ static_cast<type>(x); }\n\nDEFINE_NUM_LITERAL(_i8, std::int8_t);\nDEFINE_NUM_LITERAL(_i16,\
    \ std::int16_t);\nDEFINE_NUM_LITERAL(_i32, std::int32_t);\nDEFINE_NUM_LITERAL(_i64,\
    \ std::int64_t);\nDEFINE_NUM_LITERAL(_i128, __int128_t);\nDEFINE_NUM_LITERAL(_u8,\
    \ std::uint8_t);\nDEFINE_NUM_LITERAL(_u16, std::uint16_t);\nDEFINE_NUM_LITERAL(_u32,\
    \ std::uint32_t);\nDEFINE_NUM_LITERAL(_u64, std::uint64_t);\nDEFINE_NUM_LITERAL(_u128,\
    \ __uint128_t);\nDEFINE_NUM_LITERAL(_z, std::size_t);\n#undef DEFINE_NUM_LITERAL\n\
    }  // namespace bys\n#include <array>\n#include <iostream>\n#include <type_traits>\n\
    /**\n * @file traits.hpp\n * @brief Types\n *\n * type_traits\u62E1\u5F35\n */\n\
    namespace bys {\ntemplate <class, class = void> struct has_rshift_from_istream\
    \ : std::false_type {};\ntemplate <class T>\nstruct has_rshift_from_istream<T,\
    \ std::void_t<decltype(std::declval<std::istream&>() >> std::declval<T&>())>>\
    \ : std::true_type {};\ntemplate <class T> constexpr bool has_rshift_from_istream_v\
    \ = has_rshift_from_istream<T>::value;\n\ntemplate <class, class = void> struct\
    \ has_lshift_to_ostream : std::false_type {};\ntemplate <class T>\nstruct has_lshift_to_ostream<T,\
    \ std::void_t<decltype(std::declval<std::ostream&>() << std::declval<T&>())>>\
    \ : std::true_type {};\ntemplate <class T> constexpr bool has_lshft_to_ostream_v\
    \ = has_lshift_to_ostream<T>::value;\n\ntemplate <class, class = void> struct\
    \ is_tuple_like : std::false_type {};\ntemplate <class T> struct is_tuple_like<T,\
    \ std::void_t<decltype(std::tuple_size<T>())>> : std::true_type {};\ntemplate\
    \ <class T> constexpr bool is_tuple_like_v = is_tuple_like<T>::value;\n\ntemplate\
    \ <class, class = void> struct is_iterable : std::false_type {};\ntemplate <class\
    \ T> struct is_iterable<T, std::void_t<decltype(std::begin(std::declval<T>()))>>\
    \ : std::true_type {};\ntemplate <class T> constexpr bool is_iterable_v = is_iterable<T>::value;\n\
    \ntemplate <class T> struct Indexed {\n    static_assert(std::is_integral_v<T>);\n\
    \    using resolve_to = T;\n};\nusing i32_1 = Indexed<i32>;\nusing i64_1 = Indexed<i64>;\n\
    \ntemplate <class, class = void> struct is_indexed : std::false_type {};\ntemplate\
    \ <class T> struct is_indexed<Indexed<T>> : std::true_type {};\ntemplate <class\
    \ T> constexpr bool is_indexed_v = is_indexed<T>::value;\n\ntemplate <class T,\
    \ class = void> struct resolve_type { using type = T; };\ntemplate <class T> struct\
    \ resolve_type<T, std::void_t<typename T::resolve_to>> { using type = typename\
    \ T::resolve_to; };\ntemplate <class T, std::size_t N> struct resolve_type<std::array<T,\
    \ N>> {\n    using type = std::array<typename resolve_type<T>::type, N>;\n};\n\
    template <class T, class U> struct resolve_type<std::pair<T, U>> {\n    using\
    \ type = std::pair<typename resolve_type<T>::type, typename resolve_type<U>::type>;\n\
    };\ntemplate <class... Args> struct resolve_type<std::tuple<Args...>> {\n    using\
    \ type = std::tuple<typename resolve_type<Args>::type...>;\n};\ntemplate <class\
    \ T> using resolve_type_t = typename resolve_type<T>::type;\n}  // namespace bys\n\
    \n/**\n * @file constant.hpp\n * @brief Const\n */\nnamespace bys {\nconstexpr\
    \ i32 MOD7 = 1000000007;\nconstexpr i32 MOD9 = 998244353;\nconstexpr i32 MOD =\
    \ MOD9;\n\ntemplate <class T> constexpr T get_inf();\nnamespace impl {\ntemplate\
    \ <class Tp, std::size_t... I> constexpr auto get_inf_tuple(std::index_sequence<I...>)\
    \ {\n    return Tp{get_inf<typename std::tuple_element_t<I, Tp>>()...};\n}\n}\
    \  // namespace impl\ntemplate <class T> constexpr T get_inf() {\n    if constexpr\
    \ (std::is_integral_v<T>) {\n        return std::numeric_limits<T>::max() / (T)2;\n\
    \    } else if constexpr (std::is_floating_point_v<T>) {\n        return std::numeric_limits<T>::infinity();\n\
    \    } else if constexpr (is_tuple_like_v<T>) {\n        return impl::get_inf_tuple<T>(std::make_index_sequence<std::tuple_size_v<T>>());\n\
    \    } else {\n        static_assert([]() { return false; }, \"Type Error\");\n\
    \    }\n}\ntemplate <class T> constexpr bool is_inf(T x) { return x == get_inf<T>();\
    \ }\nconstexpr auto INF = get_inf<i32>();\nconstexpr auto LINF = get_inf<i64>();\n\
    }  // namespace bys\n/**\n * @file change.hpp\n * @brief chmin/chmax\n */\nnamespace\
    \ bys {\n/**\n * @brief \u6700\u5927\u5024\u3067\u66F4\u65B0\n * @return true\
    \ \u66F4\u65B0\u3055\u308C\u305F\u3068\u304D\n */\ntemplate <class T> constexpr\
    \ bool chmax(T& a, T const& b) { return a < b ? a = b, true : false; }\n/**\n\
    \ * @brief \u6700\u5C0F\u5024\u3067\u66F4\u65B0\n * @return true \u66F4\u65B0\u3055\
    \u308C\u305F\u3068\u304D\n */\ntemplate <class T> constexpr bool chmin(T& a, T\
    \ const& b) { return a > b ? a = b, true : false; }\n}  // namespace bys\n#include\
    \ <iterator>\n#include <vector>\n\n\nnamespace bys {\ntemplate <class Iterator>\
    \ class SubRange {\n  public:\n    using iterator = Iterator;\n    using reverse_iterator\
    \ = std::reverse_iterator<iterator>;\n    using value_type = typename iterator::value_type;\n\
    \n    SubRange() = default;\n    SubRange(const SubRange& s) : _begin(s._begin),\
    \ _end(s._end) {}\n    SubRange(const iterator& begin, const iterator& end) :\
    \ _begin(begin), _end(end) {}\n\n    iterator begin() const noexcept { return\
    \ _begin; }\n    iterator end() const noexcept { return _end; }\n    reverse_iterator\
    \ rbegin() const noexcept { return reverse_iterator{_end}; }\n    reverse_iterator\
    \ rend() const { return reverse_iterator{_begin}; }\n    auto operator[](std::size_t\
    \ i) const noexcept { return *(_begin + i); }\n    auto size() const noexcept\
    \ { return _end - _begin; }\n    bool empty() const noexcept { return _begin ==\
    \ _end; }\n\n    auto to_vec() const { return std::vector(_begin, _end); }\n\n\
    \  private:\n    iterator _begin, _end;\n};\ntemplate <class Iterable> auto reversed(Iterable&&\
    \ iter) {\n    static_assert(is_iterable_v<Iterable>, \"iter is not iterable\"\
    );\n    return SubRange(std::rbegin(std::forward<Iterable>(iter)), std::rend(std::forward<Iterable>(iter)));\n\
    }\n}  // namespace bys\n/**\n * @file enumerate.hpp\n * @brief Python::enumerate\n\
    \ *\n * Python\u518D\u73FE\u30B7\u30EA\u30FC\u30BA enumerate\u7DE8\n * See: https://docs.python.org/ja/3/library/functions.html#enumerate\n\
    \ */\nnamespace bys {\ntemplate <class Iterator> struct EnumerateIterator {\n\
    \  public:\n    using difference_type = typename Iterator::difference_type;\n\
    \    using value_type = std::tuple<i32, typename Iterator::value_type>;\n    //\
    \ using pointer = value_type*;\n    using reference = value_type&;\n    using\
    \ iterator_category = std::forward_iterator_tag;\n\n    EnumerateIterator(const\
    \ Iterator& iterator, i32 idx) : index(idx), value(iterator) {}\n\n    auto& operator++()\
    \ {\n        ++value;\n        ++index;\n        return *this;\n    }\n    bool\
    \ operator!=(const EnumerateIterator& other) const { return value != other.value;\
    \ }\n    auto operator*() const { return std::tie(index, *value); }\n\n  private:\n\
    \    i32 index;\n    Iterator value;\n};\n\n/**\n * @brief enumerate\n *\n * @param\
    \ iterable \u5BFE\u8C61\n * @param start index\u306E\u521D\u671F\u5024\n */\n\
    template <class Iterable> auto enumerate(Iterable& iterable, i32 start = 0) {\n\
    \    using iterator_t = EnumerateIterator<typename Iterable::iterator>;\n    i32\
    \ end = static_cast<i32>(iterable.size()) + start;\n    return SubRange(iterator_t(std::begin(iterable),\
    \ start), iterator_t(std::end(iterable), end));\n}\n/**\n * @brief const enumerate\n\
    \ *\n * @param iterable \u5BFE\u8C61\n * @param start index\u306E\u521D\u671F\u5024\
    \n */\ntemplate <class Iterable> auto cenumerate(Iterable& iterable, i32 start\
    \ = 0) {\n    using iterator_t = EnumerateIterator<typename Iterable::const_iterator>;\n\
    \    i32 end = static_cast<i32>(iterable.size()) + start;\n    return SubRange(iterator_t(std::cbegin(iterable),\
    \ start), iterator_t(std::cend(iterable), end));\n}\n}  // namespace bys\n/**\n\
    \ * @file irange.hpp\n * @brief Python::range\n *\n * Python\u518D\u73FE\u30B7\
    \u30EA\u30FC\u30BA range\u7DE8\n * See: https://docs.python.org/ja/3/library/stdtypes.html#range\n\
    \ */\nnamespace bys {\ntemplate <class T> class IntegerIncrementIterator {\n \
    \ public:\n    using difference_type = std::ptrdiff_t;\n    using value_type =\
    \ T;\n    using reference = T;\n    using pointer = T*;\n    using iterator_category\
    \ = std::bidirectional_iterator_tag;\n\n    explicit IntegerIncrementIterator(T\
    \ x) : value(x) {}\n\n    reference operator*() noexcept { return value; }\n \
    \   const reference operator*() const noexcept { return value; }\n\n    auto operator++()\
    \ noexcept {\n        ++value;\n        return *this;\n    }\n    auto operator++(int)\
    \ noexcept {\n        auto temp = *this;\n        ++*this;\n        return temp;\n\
    \    }\n    auto operator--() noexcept {\n        --value;\n        return *this;\n\
    \    }\n    auto operator--(int) {\n        auto temp = *this;\n        --*this;\n\
    \        return temp;\n    }\n\n    bool operator!=(IntegerIncrementIterator const&\
    \ other) const { return value != other.value; }\n    bool operator==(IntegerIncrementIterator\
    \ const& other) const { return value == other.value; }\n\n  private:\n    value_type\
    \ value;\n};\n\ntemplate <class T> class IntegerStepIterator {\n  public:\n  \
    \  using difference_type = std::ptrdiff_t;\n    using value_type = T;\n    using\
    \ reference = T;\n    using pointer = T*;\n    using iterator_category = std::bidirectional_iterator_tag;\n\
    \n    explicit IntegerStepIterator(T f, T x, T s) : start(f), value(x), step(s)\
    \ {}\n\n    reference operator*() noexcept { return start + value * step; }\n\
    \    const reference operator*() const noexcept { return start + value * step;\
    \ }\n\n    auto operator++() {\n        ++value;\n        return *this;\n    }\n\
    \    auto operator++(int) {\n        auto temp = *this;\n        ++*this;\n  \
    \      return temp;\n    }\n    auto operator--() {\n        --value;\n      \
    \  return *this;\n    }\n    auto operator--(int) {\n        auto temp = *this;\n\
    \        --*this;\n        return temp;\n    }\n\n    bool operator!=(IntegerStepIterator\
    \ const& other) const { return value != other.value; }\n    bool operator==(IntegerStepIterator\
    \ const& other) const { return value == other.value; }\n\n  private:\n    value_type\
    \ start, value, step;\n};\n\ntemplate <class T> SubRange<IntegerIncrementIterator<T>>\
    \ irange(T stop) {\n    static_assert(std::is_integral_v<T>, \"T is not integer.\"\
    );\n    using iterator_t = IntegerIncrementIterator<T>;\n    if (stop < static_cast<T>(0))\
    \ stop = static_cast<T>(0);\n    return SubRange(iterator_t(static_cast<T>(0)),\
    \ iterator_t(stop));\n}\ntemplate <class T> SubRange<IntegerIncrementIterator<T>>\
    \ irange(T start, T stop) {\n    static_assert(std::is_integral_v<T>, \"T is not\
    \ integer.\");\n    using iterator_t = IntegerIncrementIterator<T>;\n    if (stop\
    \ < start) stop = start;\n    return SubRange(iterator_t(start), iterator_t(stop));\n\
    }\ntemplate <class T> SubRange<IntegerStepIterator<T>> irange(T start, T stop,\
    \ T step) {\n    static_assert(std::is_integral_v<T>, \"T is not integer.\");\n\
    \    using iterator_t = IntegerStepIterator<T>;\n    assert(step != 0);\n    auto\
    \ w = step >= 0 ? stop - start : start - stop;\n    auto s = step >= 0 ? step\
    \ : -step;\n    if (w < 0) w = 0;\n    return SubRange(iterator_t(start, static_cast<T>(0),\
    \ step), iterator_t(start, (w + s - 1) / s, step));\n}\n}  // namespace bys\n\
    #include <string>\nusing std::literals::string_literals::operator\"\"s;\n/**\n\
    \ * @file macro.hpp\n * @brief Macro\n */\n// clang-format off\n#define CONCAT_IMPL(a,\
    \ b) a##b\n#define CONCAT(a, b) CONCAT_IMPL(a, b)\n//! @brief [[maybe_unused]]\u306A\
    \u5909\u6570\u3092\u751F\u6210\u3002\n#define UV [[maybe_unused]] auto CONCAT(unused_val_,\
    \ __LINE__)\n#define RE std::runtime_error(\"file: \"s + __FILE__ + \", line:\
    \ \"s + std::to_string(__LINE__) + \", func: \"s + __func__)\n#ifdef LOCAL\n#define\
    \ DEBUGBLOCK(block) block\n#else\n#define DEBUGBLOCK(block)\n#endif\n// clang-format\
    \ on\n#include <iomanip>\n\n/**\n * @file printer.hpp\n * @brief Output\n */\n\
    namespace bys {\nclass Printer {\n    std::ostream& _os;\n    // sep1 \"\\n\"\
    \       : iterable<iterable>\n    // sep2 \" \" or \"\\n\": iterable, args\n \
    \   // sep3 \" \"        : tuple_like\n    std::string sep1 = \"\\n\", sep2 =\
    \ \" \", sep3 = \" \", end = \"\\n\";\n\n    template <std::size_t I, class T>\
    \ void print_tuple_element(T&& elem) {\n        if constexpr (I != 0) cat(sep3);\n\
    \        cat(std::forward<T>(elem));\n    }\n    template <class Tp, std::size_t...\
    \ I> void print_tuple(Tp&& tp, std::index_sequence<I...>) {\n        (print_tuple_element<I>(std::forward<std::tuple_element_t<I,\
    \ std::decay_t<Tp>>>(std::get<I>(tp))), ...);\n    }\n\n  public:\n    Printer()\
    \ = delete;\n    Printer(std::ostream& os) : _os(os) { _os << std::fixed << std::setprecision(11)\
    \ << std::boolalpha; }\n    ~Printer() { _os << std::flush; }\n\n    template\
    \ <class T> void cat(T&& v) {\n        if constexpr (has_lshft_to_ostream_v<std::decay_t<T>>)\
    \ {\n            _os << v;\n        } else if constexpr (is_iterable_v<std::decay_t<T>>)\
    \ {\n            std::string sep;\n            if constexpr (is_iterable_v<typename\
    \ std::decay_t<T>::value_type>) {\n                sep = sep1;\n            }\
    \ else {\n                sep = sep2;\n            }\n            bool top = true;\n\
    \            for (auto&& vi : v) {\n                top ? (void)(top = false)\
    \ : cat(sep);\n                cat(vi);\n            }\n        } else if constexpr\
    \ (is_tuple_like_v<std::decay_t<T>>) {\n            print_tuple(std::forward<T>(v),\
    \ std::make_index_sequence<std::tuple_size_v<std::decay_t<T>>>());\n        }\
    \ else {\n            static_assert([] { return false; }(), \"type error\");\n\
    \        }\n    }\n\n    void print() { cat(end); }\n    template <class T> void\
    \ print(T&& v) {\n        cat(std::forward<T>(v));\n        cat(end);\n    }\n\
    \    template <class T, class... Ts> void print(T&& top, Ts&&... args) {\n   \
    \     cat(std::forward<T>(top));\n        cat(sep2);\n        print(std::forward<Ts>(args)...);\n\
    \    }\n    template <class... Ts> void operator()(Ts&&... args) { print(std::forward<Ts>(args)...);\
    \ }\n\n    void flush() { _os << std::flush; }\n    template <class... Ts> void\
    \ send(Ts&&... args) {\n        print(std::forward<Ts>(args)...);\n        flush();\n\
    \    }\n\n    Printer set_sep(const std::string& sep_1, const std::string& sep_2,\
    \ const std::string& sep_3) {\n        sep1 = sep_1;\n        sep2 = sep_2;\n\
    \        sep3 = sep_3;\n        return *this;\n    }\n    Printer set_sep(const\
    \ std::string& sep_2) {\n        sep2 = sep_2;\n        return *this;\n    }\n\
    \    Printer set_end(const std::string& _end) {\n        end = _end;\n       \
    \ return *this;\n    }\n};\n}  // namespace bys\n\n/**\n * @file scanner.hpp\n\
    \ * @brief Input\n */\nnamespace bys {\nclass Scanner {\n    std::istream& _is;\n\
    \    template <class T, std::size_t... I> auto read_tuple(std::index_sequence<I...>)\
    \ {\n        return resolve_type_t<T>{read<typename std::tuple_element_t<I, T>>()...};\n\
    \    }\n\n  public:\n    Scanner() = delete;\n    Scanner(std::istream& is) :\
    \ _is(is) { _is.tie(nullptr); }\n\n    template <class T> auto read() {\n    \
    \    if constexpr (has_rshift_from_istream_v<T>) {\n            T res;\n     \
    \       _is >> res;\n            return res;\n        } else if constexpr (is_tuple_like_v<T>)\
    \ {\n            return read_tuple<T>(std::make_index_sequence<std::tuple_size_v<T>>());\n\
    \        } else if constexpr (is_indexed_v<T>) {\n            typename T::resolve_to\
    \ n;\n            _is >> n;\n            return --n;\n        } else {\n     \
    \       static_assert([] { return false; }(), \"TypeError\");\n        }\n   \
    \ }\n    template <class... Ts, std::enable_if_t<(sizeof...(Ts) >= 2), std::nullptr_t>\
    \ = nullptr> auto read() {\n        return std::tuple{read<Ts>()...};\n    }\n\
    \    template <class T, std::size_t N> auto read() {\n        std::array<resolve_type_t<T>,\
    \ N> res;\n        for (auto&& e : res) e = read<T>();\n        return res;\n\
    \    }\n    template <class T> auto readvec(i32 n) {\n        std::vector<resolve_type_t<T>>\
    \ res(n);\n        for (auto&& e : res) e = read<T>();\n        return res;\n\
    \    }\n    template <class T> auto readvec(i32 n, i32 m) {\n        std::vector<std::vector<resolve_type_t<T>>>\
    \ res(n);\n        for (auto&& e : res) e = readvec<T>(m);\n        return res;\n\
    \    }\n};\n}  // namespace bys\n\n/**\n * @file io.hpp\n * @brief I/O\n */\n\
    namespace bys {\ntemplate <class... Args> std::string debugfmt(i32 line, Args&&...\
    \ args) {\n    std::stringstream ss;\n    Printer printer(ss);\n    ss << \"\U0001F4CC\
    \ line\" << std::setw(4) << line << \": \";\n    printer.set_sep(\"\\n       \
    \      \", \" \", \" \");\n    printer.print(std::forward<Args>(args)...);\n \
    \   return ss.str();\n}\n\nPrinter print(std::cout), debug(std::cerr);\nScanner\
    \ scanner(std::cin);\n\n#ifdef LOCAL\n//! @brief \u30C7\u30D0\u30C3\u30B0\u7528\
    \u51FA\u529B \u30B8\u30E3\u30C3\u30B8\u4E0A\u3067\u306F\u4F55\u3082\u3057\u306A\
    \u3044\u3002\n#define DEBUG(...)                                  \\\n    {  \
    \                                             \\\n        debug.cat(debugfmt(__LINE__,\
    \ __VA_ARGS__)); \\\n        debug.flush();                              \\\n\
    \    }\n#else\n#define DEBUG(...)\n#endif\n#define DEBUGCASE(casenum, ...) \\\n\
    \    if (TESTCASE == casenum) DEBUG(__VA_ARGS__)\n//! @brief print\u3057\u3066\
    return\u3059\u308B\u3002\n#define EXIT(...)           \\\n    {              \
    \         \\\n        print(__VA_ARGS__); \\\n        return;             \\\n\
    \    }\n}  // namespace bys\n\n#include <unistd.h>\n\n\n\n/**\n * @file solver.hpp\n\
    \ * @brief Solver\n */\nnamespace bys {\nstruct Solver {\n    static inline i32\
    \ TESTCASE = 1;\n    static void solve();\n    static i32 main(i32 t = 1) {\n\
    \        std::ios::sync_with_stdio(false);\n\n        for (; TESTCASE <= t; ++TESTCASE)\
    \ solve();\n#ifdef LOCAL\n        if (not std::cin.good()) std::cerr << \"\U0001F7E1\
    \ Input failed.\" << std::endl;\n        if (not isatty(STDIN_FILENO) and not\
    \ std::ws(std::cin).eof()) std::cerr << \"\U0001F7E1 Unused input.\" << std::endl;\n\
    #endif\n        return 0;\n    }\n};\n}  // namespace bys\n/**\n * @file stdlib.hpp\n\
    \ * @brief STL Template\n */\n#include <algorithm>\n#include <bitset>\n#include\
    \ <cassert>\n#include <cmath>\n#include <complex>\n#include <functional>\n#include\
    \ <map>\n#include <numeric>\n#include <queue>\n#include <set>\n#include <stack>\n\
    #include <unordered_map>\n#include <unordered_set>\n\n\nnamespace bys {\nusing\
    \ std::array, std::vector, std::string, std::set, std::map, std::pair;\nusing\
    \ std::cin, std::cout, std::endl;\nusing std::min, std::max, std::sort, std::reverse,\
    \ std::abs;\n\n// alias\nusing Pa = std::pair<i32, i32>;\nusing Pa64 = std::pair<i64,\
    \ i64>;\ntemplate <class T> using uset = std::unordered_set<T>;\ntemplate <class\
    \ S, class T> using umap = std::unordered_map<S, T>;\n}  // namespace bys\n"
  code: "#pragma once\n/**\n * @file template.hpp\n * @author bayashi_cl\n *\n * C++\
    \ library for competitive programming by bayashi_cl\n * Repository: https://github.com/bayashi-cl/byslib\n\
    \ * Document  : https://bayashi-cl.github.io/byslib/\n */\n#ifndef LOCAL\n#define\
    \ NDEBUG\n#endif\n\n#include \"core/constant.hpp\"\n#include \"core/int_alias.hpp\"\
    \n#include \"extension/change.hpp\"\n#include \"extension/enumerate.hpp\"\n#include\
    \ \"extension/irange.hpp\"\n#include \"extension/macro.hpp\"\n#include \"io/io.hpp\"\
    \n\n#include \"procon/solver.hpp\"\n#include \"procon/stdlib.hpp\"\n"
  dependsOn:
  - byslib/core/constant.hpp
  - byslib/core/int_alias.hpp
  - byslib/core/traits.hpp
  - byslib/extension/change.hpp
  - byslib/extension/enumerate.hpp
  - byslib/extension/subrange.hpp
  - byslib/extension/irange.hpp
  - byslib/extension/macro.hpp
  - byslib/io/io.hpp
  - byslib/io/printer.hpp
  - byslib/io/scanner.hpp
  - byslib/procon/solver.hpp
  - byslib/procon/stdlib.hpp
  isVerificationFile: false
  path: byslib/template.hpp
  requiredBy:
  - template.cpp
  timestamp: '2022-11-30 18:07:55+09:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - test/AOJ/DSL_2_E.test.cpp
  - test/AOJ/DSL_5_B.test.cpp
  - test/AOJ/DSL_2_A.test.cpp
  - test/AOJ/GRL_1_A.test.cpp
  - test/AOJ/DSL_2_D.test.cpp
  - test/AOJ/CGL_2_B.test.cpp
  - test/AOJ/CGL_2_A.test.cpp
  - test/AOJ/CGL_2_C.test.cpp
  - test/AOJ/CGL_1_C.test.cpp
  - test/AOJ/CGL_1_B.test.cpp
  - test/AOJ/DSL_2_I.test.cpp
  - test/AOJ/GRL_1_C.test.cpp
  - test/AOJ/DSL_5_A.test.cpp
  - test/AOJ/CGL_2_D.test.cpp
  - test/AOJ/DSL_1_A.test.cpp
  - test/AOJ/DSL_2_F.test.cpp
  - test/AOJ/CGL_3_A.test.cpp
  - test/AOJ/DSL_2_B.test.cpp
  - test/AOJ/CGL_1_A.test.cpp
  - test/AOJ/DSL_2_G.test.cpp
  - test/AOJ/DSL_2_H.test.cpp
  - test/AOJ/CGL_3_B.test.cpp
  - test/AOJ/GRL_1_B.test.cpp
  - test/test.test.cpp
  - test/yosupo/staticrmq.test.cpp
  - test/yosupo/point_add_range_sum.test.cpp
  - test/yosupo/static_range_sum.test.cpp
  - test/yosupo/unionfind.test.cpp
  - test/yosupo/range_affine_range_sum.test.cpp
documentation_of: byslib/template.hpp
layout: document
redirect_from:
- /library/byslib/template.hpp
- /library/byslib/template.hpp.html
title: byslib/template.hpp
---