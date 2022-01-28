#include <iostream>
using namespace std;

void girllistpar (string w){
	while (cin >> w){
		girllistpar(w);
		cout <<  w << endl;
	}
}

int main (){
	string w;
	girllistpar(w);
	
}