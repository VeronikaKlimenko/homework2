#include <iostream>
#include <cmath>
using namespace std;
struct point
{
    float x, y;
    float length (point pt) { return sqrt(pow(pt.x-x,2)+pow(pt.y-y,2)); };
};
int main ()
{setlocale(0,".1251");
    point A = {0,0};
    point B = {11,10};
    point C = {-11,12};
    float ab = A.length(B);
    cout<<"ab="<<ab <<endl;
    float bc = B.length(C);
    cout<<"bc="<<bc <<endl;
    float ca = C.length(A);
    cout<<"ca="<<ca <<endl;
    float p= (ab+bc+ca)/2;
    cout<<"polyperimetr="<<p <<endl;
    float S= sqrt(p*(p-ab)*(p-bc)*(p-ca));
    cout<<"S="<<S <<endl;
    float h= (2*S)/bc;
    cout<<"h z vershunu a "<<h <<endl;
    float bis= (2*sqrt(bc*ca*p*(p-ab)))/(bc+ca);
    cout<<"w z vershunu c "<<bis <<endl;
    

    system ("pause>>void");
    return 0;

}