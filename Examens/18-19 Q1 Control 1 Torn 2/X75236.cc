#include <iostream>
using namespace std;

int main () {
    int n;
    char c;
    
    cin >> n >> c;
    
    for (int k = 1 ; k <= n ; ++k){  
        
        for (int f = 0 ; f < k ; ++f){
        // per dibuix
            for (int col = 0 ; col < k ; ++col){
                
                if (f == 0 or f == k - 1 or col == 0 or col == k - 1){
                    cout << c;
                }
                else cout << ' ';
            }
            
            cout << endl;
        }
    cout << endl;
    }
}