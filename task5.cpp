#include <iostream>
#include <cmath>
int main()
{   
    float n,y;
    std::cout<<"Vvedite y" << std::endl;
    std::cin >> y;
    std::cout<<"Vvedite n" << std::endl;
    std::cin >> n;
    if (sin(y)==0){
        std::cout<<"sin(y)=0, pomilka" << std::endl;
    } else{
        float result=pow(y,2)+((0.5*n+4.8)/sin(y));
        std::cout<<"result= "<< result << std::endl;

    }
    system ("pause>>void");
    return 0;
}