#include <iostream>
#include <vector>
using namespace std;

int posicio_maxim(const vector<double>& v, int m) {
    int max = v[0];
    int posmax = 0;
    for (int i = 1; i <= m; ++i) {
        if(v[i] > max) {
            max = v[i];
            posmax = i;
        }
    }
    return posmax;
}

int main() {
  int m, n;
  while (cin >> m >> n) {
    vector<double> V(n);
    for (int i = 0; i < n; ++i) cin >> V[i];
    cout << posicio_maxim(V, m) << endl;
  }
}
