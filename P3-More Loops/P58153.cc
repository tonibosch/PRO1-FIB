#include <iostream>
using namespace std;

int main () {
	 cout.setf(ios::fixed);
     cout.precision(10);
     
	double n, m;
	
	while (cin >> n >> m){
		double r1 = 0;

        double dif = n - m;
        for (int i = 1; i <= dif ; ++i) {
	 		r1 = r1 + ( 1.0 / (m + i ));
	 	}
		
	cout << r1 << endl;
	
	}
}