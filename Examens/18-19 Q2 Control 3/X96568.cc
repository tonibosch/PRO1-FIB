#include <iostream>
using namespace std;

// Pre: x>0
int product_of_consecutive(int x) {
    int k = (x+1)/2;
    while (k*(k+1) > x) {
        k = (k+1)/2;
    }
    while (k*(k+1) < x) {
        ++k;
    }
    if (k*(k+1) > x) return -1;
    else return k;
}

int main() {
   int x;
   while (cin >> x) {
      int k = product_of_consecutive(x);
      if (k == -1) cout << x << " NO" << endl;
      else cout << x << " = " << k << "*" << k+1 << endl;
   }
}