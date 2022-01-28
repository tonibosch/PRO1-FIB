#include <iostream>
using namespace std;

int main () {
	string primer;
	cin >> primer;
	
	string next;
	int length = 1;
	int longest = 1;
	
	
	while (cin >> next){
		if( primer == next){
			length = length + 1;
			if (length > longest) longest = length;
		}
		
		else length = 0; 
	}
	cout << longest << endl;
}