#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> vect;

void llegeix_vector(vect& seq, int& suma_total){
    for(int y = 0; y < seq.size(); ++y){
        cin >> seq[y];
        suma_total += seq[y];
    }
}

int breakeven(const vect& seq, int suma_total){
    int suma_dreta = suma_total, suma_esq = 0;
    int i = 1;
    if(suma_esq == suma_dreta) return i;
    else {
        while (i < seq.size()){
            suma_esq = suma_esq + seq[i-1];
            suma_dreta = suma_total - suma_esq;
            if(suma_esq == suma_dreta) return i+1;
            else ++i;
        }
        return -1;
    }
}


int main () {
    int n, suma_total = 0;
    cin >> n;
    vect seq(n);
    llegeix_vector(seq,suma_total);
    cout << breakeven(seq, suma_total) << endl;
}