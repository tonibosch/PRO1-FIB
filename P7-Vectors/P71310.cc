#include <iostream>
#include <vector>
using namespace std;

double producte_escalar(const vector <double>& u, const vector <double>& v) {
	double res = 0;
	for (int i = 0; i < u.size(); i++) {
		res += u[i] * v[i];
	}
	return res;
}

int main() {
	int x;
	while (cin >> x) {
		vector <double>algo0(x);
		vector <double>algo1(x);
		for (int i = 0; i < x; i++) {
			cin >> algo0[i];
		}

		for (int j = 0; j < x; j++) {
			cin >> algo1[j];
		}

		cout << producte_escalar(algo0, algo1) << endl;
	}
}