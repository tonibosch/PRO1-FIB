#include <typeinfo>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

struct Estudiant {
    int dni;
    string nom;
    double nota;        // La nota és un valor entre 0 i 10, o -1 que representa NP
    bool repetidor;
};

/*Funcio que calcula la nota mínima (min), la nota màxima (max) i la nota mitjana (mitj) de tots els estudiants de la taula es que s?hagin presentat i que no siguin repetidors.  Si no hi ha cap estudiant no repetidor presentat, el valor d?aquestes tres variables ha de ser ?1. */
void informacio(const vector<Estudiant>& es, double& min, double& max, double& mitj){
    max = mitj = 0;
    min = 10;
    int presentats = 0;
    int n = es.size();
    for (int i = 0; i < n; ++i) {
        if(not es[i].repetidor and es[i].nota != -1){
            if(es[i].nota < min) min = es[i].nota;
            if(es[i].nota > max) max = es[i].nota;
            mitj += es[i].nota;
            ++presentats;
        }
    }
    if(presentats == 0) max = min = mitj = -1;
    else mitj = mitj / presentats;
}

int main() {

    {   // vigilar el tipus Estudiant

        struct Estudiant_cntrl {
            int dni;
            string nom;
            double nota;
            bool repetidor;
        };

        Estudiant ru;
        Estudiant_cntrl rc;

        // diagnòstics en temps de compilació  
        ru.dni = rc.dni;  
        ru.nom = rc.nom;  
        ru.nota = rc.nota;  
        rc.repetidor = ru.repetidor;  

        // diagnòstics en temps d'execució
        if (sizeof(ru)!=sizeof(rc))     throw string("Sembla que 'Estudiant' no està ben definit");
        if (typeid(ru.dni)!=typeid(rc.dni)) throw string("Sembla que 'Estudiant.dni' no està ben definit");
        if (typeid(ru.nom)!=typeid(rc.nom)) throw string("Sembla que 'Estudiant.nom' no està ben definit");
        if (typeid(ru.nota)!=typeid(rc.nota)) throw string("Sembla que 'Estudiant.nota' no està ben definit");
        if (typeid(ru.repetidor)!=typeid(rc.repetidor)) throw string("Sembla que 'Estudiant.repetidor' no està ben definit");
    }


    cout.setf(ios::fixed);
    cout.precision(4); 

    int n;
    while (cin >> n) {
        vector<Estudiant> es(n);
        for (int i=0; i<n; ++i) {
            cin >> es[i].nota >> es[i].repetidor;
        }
        double min, max, avg;
        informacio(es, min, max, avg);
        cout << min << " " << max << " " << avg << endl;
    }
}

        
