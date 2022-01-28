#include <typeinfo>
#include <iostream>
#include <cmath>
using namespace std;

struct Racional {
    int num, den;
};

int mcd(int a, int b) {
    while(b != 0) {
        int r = a%b;
        a = b;
        b = r;
    }
	return a;
}

void reduce(Racional& c) {
    int m = mcd(c.num, c.den);
    // abs returns the absolute value
    c.num= c.num/m;
    c.den= c.den/m;
    // r.den>0 is preserved
}

Racional racional(int n, int d){
    Racional c;
    c.num = n;
    c.den = d;
    
    if(c.num == 0) c.den = 1;
    else reduce(c);
    if(c.den < 0){
        c.den = 0 - c.den;
        c.num = 0 - c.num;
    }
    return c;
}

