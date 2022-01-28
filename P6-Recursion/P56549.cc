#include <iostream>
using namespace std;

void canvibase (int n, int base){
    if (n >= base) canvibase(n/base, base);
    if (n%base < 10) cout << n%base;
    else cout << char('A'+ n%base -10);
    }

int main (){
    int n;
    while (cin >> n){
        cout << n << " = ";
        canvibase(n,2);
        cout << ", ",
        canvibase(n,8);
        cout << ", ";
        canvibase(n,16);
        cout << endl;
    }
}