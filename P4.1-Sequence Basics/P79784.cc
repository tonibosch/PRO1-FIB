#include <iostream>
using namespace std;

int main () {
	int n1 = 0, n2 = 0;
	char a;
	
	while (cin >> a){
		if( a == 'n') n2 = n2 - 1;
		if( a == 's') n2 = n2 + 1;
		if( a == 'e') n1 = n1 + 1;
		if( a == 'o') n1 = n1 - 1;
		
	}
	cout << "(" << n1 << ", " << n2 << ")" << endl;
}