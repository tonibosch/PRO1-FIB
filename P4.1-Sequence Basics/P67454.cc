#include <iostream>
using namespace std;

int main () {
	char a;
	cin >> a;
	int r = 0;
	
	while (a != '.'){
		if (a == 'a') ++r;
		cin >> a;
	}
	cout << r << endl;	
}