#include <iostream>
#include <string>

using namespace std;

int main () {

 cout.setf(ios::fixed);
 cout.precision(6);
     
int n;
cin >> n;

	for (int i = 0 ; i < n ;++i ){
		string w;
		cin>> w;
		if ( w == "rectangle"){
			 double n1,n2;
			 cin >> n1 >> n2;
			 cout << n1 * n2 <<endl;
		}
		else if ( w == "cercle"){
			 double n1;
			 cin >> n1;
			 double sol = 3.14159265358979323846264338327950288419716939937510;
			 sol = (n1 * n1) * sol; 
			 cout << sol << endl;
		}
	}
}

