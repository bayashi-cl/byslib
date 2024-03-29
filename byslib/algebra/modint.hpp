#pragma once
#include "../core/constant.hpp"
#include "../core/int_alias.hpp"
#include "../ntheory/prime.hpp"
/**
 * @file modint.hpp
 * @brief Modint
 */
namespace bys {
/**
 * @brief ModInt
 *
 * ac-libraryのmodintをconstexpr化したもの
 * See: https://atcoder.github.io/ac-library/document_ja/modint.html
 *
 * @tparam Modulo 法
 */
template <u32 Modulo> class ModInt {
    u32 _v;

  public:
    static constexpr u32 mod = Modulo;
    // static_assert(is_prime(mod), "Modulo need to be prime.");
    static_assert(mod < (std::numeric_limits<u32>::max() >> 1), "Modulo need to be <2^31.");

    constexpr ModInt() noexcept : _v(0) {}
    template <class T, std::enable_if_t<std::is_unsigned_v<T>, std::nullptr_t> = nullptr>
    constexpr ModInt(T v) noexcept : _v(v % mod) {}
    template <class T, std::enable_if_t<std::is_signed_v<T>, std::nullptr_t> = nullptr>
    constexpr ModInt(T v) noexcept : _v(floormod(v, mod)) {}

    constexpr ModInt pow(i64 n) const noexcept {
        ModInt res = 1, p = *this;
        while (n) {
            if (n & 1) res *= p;
            p *= p;
            n >>= 1;
        }
        return res;
    }
    constexpr ModInt inv() const noexcept {
        if constexpr (is_prime(mod)) {
            return pow(mod - 2);
        } else {
            return inv_gcd(_v, mod).second;
        }
    }

    constexpr ModInt& operator+=(const ModInt rhs) noexcept {
        _v += rhs._v;
        if (_v >= mod) _v -= mod;
        return *this;
    }
    constexpr ModInt& operator-=(const ModInt rhs) noexcept {
        if (rhs._v > _v) _v += mod;
        _v -= rhs._v;
        return *this;
    }
    constexpr ModInt& operator*=(const ModInt rhs) noexcept {
        u64 z = _v;
        z *= rhs._v;
        _v = (u32)(z % mod);
        return *this;
    }
    constexpr ModInt& operator/=(const ModInt rhs) noexcept { return *this = *this * rhs.inv(); }

    constexpr ModInt operator+() const noexcept { return *this; }
    constexpr ModInt operator-() const noexcept { return ModInt() - *this; }
    constexpr ModInt& operator++() noexcept {
        _v++;
        if (_v == mod) _v = 0;
        return *this;
    }
    constexpr ModInt& operator--() noexcept {
        if (_v == 0) _v = mod;
        --_v;
        return *this;
    }
    constexpr ModInt operator++(i32) noexcept {
        ModInt res = *this;
        ++*this;
        return res;
    }
    constexpr ModInt operator--(i32) noexcept {
        ModInt res = *this;
        --*this;
        return res;
    }

    friend constexpr ModInt operator+(const ModInt& lhs, const ModInt& rhs) noexcept { return ModInt(lhs) += rhs; }
    friend constexpr ModInt operator-(const ModInt& lhs, const ModInt& rhs) noexcept { return ModInt(lhs) -= rhs; }
    friend constexpr ModInt operator*(const ModInt& lhs, const ModInt& rhs) noexcept { return ModInt(lhs) *= rhs; }
    friend constexpr ModInt operator/(const ModInt& lhs, const ModInt& rhs) noexcept { return ModInt(lhs) /= rhs; }
    friend constexpr bool operator==(const ModInt& lhs, const ModInt& rhs) noexcept { return lhs._v == rhs._v; }
    friend constexpr bool operator!=(const ModInt& lhs, const ModInt& rhs) noexcept { return lhs._v != rhs._v; }

    friend std::istream& operator>>(std::istream& is, ModInt& m) noexcept { return is >> m._v; }
    friend std::ostream& operator<<(std::ostream& os, const ModInt& m) noexcept { return os << m._v; }
};
using Mint = ModInt<MOD>;
using Mint7 = ModInt<MOD7>;
using Mint9 = ModInt<MOD9>;
}  // namespace bys
