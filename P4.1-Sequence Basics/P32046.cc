#include <iostream>
using namespace std;

int main () {
	int first;
	cin >> first;
	int next;
	int total = 0;
	
	cout << "nombres que acaben igual que " << first << ':'<< endl;
	
	while (cin >> next) {
		if(first % 1000 == next % 1000){
			cout << next << endl;
			total = total + 1;
			}
	}
	
	cout << "total: " << total << endl;
}