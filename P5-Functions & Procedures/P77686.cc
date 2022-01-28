#include <iostream>
using namespace std;

bool es_capicua(int n){
	int aux = n;
	int res = 0;
	
	while (n > 0){
	res = 10*res + (n%10);
	n = n / 10;
	}
	if (res == aux) return true;
	else return false;
}

int main() {
    int n;
    while (cin >> n) cout << (es_capicua(n) ? "true" : "false") << endl;
}