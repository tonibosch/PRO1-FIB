#include <iostream>
using namespace std;

int main () {
	int f,c;
	cin >> f >> c;
	int r = 0;
    
	for (int i = 1; i <= f ; ++i){
        for (int j = 1; j <= c; ++j){
                char n;
                cin >> n;
                
				r = r + (int(n) - int ('0'));
        }
	} 
	cout << r << endl;
}