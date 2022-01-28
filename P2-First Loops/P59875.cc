#include <iostream>
using namespace std;

int main () {
	int n1,n2;
	cin >> n1 >> n2;
	int i = 0;
	
	if(n1 != n2){
		while (n1 > n2 and n1 != n2) {
			n1 = n1 - i;
			cout<< n1 << endl;
			i = 1;
			}
		while (n2 > n1) {
			n2 = n2 - i;
			cout<< n2 << endl;
			i = 1;
			}
	}
	
	else cout << n1<< endl;
}