#include <iostream>
using namespace std;

int calcres(){
	char c;
	cin >> c;
	if ('0' <= c and c <= '9') return c-'0';
	else {
		int a = calcres();
		int b = calcres();
		if (c == '+') return(a+b);
		else if (c == '-') return(a-b);
		else return (a*b);
		
	}
}

int main () {
	cout << calcres() << endl;	
}