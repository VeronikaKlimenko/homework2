#include <iostream>
#include <cmath>
using namespace std;
const float pi=3.14;
int main()
{
  setlocale(0,".1251");
  float kryg_s, kv_s, kv_p, r, a;
  cout << "Vvedit s kryga " << endl ;
  cin >> kryg_s ;
  r = sqrt(kryg_s/pi);
  a = r*2;
  kv_s = pow(a,2);
  kv_p = 4*a;
  cout << "S kvadrata =" << kv_s << endl;
  cout << "P kvadrata =" << kv_p << endl;
  system ("pause>>void");
  return 0;
}