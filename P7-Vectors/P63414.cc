#include <iostream>
#include <vector>
using namespace std;

int main () {
	int n,x;
	cin >> n;
	vector<int> sequencia(1001,0);
	
	for (int i = 0; i < n; ++i){
		cin >> x;
		x = x- 1000000000;
		sequencia[x] = sequencia[x] + 1;
	}

	for (int i= 0; i < sequencia.size() ; ++i){
		if (sequencia[i] != 0) cout << 1000000000+i << " : " << sequencia[i] << endl;
	}
}