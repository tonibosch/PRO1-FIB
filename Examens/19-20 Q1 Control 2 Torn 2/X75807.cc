#include <iostream>
using namespace std;

// Pre: c es un caracter
// Post: retorna true si c es una lletra, false en cas contrari
bool es_letra(char c) {
    return ('a' <= c and c <= 'z') or ('A' <= c and c <= 'Z');
}

// Pre: a l'entrada hi ha una sequencia de caracters
// Post: escriu els mateixos caracters que a l'entrada
//       reordenats: primer els que no son lletres (en el
//       mateix ordre en que van apareixer) i, a continuacio,
//       les lletres (en ordre invers a el de la seva aparicio)
void signos_letras() {
    char c;
    while (cin >> c){
        //cout << "estic tractant aquesta lletra " << c << endl;
        if(es_letra(c)){
            signos_letras();
            cout << c;
          //  cout << "aqui no arribo mai" << c << endl;
        }
        else{ 
        cout << c;
        }
    }
}
        
int main () {
    signos_letras();
    cout << endl;
}