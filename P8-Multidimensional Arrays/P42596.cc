#include <iostream>
#include <vector>
using namespace std;

typedef vector <vector <int> >Matrix;

void min_max(const Matrix& m, int& minim, int& maxim) {
	maxim = minim = m[0][0];
	for (int i = 0; i < m.size(); ++i) {
		for (int j = 0; j < m[0].size(); ++j) {
			if (m[i][j] > maxim) maxim = m[i][j];
			if (m[i][j] < minim) minim = m[i][j];
		}
	}
}

int main() {
	int r, c;
	int max, min, dif;
	max = min = 0;

	int number = 0;
	int maxnum = 0;
	dif = -1;

	while (cin >> r >> c) {
		Matrix m(r, vector <int>(c));
		for (int i = 0; i < r; ++i) {
			for (int j = 0; j < c; ++j) {
				cin >> m[i][j];
			}
		}

		min_max(m, min, max);
		++number;

		if (max-min > dif) {
			dif = max-min;
			maxnum = number;
		}
	}
	cout << "la diferencia maxima es " << dif << endl;
	cout << "la primera matriu amb aquesta diferencia es la " << maxnum << endl;
}