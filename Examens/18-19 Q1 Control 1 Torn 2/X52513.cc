#include <iostream>
using namespace std;

int main () {
    char c1,c2,c3;
    cin >> c1 >> c2 >> c3;
    
    if ((c3 == '/' and c1 != '/') or ( c1 == '/' and c3 == '/' and c2 == '/')) cout << "right" << endl;
    
    else cout << "wrong" << endl;
    
}