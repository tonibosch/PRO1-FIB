#include <iostream>
#include <vector>
using namespace std;

void llegir_vector(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) cin >> v[i];
}

//Pre: v.size() > 0, v no conte nombres negatius.
//Post: Si la sequencia és extrema escriu les posicions i i j que demostren que
// ho és. En cas que hi hagi més d'una elecció, escriu la que tingui la i més
// petita i la j més gran. Si la seqüència no és extrema, llavors escriu no.
void sequencies_extremes(const vector<int>& v){
    int n = v.size();
    int i = 0;
    int j = n - 1;
    int suma_i = v[0];
    int suma_j = v[n - 1];

    while(i <= j and suma_i != suma_j){
        if(suma_i < suma_j){
            ++i;
            suma_i += v[i];
        }
        else{
            --j;
            suma_j += v[j];
        }
    }
    if (i <= j) cout << i << ' ' << j << endl;
    else cout << "no" << endl;
}

int main () {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        llegir_vector(v);
        sequencies_extremes(v);
    }
}