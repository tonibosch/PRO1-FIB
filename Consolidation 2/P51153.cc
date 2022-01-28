#include <iostream>
#include <vector>
using namespace std;

int main (){
    int n;
    while (cin >> n){
        vector <int> v(n);
        for (int i = 0; i < v.size(); ++i) cin >> v[i]; //Llegir les dades del vector
        
        int i = 0,j = 0;
        bool trobat = false;
        while (i < v.size() and not trobat){
            while (j < v.size() and not trobat){
                if(i != j and (v[i] + v[j])%2 != 0) trobat = true;
                ++j;
            }
            ++i;
        }
        if (trobat) cout << "si" << endl;
        else cout << "no" << endl;
    }
}
       
            
    
        
