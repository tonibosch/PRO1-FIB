#include <iostream>
#include <vector>
using namespace std;

void ordena_per_insercio(vector<double>& v) {
    int mid = v.size();
    for (int i = 1; i < mid; ++i) {
        double z = v[i];
        
        int j= i;
        while (j > 0 and v[j-1]>z) {
            v[j] = v[j-1];
            --j;
        }
        v[j] = z;
    }
}


int main() {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i=0; i<n; ++i) {
            cin >> V[i];
        }
        ordena_per_insercio(V);
        for (int i=0; i<n; ++i) {
            cout << " " << V[i];
        }
        cout << endl;
    }
}
