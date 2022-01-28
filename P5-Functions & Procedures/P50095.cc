#include <iostream>
using namespace std;

bool primer (int n){
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    while (cin >> n and primer(n)){
        bool nextprimer = false;
        while (not nextprimer){
            n += 1;
            nextprimer = primer(n);
        }
        cout << n << endl;
    }
}