#include <iostream>
using namespace std;

int main () {
	char x;
	cin >> x;
	
	if('0' <= x and x <= '9') cout << "digit" << endl;
	
	else if(('A' <= x and x <= 'Z') or ('a' <= x and x <= 'z')) cout << "lletra" << endl;
	
	else cout << "res" << endl;
}