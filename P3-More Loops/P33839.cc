#include <iostream>
using namespace std;

int main () {
	int n;
	while (cin >> n){
			int sdig = 0;
			int r = n;
		while (n > 0){
			sdig = sdig + (n % 10);
			n = n / 10;	
		}
		cout << "La suma dels digits de " << r << " es " << sdig << "." << endl;
	}
}