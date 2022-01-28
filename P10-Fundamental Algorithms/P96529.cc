#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main () {
    string s;
    while (cin >> s) {
       int n = s.length();
       int k = 0;
       bool seq_correcta = true;
       vector<char> v(n);
       //El for serveix per veure si totes les claus i els parentesis estan ben tancats.
       for (int i = 0; i < n and seq_correcta; ++i) {
           if(s[i] == '(' or s[i] == '[') {
               v[k] = s[i];
               ++k;
           }
           else {
               --k;
               if((s[i] == ')' and v[k] != '(') or (s[i] == ']' and v[k] != '[')) seq_correcta = false;
           }
       }
       if(seq_correcta and k == 0) cout << "si" << endl;
       else cout << "no" << endl;
    }
}
