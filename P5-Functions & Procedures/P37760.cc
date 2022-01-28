#include <iostream>
#include <cmath>
using namespace std;

int main (){
	cout.setf(ios::fixed);
    cout.precision(6);

	double d;
	while (cin >> d){
		d = d*M_PI / 180;
		cout << sin (d) << " " << cos (d) << endl;
	}
}