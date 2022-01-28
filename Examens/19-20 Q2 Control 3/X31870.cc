#include <iostream>
#include <vector>
using namespace std;

int effi_last_pos(vector<int>& v, int z) {
    int esq = 0;
    int dreta = v.size()-1;

    while(dreta-esq != 1) { 
        int m = (esq+dreta)/2;
        if(v[m] <= z) esq = m; 
        else dreta = m;
    }
    return esq;
}

//gets vector v from input chanel
void read_vector(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) cin >> v[i];
}


int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    read_vector(v);
    int z;
    while (cin >> z)
        cout << effi_last_pos(v, z) << endl;
}