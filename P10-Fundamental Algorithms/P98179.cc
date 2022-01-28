#include <iostream>
#include <vector>
using namespace std;

//Pre: Es té v.size() ≥ 1. A més, les posicions 0 a v.size()−2 de v estan ordenades de petit a gran.
//Post: Funcio que deixa el vector v totalment ordenat de petit a gran.
void insereix(vector<double>& v) {
    int n = v.size();
    for (int i = 1; i < n;++i) {
        double z = v[i];           //nombre a insertar
        
        //desplaçar a la dreta els elements mes grans que z
        int j = i-1;
        while (j>0 and v[j]>z) {
            v[j+1] = v[i];
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
        insereix(V);
        for (int i=0; i<n; ++i) {
            cout << " " << V[i];
        }
        cout << endl;
    }
}
