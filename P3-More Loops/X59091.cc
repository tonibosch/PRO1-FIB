#include <iostream>
using namespace std;

int main ()  {
    int n, m;
    bool first = true;

        while ( cin >> n >> m ){
            if (not first) cout <<  endl;
            first = false;
            
            int naux = 10;
        
            for  (int f = 0; f < n ; ++f ){
                for (int c = 0; c < m; ++ c){
                    if (naux == 0){
                        naux = 9;
                        cout << naux;
                        }
                 
                    else {
                        naux = naux - 1 ;
                        cout << naux;
                        }
                } 
            
                cout << endl;
        
            } // for

        } // while  
}//main