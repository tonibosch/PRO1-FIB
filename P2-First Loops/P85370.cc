#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    double n,inter,t;
    cin >> n >> inter >> t;
    string type;
    cin>> type;
    double lvp = inter/100;
    if(type == "simple") {
    	cout << n * ( 1 + lvp*t) << endl;
	}
	else if (type == "compound") {
		double result = 0;
		double var = 1;
		for(int i = 0; i < t; ++i){
			var = var * (1+lvp);
		}
		result = n * var;
		cout << result << endl;
	}
}
