#include <iostream>
using namespace std;

bool divisors_odd(int x, int y){
    if(x == 0) return true;
    else if(y%(x%10) == 0) return divisors_odd(x/100,y);
    else return false;
}

int main () {
    int x,y;
    while (cin >> x >> y){
        if (divisors_odd(x,y)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

