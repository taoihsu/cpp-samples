#pragma once

// -*- C++ -*-

// The MIT License (MIT)
//
// Copyright (c) 2017 Alexander Samoilov
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include <cmath>
#include <limits>       // std::numeric_limits

template<typename T>
constexpr T EPS = T(1e-2);

template<typename T>
constexpr T ACC = T(1e-9);

template<typename T>
constexpr T MINUS_ONE = T(-1);

template<typename T>
constexpr T ZERO = T(0);

template<typename T>
constexpr T HALF = T(0.5);

template<typename T>
constexpr T ONE = T(1);

template<typename T>
constexpr T TWO = T(2);

template<typename T>
constexpr T THREE = T(3);

template<typename T>
constexpr T FOUR = T(4);

template<typename T>
constexpr T PI = T(M_PI);

template<typename T>
constexpr T TWO_PI = PI<T> * TWO<T>;

template<typename T>
constexpr T FOUR_PI = PI<T> * FOUR<T>;

template<typename T>
constexpr T NaN = std::numeric_limits<T>::quiet_NaN();
