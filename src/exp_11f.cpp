#include <iostream>
#include <cstdint>

float exp_11f(float x)
{
    int k=0xb8aa3b, m=0x3f7a68c7;
    int32_t z=x*k+m;
    float y=*(float*) & z;
    return y;
}

int main()
{
    float x = 0.0;
    std::cout << "Input X:" << std::endl;
    std::cin >> x;
    float y = exp_11f(x);
    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;
}