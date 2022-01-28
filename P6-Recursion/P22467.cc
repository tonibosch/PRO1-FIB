#include <iostream>
using namespace std;

bool primer (int n){
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i){
        if (n % i == 0) return false;
    }
    return true;
}
int sdig (int n){
	int sum = 0;
	while (n >= 10){
		sum = sum + (n%10);
		n = n / 10;
	}
	return sum + n;
}
		
bool es_primer_perfecte(int n){
	if (n < 10 and primer(n) == true) return true;
	else if (primer(n) == true) return es_primer_perfecte (sdig(n));
	else return false;
}

int main() {
    int n;
    while (cin >> n) cout << (es_primer_perfecte(n) ? "true" : "false") << endl;
}