#include <iostream>
using namespace std;

int main () {
	int n;
	int pos = 0, sol;
	bool found = false;
	
	while (not found and cin >> n){
		if ( n % 2 == 0){
			sol = pos + 1;
			found = true;
		}
		
		pos = pos + 1;	
	}
	
 if (found)	cout << sol << endl;
}