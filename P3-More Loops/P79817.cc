#include <iostream>
using namespace std;

int main () {
	int a,b;
	while (cin >> a >> b){
		int r;
		if (a == 0 and b == 0) cout << "1" << endl;
		else if (a != 0 and b == 0) cout << "1" << endl;
		else if (b >= 2){
			r = a * a;	
			for (int i = 2; i < b; ++i){
			r = r *a;
			}
		cout << r << endl;
		}
		else if ( b == 1) cout << a << endl;
	}
}