#include <iostream>
using namespace std;


int max4(int a, int b, int c, int d){
	if (a >= b and a >= c and a >= d) return a ;
	
	if (b >= a and b >= c and b >= d) return b ;
	
	if (c >= a and c >= b and c >= d) return c ;
	
	else return d ;
}

int main() {
    int a, b, c, d;
    while (cin >> a >> b >> c >> d) {
        cout << max4(a, b, c, d) << endl;
    }   
}