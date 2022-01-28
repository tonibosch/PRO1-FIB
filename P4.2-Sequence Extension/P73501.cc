#include <iostream>
using namespace std;

int main (){
	int n;
	cin >> n;
	int r;
	for (int i = 0; i < n; ++i){
		int n1;
		cin >> n1;
		if(n1 != 0){
			int n2;
	   		cin >> n2;
		
			while (n2 != 0){
				if (n1 < n2) r = r + 1;
				n1 = n2;
				cin >> n2;
			}
		}
	cout << r << endl;
	r = 0;
			
	}
}