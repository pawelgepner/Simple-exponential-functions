#include <iostream>
#include <cstdint>

float sigm_21f(float x) {
    float y;
    int l=5516653, j=2828550;
    int k=14468, n=23;
    int z=-x*0xb8aa3b+0x3f800000;
    int zii=z&0x7f800000;
    int zif=z&0x007fffff;
    z=l+(int)((j*(int64_t)zif)>>n);
    zif=k+(int)((zif*(int64_t)z)>>n);
    zii |=zif;
    y=*(float*)&zii;
    y=y+1.;
    z=*(int*)&y;
    z=0x7eb504f3-z;
    float ys=*(float*)&z;
    ys=1.39275f*ys;
    return ys;
}

int main()
{
    float x = 0.0;
    std::cout << "Input X:" << std::endl;
    std::cin >> x;
    float y = sigm_21f(x);
    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;
}