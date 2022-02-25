#include <iostream>
#include <cstdint>

float exp_0f(float x)
{
    int k=0x00b8aa3b, m=0x3f800000;
    int z=x*k+m;
    float y = *(float*) & z;
    return y;
}

int main()
{
    float x = 0.0;
    std::cout << "Input X:" << std::endl;
    std::cin >> x;
    float y = exp_0f(x);
    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;
}