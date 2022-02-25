#include <iostream>
#include <cstdint>

float exp_24f(float x) {
    int z=x*0xb8aa3b+0x3f800000;
    int zii=z&0x7F800000;
    int zif=z&0x007FFFFF;
    float y,d1,d2,d3;
    if(zif>0x00400000)
        if(zif>0x00600000)
        {  //fourth segment
            d1=0.52496276e-7f;
            d2=0x81354a+zif;
            d3=0x10a440+zif;
        }
        else
        {  //third segment
            d1=0.4414393e-7f;
            d2=0xcdf4b4+zif;
            d3=0x3e4d6+zif;
        }
    else
    if(zif>0x00200000)
    {  //second segment
        d1=0.37120473e-7f;
        d2=0x1113a74+zif;
        d3=0x9f16+zif;
    }
    else
    {  // first segment
        d1=0.31214472e-7f;
        d2=0x151d842+zif;
        d3=328.83582f+zif;
    }
    d2=d1*d2;
    zif=d2*d3;
    zii |=zif;
    y=*(float*)&zii;
    return y;
}

int main()
{
    float x = 0.0;
    std::cout << "Input X:" << std::endl;
    std::cin >> x;
    float y = exp_24f(x);
    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;
}