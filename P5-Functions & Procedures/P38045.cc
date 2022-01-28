#include <iostream>
#include <cmath>
using namespace std;

int quadrat (int n){
	return n * n;
	}

double arrel_quadrada (int n){
	return sqrt (n);
	}

int main ( ){
	cout.setf(ios::fixed);
    cout.precision(6);
	int n;
	while (cin >> n)  {
		
		cout << quadrat (n) << " " << arrel_quadrada (n) << endl;
		
	}
}