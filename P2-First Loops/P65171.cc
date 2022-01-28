#include <iostream>
using namespace std;

int main() {
	double n, x;
	cin >> n;
	double variacion = 0;
	double s = 0;
	while (cin >> x) {
		variacion += (1.0f / (n - 1)) * x *x;
		s += x;
	}
	variacion -= (1.0f / (n * (n - 1))) * s * s;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << variacion << endl;
}