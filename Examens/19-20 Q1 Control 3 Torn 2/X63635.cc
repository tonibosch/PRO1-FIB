#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> col;
typedef vector<col> Matriu;

Matriu llegir_matriu(int n, int m) {
    Matriu mat(n,col(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cin >> mat[i][j];
    }
    return mat;
}

//Pre: Dos indexs de la matriu
//Post: Retorna cert si les files son iguals. Altrament, retorna fals.
bool files_iguals(const Matriu& mat, int j, int i) {
    int n_col = mat[0].size(); 
    for (int k = 0; k < n_col; ++k) {
        if(mat[j][k] != mat[i][k]) return false;
    }
    return true;
}

//Pre: i es un index de la matriu
//Retorna cert si no hi ha cap fila anterior igual. Altrament, retorna fals.
bool es_nova_col(const Matriu& mat, int i) {
    for (int j = 0; j < i; ++j) {
        if(files_iguals(mat,j,i)) return false;
    }
    return true;
}

int main () {
    int n_files, n_col;
    while (cin >> n_files >> n_col) {
        Matriu mat = llegir_matriu(n_files,n_col);
        int cont_f_dif = 0;
        for (int i = 0; i < n_files; ++i) {
            if(es_nova_col(mat,i)) ++cont_f_dif;
        }
        cout << cont_f_dif << endl;
    }
}