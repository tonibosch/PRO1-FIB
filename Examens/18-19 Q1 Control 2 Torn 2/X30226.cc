#include <iostream>
using namespace std;

int main () {
    int x,y,z,cont_freq,n_freq = 1;
    bool primeraseq_trobada = false;
    
    while (cin >> x >> y and not primeraseq_trobada){
        cont_freq = 0;
            while (cin >> z and z != 0 and not primeraseq_trobada){
                if(x%2 == 0 and z%2 == 0 and y%2 == 1) ++cont_freq;
                else if(x%2 == 1 and z%2 == 1 and y%2 == 0) ++ cont_freq;
                if(cont_freq == 3) primeraseq_trobada = true;
                x = y;
                y = z;
            }
        if(not primeraseq_trobada) ++n_freq;
    }
    if(primeraseq_trobada) cout << n_freq << endl;
    else cout << "none" << endl;
}