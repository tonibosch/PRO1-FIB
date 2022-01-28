#include <iostream>
using namespace std;

int main () {
	char a;
	cin >> a;
	bool found = false;
	
	while (a != '.'){
		if (a == 'a') found = true;
		cin >> a;
	}
	if (found) cout << "si" << endl;
	else cout << "no" << endl;
}