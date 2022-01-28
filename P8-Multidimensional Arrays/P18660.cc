#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef vector<string> Llista;
typedef vector<char> Matriu;

Llista llegir_llista(int x){
    Llista s(x);
    for (int i = 0; i < s.size(); ++i) cin >> s[i];
    return s;
}

Matriu llegir_sopa(int f, int c){
    Matriu sopa(f, vector<int>(c));
    for (int i = 0; i < sopa.size(); i++){
        for (int j = 0; j < sopa[0].size(); ++j) cin << sopa[i][j];ç
    }
    return sopa;
}



int main (){
    int x,f,c;
    while (cin >> x >> f >> c){
    llista x = llegir_llista(x);
    Matriu sopa =  llegir_sopa(f,c);
        

    
