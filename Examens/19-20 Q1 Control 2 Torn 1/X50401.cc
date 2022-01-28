#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> vect;

void llegir_vector (vect& seq){
    for(int i = 0; i < seq.size(); ++i) cin >> seq[i]; 
}

int n_tripletsnul (vect& seq){
    int tripletsnul = 0;
    for (int y = 0; y < seq.size()-2; ++y){
        if(seq[y] + seq[y+2] == seq[y+1])++tripletsnul;
    }
    return tripletsnul;
}

int main () {
    int n,a,tripletsnul_total = 0;
    cin >> n;
    for (int z = 0; z < n; ++z){
        cin >> a;
        vect seq(a);
        llegir_vector(seq);
        cout << n_tripletsnul(seq) << endl;
        tripletsnul_total += n_tripletsnul(seq);
    }
    cout << "Total: " << tripletsnul_total << endl;
}