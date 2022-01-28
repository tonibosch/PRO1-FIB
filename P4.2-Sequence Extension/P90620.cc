#include <iostream>
using namespace std;

int main () {
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	bool pic_found = false;
	
	while (n3 != 0){
		if((n2 > 3143) and (n1 < n2) and (n3 < n2)) pic_found = true;
		n1 = n2;
		n2 = n3;
		cin >> n3;
	}
	if (pic_found) cout << "SI" << endl;
	else cout << "NO" << endl;
}