#include <iostream>
using namespace std;

// Pre: n >= 0
// Post: retorna la suma dels dígits parells de n
int suma_parells(int n) {
  //Cas base:
   if (n == 0) return 0;
   //Case recursiu
   int s = suma_parells(n/10);
   //s és la suma de digits parells de n/10
   if((n%10)%2 == 0) s+=n%10;
   return s;
}

int main() {
    int x;
    while (cin >> x) cout << suma_parells(x) << endl;
}