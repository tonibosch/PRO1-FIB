#include <iostream>
#include <vector>
using namespace std;

  typedef vector<int> fila;
  typedef vector<fila> Matriu;
    
int main (){
    int n,m,x,y;
    cin >> n >> m;
    
    Matriu matriu(n,fila(m));
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) cin >> matriu[i][j];  //Escriu les columnes de cada fila
    }
    
    string w;
    while (cin >> w){
        if(w == "fila"){                                                    //Et demanen una fila
            cin >> x;
            cout << "fila " << x <<":";
            for (int i = 0; i < m; ++i) cout << " " << matriu[x-1][i];
            cout << endl;
        }
        
        else if(w == "columna"){                                                 //Et demanen una columna
            cin >> x;
            cout << "columna " << x <<":";
            for (int i = 0; i < n; ++i) cout << " " << matriu[i][x-1];
            cout << endl;
        }
                
        else if (w == "element"){                                                 //Et demanen un nombre d'una fila i columna concreta
            cin >> x >> y;
            cout << "element " << x << " " << y << ": " << matriu[x-1][y-1] << endl;
        }
    }
}