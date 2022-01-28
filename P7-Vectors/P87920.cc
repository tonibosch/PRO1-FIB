#include <iostream>
#include <vector>
using namespace std;

int main (){
	int n;
	while(cin >> n) {
		vector<int> v(n);
		int suma = 0;
		for (int i = 0; i < n; ++i) {
			cin >> v[i];
			suma = suma + v[i];
		}
	
		bool found = false;
		
		for (int i = 0; i < n and not found; ++i ){
			if (v[i] == (suma-v[i])) found = true;
		}
		if (found) cout << "YES" << endl;
		else cout << "NO" << endl;
		
	}
}