#include <iostream>
using namespace std;

int main () {
	string w;
	int r = 0;
	
	while ( cin >> w){
		if (w == "hola")r = r + 1;	
	} 
	cout << r << endl;	
}