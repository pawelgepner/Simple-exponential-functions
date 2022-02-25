#include "half.hpp"
#include <iostream>
#include <cstdint>

using half = half_float::half;

half exp_11h(half x) {
    int16_t z = x * 0x05c5 + 0x3bd4;
    half y = *(half*) & z;
    return y;
}

int main()
{
    half x{0.0f};
    std::cout << "Input X:" << std::endl;
    std::cin >> x;
    half y = exp_11h(x);
    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;
}