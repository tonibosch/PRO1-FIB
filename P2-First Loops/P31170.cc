#include <iostream>
using namespace std;

int main () {
	int n;
	cin >> n;
	int aux = 1;
	while (aux <= 10) {		
		cout << n << '*' << aux << ' ' << '=' << ' ' << n * aux << endl;
		aux = aux +1;
	}
}

