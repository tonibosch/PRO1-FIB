#include <iostream>
using namespace std;

int main () {
	char f;
	cin >> f;
	int a = 0;

while ( f != '.') {
	if (f == 'a') ++a;
	cin >> f;	
}
cout << a << endl;
}