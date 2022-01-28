#include <iostream>
using namespace std;

int llista(int n) {
    string s;
	if(cin >> s) {
		int num = llista (n+1);
		if(n < num/2) {
			cout << s << endl;
		}
		return num;
	}
	else return n;
}

int main() {
	int n = 0;
	llista (n);
}