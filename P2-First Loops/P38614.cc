#include <iostream>
using namespace std;

int main (){
 int n;
 cin >> n;
 int s = 0;
 int sol = 0;
 int x = n;
 
 while ( n != 0 ){
 s = n % 10;
 n = n / 100;
 sol = sol + s;
 
 }
 
 if (sol % 2 == 0) cout << x << " ES TXATXI" << endl;
 else cout << x << " NO ES TXATXI" << endl;
 

}

