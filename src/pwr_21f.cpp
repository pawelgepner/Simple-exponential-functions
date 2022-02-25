#include <iostream>
#include <cstdint>

float pwr_21f(float x) {
    int z=x*0x00800000+0x3f800000;
    // only 0x00b8aa3b from exp_21f
    // is changed to 0x00800000
    int zii=z&0x7f800000;
    int zif=z&0x007fffff;
    float d1=0.40196114e-7f;
    float d2=0xf94ee7+zif;
    float d3=0x560e +zif;
    d2=d1*d2;
    zif=d2*d3;
    zii |=zif;
    float y=*(float*) & zii;
    return y;
}

int main()
{
    float x = 0.0;
    std::cout << "Input X:" << std::endl;
    std::cin >> x;
    float y = pwr_21f(x);
    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;
}