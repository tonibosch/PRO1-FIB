#include <vector>
#include <iostream>
using namespace std;


bool quadrat_magic (const vector< vector<int> >& M) {
    int fila = M.size();
    int columna = M[0].size();
    
    int suma_first_fila = 0;
    int suma_first_columna = 0;
    int suma_col = 0;
    int suma_fil = 0;
    bool first = true;
    
    //Miram si la suma de cada columna i de cada fila es la mateixa
    for (int i = 0; i < fila; ++i) {
        for (int j = 0; j < columna; ++j) {
            if(first) {
                suma_first_fila += M[i][j];
                suma_first_columna += M[j][i];
                suma_col = suma_first_columna;
                suma_fil = suma_first_fila;
            }
            else {
                suma_col += M[i][j];
                suma_fil += M[j][i];
            }
        }
        if(suma_first_columna != suma_col or suma_first_fila != suma_fil) return false;
        first = false;
        suma_col = 0;
        suma_fil = 0;
    }
    
    int suma_diagonal1 = 0;
    int suma_diagonal2 = 0;
    int k = 0;
    int z = 0;
    int q = columna-1;
    
    //Miram si la suma de les dues diagonals es la mateixa amb la suma de les files i columnes
    while (k < fila and z < columna) {
        suma_diagonal1 += M[k][z];
        suma_diagonal2 += M[q][z];
        --q;
        ++k;
        ++z;
    }
    if(suma_diagonal1 != suma_first_columna or suma_diagonal2 != suma_first_columna) return false;

    for (int r = 1; r <= fila*columna; ++r) {
        bool trobat = false;
        for (int i = 0; i < fila and not trobat; ++i) {
            for (int j = 0; j < columna and not trobat; ++j) {
                if (not trobat and M[i][j] == r) trobat = true;
            }
        }
        if (not trobat) return false;
    }
    return true;
}
        
int main () 
{
    int n;
    while (cin >> n) {
        vector< vector<int> > M(n, vector<int>(n));
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cin >> M[i][j];
        }   }
        cout << quadrat_magic(M) << endl;
}   }

