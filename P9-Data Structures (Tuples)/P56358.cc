#include <iostream>
using namespace std;

/* Cream una estructura de dades on a cada 
Temps tenim hores,minuts i segons*/
struct Temps {
         int hora, minut, segon;
     };
     
//Pre : Estructura de dades Temps t
/*Post L'estructura de dades Temps t, sumant 1 segon (Temps t1) i 
restant un segon (Temps t2)*/
void un_segon(const Temps& t, Temps& t1, Temps& t2) {
    t1.hora = t2.hora = t.hora;
    t1.minut = t2.minut = t.minut;
    t1.segon = t2.segon = t.segon;
    
    ++t1.segon;
    if(t1.segon == 60){
        t1.segon = 0;
        ++t1.minut;
    }
    
    if(t1.minut == 60){
        t1.minut = 0;
        ++t1.hora;
    }
    
    if(t1.hora  == 24) t1.hora = 0;
    
    --t2.segon;
    if(t2.segon == -1){
        t2.segon = 59;
        --t2.minut;
    }
    
    if(t2.minut == -1){
        t2.minut = 59;
        --t2.hora;
    }
    
    if(t2.hora == -1) t2.hora = 23;
}


int main () {
    Temps t;
    while (cin >> t.hora >> t.minut >> t.segon) {
        Temps t1;
        Temps t2;
    
        un_segon(t, t1, t2);
        cout << t1.hora << " " << t1.minut << " " << t1.segon << endl;
        cout << t2.hora << " " << t2.minut << " " << t2.segon << endl;
    }
}
