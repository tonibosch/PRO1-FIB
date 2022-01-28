#include <iostream>
using namespace std;

int main () {
	char h,o,l;
	char a = ' ';
	bool hola = false;
	
	cin >> h >> o >> l;
	
	while (not hola and cin >> a and a != ' '){
		if (h == 'h' and o == 'o' and l == 'l' and a == 'a') hola = true;
			h = o;
			o = l;
			l = a;
		}
		if (hola) cout << "hola" << endl;
		else cout << "adeu" << endl;
}