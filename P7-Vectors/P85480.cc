#include <iostream>
#include <vector>
using namespace std;

bool primer (int n){
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i){
        if (n % i == 0) return false;
    }
    return true;
}
bool suma_dos_digits_dona_primer (vector<int> v){
	int mida_v = v.size();	
	int j = 0;
	while (j < mida_v){
		int k = 0;
		while (k < mida_v){
			if (primer(v[k]+v[j]) and k != j) return true;
			++k;
			}
			++j;
		}
	return false;
}

int main () {
	int n;
	while (cin >> n){
		vector<int> v(n);
		int mida_v = v.size();
		for (int i = 0; i < mida_v; ++i) cin >> v[i]; 
	
		if (suma_dos_digits_dona_primer(v)) cout << "si" << endl;
		else cout << "no" << endl;	
	}
}