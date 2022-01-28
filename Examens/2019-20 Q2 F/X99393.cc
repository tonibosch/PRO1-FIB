#include <iostream>
#include <vector>
using namespace std;

struct Asignatura {
    int id;
    double creditos;
    double nota;
};

struct Alumno {
    int dni;
    vector <Asignatura> asigs;
};

typedef vector <Alumno> Alumnos;

// Pre: --
// Post: retorna el número d'alumnes a alus que superen el factor alfa
int supera_alfa(const Alumnos& alus) {
    int alumnes_superen_alfa = 0;
    int n = alus.size();
    for (int i = 0; i < n; ++i) {
        int v_assigs = alus[i].asigs.size();
        double credits = 0;
        double suma = 0;
        
        for (int j = 0; j < v_assigs; ++j) {
            credits += alus[i].asigs[j].creditos;
            suma += (alus[i].asigs[j].creditos * alus[i].asigs[j].nota);
        }
        if (v_assigs != 0 and (suma/credits) >= 5) ++alumnes_superen_alfa;
    }
    return alumnes_superen_alfa;
}

// Pre: a l'entrada hi ha informació de m assignatures
// Post: retorna un vector de Asignatura amb la informació de l'entrada,
//          mantenint l'ordre d'aparició
vector <Asignatura> lee_asignaturas(int m) {
   vector <Asignatura> as(m);
   for (int i = 0; i < m; ++i) cin >> as[i].id >> as[i].creditos >> as[i].nota;
   return as;
}

int main() {
    int n;
    cin >> n;
    Alumnos a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].dni;
        int m;
        cin >> m;
        a[i].asigs = lee_asignaturas(m);
    }
    cout << supera_alfa(a) << endl;
}