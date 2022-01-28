#include <iostream>
#include <vector>
using namespace std;

//Funcio  que llegeix les dades que li arriben i les posa dins un vector.
vector<int> llegir_vector(int n) {
    vector<int> v(n);
    for (int i = 0;i < n; ++i) cin >> v[i];
    return v;
}

void trobar_primer_repetit(const vector<int> v) {
    bool trobat = false;
    for (int i = 0; i < v.size() and not trobat; ++i) {
        int j = v.size()-1;
        int x = v[i];
        while (j > i and not trobat){
            if(v[j] == x) {
                trobat = true;
                 cout << x << " " << j << endl;
            }
            else --j;
        }
    }
    if(not trobat) cout << "NO" << endl;
}

int main () {
    int n;
    while (cin >> n) {
        vector<int> seq = llegir_vector(n);
        trobar_primer_repetit(seq);
    }
}