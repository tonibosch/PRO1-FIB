#include <iostream>
using namespace std;

bool es_any_de_traspas(int any){
	if (any % 4 == 0 and any%100 != 0) return true;
	else if(any % 100 == 0 and (any/100) % 4 == 0) return true;
	else return false;
}

bool es_data_valida(int d, int m, int a){
    if (es_any_de_traspas (a) == true) {
        if ((m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12) and 0 < d and d <= 31) return true;
        if((m == 4 or m == 6 or m == 9 or m == 11) and 0 < d and d <= 30) return true;
        if (m == 2 and 0 < d and d <= 29)return true;
        else return false;
    }
    
    else {
        if ((m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12) and 0 < d and d <= 31) return true;
        if((m == 4 or m == 6 or m == 9 or m == 11) and 0 < d and d <= 30) return true;
        if (m == 2 and 0 < d and d <= 28)return true;
        else return false;
    }
} 
    
int main() {
  int d, m, a;
  while (cin >> d >> m >> a)
    cout << (es_data_valida(d, m, a) ? "true" : "false") << endl;
}