#include <iostream>
using namespace std;

bool is_univariate(int n){
    if (n < 10) return true;
    else {
        while (n >= 10){
            if(n%10 != (n/10)%10) return false;
            n = n / 10;
        }
        return true;
    }
}

int main (){
    int n;
    int i = 1;
    cin >> n;
    bool trobat = false;
    while (n != -1 and not trobat){
        is_univariate(n);
        if(is_univariate(n)) trobat = true;
        else{
            cin >> n;
            ++i;
        }
    }
    if (trobat) cout << i << endl;
    else cout << '0' << endl;
}