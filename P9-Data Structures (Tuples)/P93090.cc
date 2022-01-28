#include <iostream>
using namespace std;

struct Fraccio {
         int num, den;   // sempre estrictament positius
};

//Pre:
//Post: Funcio que calcula el maxim comu divisor
int mcd(int a, int b) {
    while(b != 0) {
        int r = a%b;
        a = b;
        b = r;
    }
	return a;
}

//Funcio que retorna la fraccio sense factors comuns en el numerador i el denominador
void Reduir(Fraccio& r) {
    int m = mcd(r.num, r.den);
    r.num = r.num/m;
    r.den = r.den/m;
}

//Funcio que fa la suma de les fraccions x i y: Retorna la seva suma reduida
Fraccio suma(const Fraccio& x, const Fraccio& y) {
    Fraccio r;
    r.num = x.num * y.den + y.num * x.den;
    r.den = x.den * y.den;
    
    Reduir(r);
    return r;
}
    
int main () {
    Fraccio x;
    Fraccio y;
    char c;
    cin >> x.num  >> c >> x.den; 
    cin >> c;
    while (c != '=') {
        cin >> y.num >> c >> y.den;
        Fraccio r = suma(x,y);
        x.num = r.num;
        x.den = r.den;
        cin >> c;
    }
    cout << x.num << "/" << x.den << endl;
}

    
