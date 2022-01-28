#include <iostream>
using namespace std;

int main () {
	cout.setf(ios::fixed);
	cout.precision(2);

        string word;

        while ( cin >> word and word != "acabar" ){
        if( word == "perimetro"){
            double a,b,c;
            cin >> a >> b >> c ;
            cout << a + b + c << endl;	
        }
        if( word == "area"){
            double base, h;
            cin >> base >> h;
            cout << (base * h) / 2 << endl;
        }
            
    }	
}