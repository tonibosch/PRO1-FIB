#include <iostream>
using namespace std;

int main () {
	int n;
	cin>> n;
	int sol;

	while (n >= 10){
		sol = n % 10;
		cout<<sol;
		n = n / 10;
		}
		cout<<n<<endl;

}

