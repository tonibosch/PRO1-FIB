#include <iostream>
using namespace std;

int main () {
	int n;
	cin>> n;
	int sol;

	if ( n == 0 ) cout << n;
			
	while (n != 0){
		sol = n % 2;
		n = n / 2;
		cout<<sol;
		}
		cout << endl;
}

