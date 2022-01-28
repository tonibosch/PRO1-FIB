#include <iostream>
using namespace std;

char codificat(char c, int k){
	if('a' <= c and c <= 'z'){
	c = 'A' + (c-'a'+k) % 26;
	return c;
	}
	else if(c == '_' ) return ' ';
	else return c;
}

int main () {
	int k;
	while (cin >> k){
		char c;
		cin >> c;
		while (c != '.'){
			cout <<	codificat (c,k);
			cin >> c;
		}
	cout << endl;
	}
}