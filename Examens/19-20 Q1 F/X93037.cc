#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*Funcio que ordena un vector per la longitud dels strings (curts abans). Quan dos strings tenen la mateixa longitud s’ordenen segons l’ordre lexicogràfic.*/
bool es_menor(string a, string b) {
    if(a.length() != b.length()) return a.length() < b.length();
    else return a < b;
}

//pre:  v is ordered according to string length first and then 
//      by usual string order. All strings are different.   
//post: returns the position of s in v. 
//      If s  is not in v, returns -1 
int effi_search(const vector<string>& v, const string& s) {
    
    int esq = 0;
    int dreta  = v.size()-1;
    while(esq <= dreta) {
        int m  = (esq+dreta)/2;
        if(v[m] == s) return m;
        else if(es_menor(v[m], s)) esq = m+1;
        else dreta = m-1;
    }
    return -1;
}


int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    string s;
    while (cin >> s) 
        cout << effi_search(v, s) << endl;
}