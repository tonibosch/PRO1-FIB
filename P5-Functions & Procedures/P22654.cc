#include <iostream>
using namespace std;

void descompon(int n, int& h, int& m, int& s){
	h = n / 3600;
	n = n % 3600;
	m = n / 60;
	n = n % 60;
	s = n;
}

int main() {
    int n, h, m, s;
    while (cin >> n) {
        descompon(n, h, m, s);
        cout << h << " " << m << " " << s << endl;
    }
}