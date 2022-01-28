#include <iostream>
using namespace std;

int compara(int d1, int m1, int a1, int d2, int m2, int a2){
    if(d1 == d2 and m1 == m2 and a1 == a2) return 0;
    if((a1>a2) or (a1 == a2 and m1>m2) or (d1>d2 and m1 == m2 and a1 == a2)) return 1;
    else return -1;
}


int main () {
    int d1, m1, a1, d2, m2, a2;
    char c1,c2,c3,c4;
    while (cin >> d1 >> c1 >> m1 >> c2>> a1 >> d2 >> c3 >> m2 >> c4 >> a2){ 
    if(compara(d1, m1, a1, d2, m2, a2) == -1)cout << "anterior" << endl;
    if(compara(d1, m1, a1, d2, m2, a2) == 1) cout << "posterior" << endl;
    if(compara(d1, m1, a1, d2, m2, a2) == 0) cout << "iguals" << endl;
    }
}