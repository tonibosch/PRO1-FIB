#include <iostream>
#include <vector>
using namespace std;

void invertir( vector<int>& v, int n){
		int aux;
	for (int i = 0; i < n/2; ++i){
		aux = v[i];
		v[i] = v[n-1-i];
		v[n-1-i] = aux;
	}
	
}

int main (){
	int n;
	while (cin >> n){
		if (n == 0) cout << endl;
		else{
		vector <int> v (n);
	
		for (int i = 0; i < n; ++i){
			int x;
			cin >> x;
			v[i] = x;	
		}
		invertir(v,n);
		for (int i = 0; i < n-1; ++i) cout << v[i] << " ";
		cout << v[n-1] << endl;
		}
	}
}