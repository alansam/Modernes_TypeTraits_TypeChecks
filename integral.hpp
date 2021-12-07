
#pragma once
#ifndef INTEGRAL_HPP_
#define INTEGRAL_HPP_

#include <iostream>
#include <type_traits>

namespace rgr {

template<class T, T v>
struct integral_constant {
  static constexpr T value = v;
  typedef T value_type;
  typedef integral_constant type;
  constexpr operator value_type() const noexcept { return value; }
  constexpr value_type operator()() const noexcept { return value; } //since c++14
};

typedef integral_constant<bool, true> true_type;                       // (2)
typedef integral_constant<bool, false> false_type;

template <class T>
struct is_integral : public false_type{};

template <>
struct is_integral<bool> : public true_type{};

template <>
struct is_integral<char> : public true_type{};

template <>
struct is_integral<signed char> : public true_type{};

template <>
struct is_integral<unsigned char> : public true_type{};

template <>
struct is_integral<wchar_t> : public true_type{};

template <>
struct is_integral<short> : public true_type{};

template <>
struct is_integral<int> : public true_type{};                              // (3)

template <>
struct is_integral<long> : public true_type{};

template <>
struct is_integral<long long> : public true_type{};

template <>
struct is_integral<unsigned short> : public true_type{};

template <>
struct is_integral<unsigned int> : public true_type{};

template <>
struct is_integral<unsigned long> : public true_type{};

template <>
struct is_integral<unsigned long long> : public true_type{};

} /* namespace rgr */

#endif /* INTEGRAL_HPP_ */
