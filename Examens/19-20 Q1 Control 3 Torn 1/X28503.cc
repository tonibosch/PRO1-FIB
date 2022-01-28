#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> col;
typedef vector<col> Matriu;

//Pre: f > 0 i c > 0
//Post: La matriu de l'entrada llegida
Matriu llegir_matriu (int f, int c) {
    Matriu m(f,col(c));
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) cin >> m[i][j];
    }
    return m;
}

//Pre: Entra una matriu no buida i dos index valids de columna.
//Post: Retorna true si les columnes referenciades pels index sÃ³n iguals.
bool columnes_iguals(const Matriu& m, int c1, int c2) {
    int f = m.size();
    for (int i = 0; i < f; ++i) {
        if (m[i][c1] != m[i][c2]) return false;
    }
    return true;
}

//Escriu el nombre de columnes de la matriu que son diferents
int num_col(const Matriu& m) {
    int c = m[0].size();
    int diferents = 0;
    for (int i = 0; i < c; ++i) { //Recorrem columnes
        bool anteriorment = false;
        for (int j = 0; j < i and not anteriorment; ++j){ //Mirem si apareix anteriorment
            if (columnes_iguals(m, i, j)) anteriorment = true;
        }
        if (not anteriorment) ++diferents; //Si no apareix anteriorment sumem a diferent.
    }
    return diferents;
}

int main() {
    int f,c;
    while (cin >> f >> c) {
        Matriu m = llegir_matriu(f,c);
        cout << num_col(m) << endl;
    }
}