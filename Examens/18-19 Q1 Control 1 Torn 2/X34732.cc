#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int r = 0;
    
    for (int i = 1; i <= n; ++i){ 
        char c1,c2,c3;
        cin >> c1 >> c2 >> c3;
    
        if ((c3 == '/' and c1 != '/') or (c1 == '/' and c3 == '/' and c2 == '/')) r = r +1 ;
    }
     cout << r << endl;
}