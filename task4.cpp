#include <iostream>
#include <cmath>
const float k=7.2;
int main()
{
float x;
    std::cout<<"k konstanta=" << k << std::endl;
    std::cout<<"Vvedite x" << std::endl;

    std::cin >> x;
    float c = atan(abs(x));
    std::cout<<"c=" << c << std::endl;
    float a=pow(k,2)+c;
    std::cout<<"a=" << a << std::endl;
    float y= pow(sin(a),3)+pow(cos(x),2);
    std::cout<<"y=" << y << std::endl;

    system ("pause>>void");
    return 0;
}