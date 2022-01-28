#include <iostream>
using namespace std;

int main () {
	int n;
	bool first = true;

	while (cin >> n){
		if (not first) cout << endl;
		first = false;
		
		for (int f = 0; f < n ; ++f){
			
			for (int c = 0; c < n ; ++c) cout << n;
			cout << endl;
		}
	
	}	
}