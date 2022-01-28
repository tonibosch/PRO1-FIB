#include <iostream>
using namespace std;

void girllistpar2 (string w){
	if (cin >> w and w != "fi"){
		girllistpar2 (w);
		cout << w << endl;
	}
}

int main (){
	string w;
	girllistpar2 (w);	
}