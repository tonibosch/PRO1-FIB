#include <iostream>
using namespace std;

int main () {
 cout.setf(ios::fixed);
 cout.precision(2);
	double n;
	double n2 = 0;
	double i = 0;

	
	while (cin >> n ) {
		n2 = n2 + n;
		++i;		
	}
	
	cout << n2/i  << endl;

}

