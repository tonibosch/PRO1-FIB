#include <iostream>
using namespace std;

bool c_frac(int n1, int d1, int n2, int d2){
	if ( (double(n1) / d1) < (double(n2) / d2) ) return true;
	else return false;
}

int main() {
    int n1, d1, n2, d2;
    while (cin >> n1 >>  d1 >> n2 >> d2) {
        if (c_frac(n1,d1,n2,d2)) cout << "si" << endl;
        else cout << "no" << endl;
    }   
}