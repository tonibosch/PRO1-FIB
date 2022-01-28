#include <iostream>
using namespace std;

int main () {
    char c;
    cin >> c;
    int cont = 0;
    int paraulescurtes = 0,paraulesmitj = 0, paraulesgrans = 0;
    while (c != '.'){
        while (c != '-' and c != '.'){
            ++cont;
            cin >> c;
        }
        if(cont >=1 and cont < 5) ++paraulescurtes;
        else if(cont >= 5 and cont <= 9) ++paraulesmitj;
        else if(cont > 9)++paraulesgrans;
        else{}
        if (c == '-') {
            cin >> c;
            cont = 0;
        }
    }
    cout << paraulescurtes << ',' << paraulesmitj << ',' << paraulesgrans << endl;
}
        
        
