#include <typeinfo>
#include <iostream>
#include <cmath>
using namespace std;

struct Punt {
    double x,y;
}; 

double distancia(const Punt& a, const Punt& b){
    double res1,res2,res3,res4;
    res1 = b.x - a.x;
    res2 = b.y - a.y;
    res3 = pow(res1,2);
    res4 = pow(res2,2);
    return sqrt(res3 + res4);
}


int main() {

  {   // vigilar el tipus Punt

        struct Punt_cntrl {
            double x, y;
        };

        Punt ru;
        Punt_cntrl rc;

        // diagnòstics en temps de compilació  
        ru.x = rc.x;  
        ru.y = rc.y;  

        // diagnòstics en temps d'execució
        if (sizeof(ru)!=sizeof(rc))     throw string("Sembla que 'Punt' no està ben definit");
        if (typeid(ru.x)!=typeid(rc.x)) throw string("Sembla que 'Punt.x' no està ben definit");
        if (typeid(ru.y)!=typeid(rc.y)) throw string("Sembla que 'Punt.y' no està ben definit");
  }


  cout.setf(ios::fixed);
  cout.precision(6);

  double x1, y1, x2, y2;
  while (cin >> x1 >> y1 >> x2 >> y2) {
    Punt a, b;
    a.x = x1;
    a.y = y1;
    b.x = x2;
    b.y = y2;
    cout << distancia(a, b) << endl;
  }
}
