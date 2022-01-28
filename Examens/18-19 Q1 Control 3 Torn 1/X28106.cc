#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Parst {
      int index;
      string sub, s;
      vector<int> vap;
};

// Pre: 0 <= k < y.size()
// Post: The result is the first position i>=k where substring x is found in y, 
//       or -1 if no such position exists
int substring_from_k (const string& x, int k,  const string& y) {
    int n = y.length();

    for (int i = k; i < n; ++i) {
        //Recorrem el string 'y' a partir de la posicio k i mirem 
        //si té algun caracter igual al primer de 'x'.
        if (y[i] == x[0]) {
            int pos = i;
            int j = 0;
            bool trobat = true;
            //Comprovem que els seguents caracters de 'y' són iguals que els 
            //altres de 'x' per assegurarnos que 'x' apareix completament en 'y'.
            while (j < x.length() and true) {
                trobat = x[j] == y[pos];
                ++pos;
                ++j;
            }
            if (trobat) return i;
        }
    }
    return -1;
}

// Pre: x.size()>0 and y.size()>0
// Post: The result is a vector containing all the positions in y where 
//       substring x occurs.
vector<int> substrings(const string& x, const string& y) {
    vector<int> posicions;
    int n = y.length();
    int i = 0;
    while (i < n) {
        //Recorrem el string 'y' i mirem si té algun caracter igual al primer de 'x'.
        if (y[i] == x[0]) {
            int pos = i;
            bool ho_es = true;
            int j = 0;
            //Comprovem que els seguents caracters de 'y' són iguals que els 
            //altres de 'x' per assegurarnos que 'x' apareix completament en 'y'.
            while (j < x.length() and ho_es) {
                ho_es = x[j] == y[pos];
                ++pos;
                ++j;
            }
            if (ho_es) posicions.push_back(i); //afegim la posicio d'on comença 'x' dins de 'y' al vector.
        }
        ++i;
    }
    return posicions;
}
 
// Comparison function to sort the output as required
bool comp (const Parst& psa, const Parst& psb) {
   if (psa.sub > psb.sub) return false;
   else if (psa.sub < psb.sub) return true;
   if (psa.sub == psb.sub) {
       if (psa.index > psb.index) return false;
       return true;
   }
   return true;
}

int main() {
     vector<Parst> vparst;
     Parst pst;
     pst.index = 1;
     while (cin >> pst.sub >> pst.s) {
        pst.vap = substrings(pst.sub,pst.s);
        vparst.push_back(pst);
        ++pst.index;
     }
     sort(vparst.begin(),vparst.end(),comp);
     int vpn = vparst.size();
     for (int i = 0; i < vpn;++i){
        cout << vparst[i].sub << " " << vparst[i].s;
        int n = vparst[i].vap.size();
        for (int j = 0; j < n; ++ j) 
            cout << " " << vparst[i].vap[j];
        cout << endl;
    }
}