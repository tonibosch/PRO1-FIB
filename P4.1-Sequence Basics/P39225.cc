#include <iostream>
using namespace std;

int main (){
	int i;
	cin >> i;
	
	for (int j = 1; j <= i; ++j ){
		int x;
		cin >> x;
		if (j == i) cout << "A la posicio " << i << " hi ha un " << x << "." << endl;
	}	
}