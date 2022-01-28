#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> col;
typedef vector<col> Matriu;

//Pre: n > 0, m > 0
//Post: Retorna la matriu (n x m) amb els valors que llegeix
void llegir_matriu(Matriu& mat) {
    int n_col = mat[0].size();
    int n_fil = mat.size();
    for (int i = 0; i < n_fil; ++i) {
        for (int j = 0; j < n_col; ++j) cin >> mat[i][j];
    }
}

void mirar_bruticia(const Matriu& mat) {
    int n_col = mat[0].size();
    int n_fil = mat.size();
    int cont = 0;
    
    for (int j = 0; j < n_col; ++j) {
        if(j%2 == 0) {                               //Recorregut de dalt a baix
            for (int i = 0; i < n_fil; ++i) {
                if(mat[i][j] == 0) cout << i << " " << j << endl;           //Si no hi ha bruticia mostrar la posicio en que esta.
                else cont += mat[i][j];                                     //Si hi ha bruticia sumar la bruticia al contador de bruticia
            }
            cout << "Total en columna " << j << ": " << cont << endl;
        }
        
        else { //(j%2 == 1)                                        //Recorregut de baix a dalt
            for (int k = n_fil-1; k >= 0; --k) {
                if(mat[k][j] == 0) cout << k << " " << j << endl;            //Si no hi ha bruticia mostrar la posicio en que esta.
                else cont += mat[k][j];                                     //Si hi ha bruticia sumar la bruticia al contador de bruticia.
            }
            cout << "Total en columna " << j << ": " << cont << endl;
        }
    }
}

int main () {
    int n,m;
    cin >> n >> m;
    Matriu mat (n,col(m));
    llegir_matriu(mat);
    mirar_bruticia(mat);
}