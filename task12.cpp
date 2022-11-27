#include <iostream>
using namespace std;
int main()
{setlocale(0,".1251");
    double prod1, prod2, prod3, t, V;
    cout << "Vvedit prodyktuvnist 1 trybu "  << endl ;
    cin >> prod1; 
    cout << "Vvedit prodyktuvnist 2 trybu "  << endl ;
    cin >> prod2;
    cout << "Vvedit prodyktuvnist 3 trybu "  << endl ;
    cin >> prod3;
    cout << "Vvedit chas robotu "  << endl ;
    cin >> t;
    V = (prod1+prod2+prod3)*t;
    cout << "Voda v baseini " << V << endl ;
    system ("pause>>void");
return 0;

}