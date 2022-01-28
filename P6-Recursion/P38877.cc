#include <iostream>
using namespace std;

void girparaules4(int& n){
	string w;
	if(cin >> w){
		girparaules4(n);
			if(n > 0){
				cout << w << endl;
				n--;
			}
	}
}

int main (){
	int n;
	cin >> n;
	girparaules4 (n);
}