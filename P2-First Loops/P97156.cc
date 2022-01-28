#include <iostream>
using namespace std;

int main () {
	int n1,n2;
	cin >> n1>>n2;
	
	while(n2 > n1) {
			cout<<n1<<",";
			++n1;		
	}
if (n2 == n1) cout << n2;
cout << endl;
}
