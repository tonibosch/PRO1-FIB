#include <iostream>
using namespace std;

int main() {
	int b, n, t, x, r = 0, c = 0;
	cin >> b >> n >> t;

	for (int i = 0; i < t; ++i) {
		cin >> x;
		r += x-b;
		if (n+r > 0) ++c;
	}
	cout << c << endl;
}