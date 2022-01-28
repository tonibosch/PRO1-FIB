#include <iostream>
#include <vector>
using namespace std;

struct Book {
    string title;       // títol del llibre
    int nb_pag;         // número de pàginas del llibre
};

struct Author {
    string name;        // nom de l'autor
    Book bestseller;    // llibre supervendes
};

typedef vector<Author> Library;

/*Funcio que guarda les dades que li arriben a un vector format per structs:
Primer li arriba un natural n (número d’autors). Per cada autor, s’indica el seu nom, el títol del seu llibre de més èxit i el seu número de pàgines.*/
Library read_data() {
    int n_autors;
    cin >> n_autors;
    Library a(n_autors);
    for (int i = 0; i < n_autors; ++i) {
        cin >> a[i].name >> a[i].bestseller.title >> a[i].bestseller.nb_pag;
    }
    return a;
    
}

int main() {
    Library a = read_data();
    char c;
    int p;
    while (cin >> c >> p) {
        int n_a = a.size();
        cout << "-- begin query" << endl;
        for (int i = 0; i < n_a; ++i) {
            //Treura per pantalla el nom del autor del qual el llibre més venut comenci per la lletra c i tingui més de p pàgines.
            if(c == a[i].bestseller.title[0] and p < a[i].bestseller.nb_pag) cout << a[i].name << endl;
        }
        cout << "-- end query" << endl;
    }
    
}