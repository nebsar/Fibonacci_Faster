/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Eagleye
 *
 * Created on September 11, 2018, 12:17 AM
 */

#include <iostream>
#include <array>
#include <utility>
#include <cmath>

using namespace std;

template<int I>
struct Fib {
    static const int value = Fib<I - 1 > ::value + Fib<I - 2 > ::value;
};

template<>
struct Fib<0> {
    static const int value = 0;
};

template<>
struct Fib<1> {
    static const int value = 1;
};

/*
template<size_t... I>
int fib_impl(index_sequence<I...>, const int i) {
    constexpr array <int, sizeof...(I) > a = {Fib<I>::value...};
    return a[i];
}

int fib(const int i) {
    return fib_impl(make_index_sequence<47>(), i);
}
 */

constexpr int binetFib(const int& n) {

    constexpr auto sqrt_5 = sqrt(5);

    if (n == 0) return 0;
    if (n == 1) return 1;

    return static_cast<int> ((pow(1 + sqrt_5, n) - pow(1 - sqrt_5, n)) / (pow(2, n) * sqrt_5));

}

long long binetFormula(const int& n) {
    return (pow((1 + sqrt(5)), n) - pow((1 - sqrt(5)), n)) / (pow(2, n) * sqrt(5));

}

int main(int argc, char** argv) {

    cout << Fib<45>::value << '\n';

    cout << binetFib(45) << '\n';

    return 0;
}

