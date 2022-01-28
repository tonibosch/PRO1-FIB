#include <iostream>
#include<vector>
using namespace std;

typedef vector<int> vect;

void llegir_vector(vect& v){
    for(int i = 0; i < v.size(); ++i) cin >> v[i];
}

int n_triplets(const vect& v){
    int triplets = 0;
    for (int i=0; i < v.size()-2; ++i) {
        if(v[i]%v[i+1] == v[i+2]) ++triplets;
    }
    return triplets;
}

int main () {
    int x, total = 0;
    
    while (cin >> x){
        vect v(x);
        llegir_vector(v);
        cout <<  n_triplets(v) << endl;
        total += n_triplets(v);
    }
    cout << "Total: " << total << endl;
}