#include <iostream>
#include <vector>
using namespace std;

//Pre: n > 0
//Post: Crea un vector amb els valors que llegeix.
vector<int> llegir_vector(int n) {
    vector<int> u(n);
    for (int i = 0; i < n; ++i) cin >> u[i];
    return u;
}

//Funcio que escriu en el vector de sortda el nombre de zeros 
//que apareixen entre la posició que es troba en un moment i l’última.
void zeros_counter(const vector<int>& u, vector<int>& v_sort) {
    int n = u.size();
    int cont = 0;
    for (int j = n - 1; j >= 0; --j) {
        if(u[j] == 0) ++cont;
        v_sort[j] = cont;
    }
}
   
//Funcio que treu per pantalla el nombre de zeros a partir de cada posició:
void mostrar_v_sort(const vector<int> v_sort) {
    int mid = v_sort.size();
    for (int z = 0; z < mid; ++z) cout << v_sort[z] << endl;
}
        
int main () {
    int n;
    cin >> n;
    vector<int> u = llegir_vector(n);
    vector<int> v_sort(n);
    zeros_counter(u, v_sort);
    mostrar_v_sort(v_sort);
}