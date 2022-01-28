#include <iostream>
using namespace std;

int main () {
	int n;
	cin>> n;
	int sol; 
		
	while (n >= 16){ //Base 16
	
		sol = n % 16;
		n = n / 16;
		if (sol == 10)
			cout << "A";
		else if (sol == 11)
			cout << "B";
		else if (sol == 12)
			cout << "C";
		else if (sol == 13)
			cout << "D";
		else if (sol == 14)
			cout << "E";
		else if (sol == 15)
			cout << "F";
		else cout<< sol;
		
    }
        if (n == 10)
			cout << "A" << endl;
		else if (n == 11)
			cout << "B" << endl;
		else if (n == 12)
			cout << "C" << endl;
		else if (n == 13)
			cout << "D" << endl;
		else if (n == 14)
			cout << "E" << endl;
		else if (n == 15)
			cout << "F" << endl;
        
		else cout<< n << endl;	
}

