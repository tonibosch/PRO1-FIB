#include <iostream>
using namespace std;

int main () {
    int b,n;
    int i = 0;
    
    while (cin >> b >> n){
        while (n != 0){
        n = n / b;
        ++i;
        }
        cout << i << endl;
        i = 0;
    }
}