#include <iostream>
#include <cmath>
const float pi=3.14;
int main ()
{
    setlocale(0,".1251"); 
    float x;
    std::cout<<"Vvedite a gradysov" << std::endl;
    std::cin >> x;
    float a_grad= pi/180;
    float z1= (1-2*pow(sin(x*a_grad),2))/(1+sin(2*x*a_grad));
    std::cout<<"z1= "<< z1 << std::endl;
    float z2= (1-tan(x*a_grad))/(1+tan(x*a_grad));
    std::cout<<"z2= "<< z2 << std::endl;
    system ("pause>>void");
    return 0;

}