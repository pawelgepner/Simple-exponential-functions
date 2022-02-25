#include <iostream>
#include <cstdint>

double exp_11d(double x) {
    int64_t k1=0x171547652b82fe;
    int64_t k2=0x3fef4d18e0162e5d;
    int64_t z = x * k1 +k2;
    double y= *(double*) & z;
    return y;
}

int main()
{
    double x = 0.0;
    std::cout << "Input X:" << std::endl;
    std::cin >> x;
    double y = exp_11d(x);
    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;
}