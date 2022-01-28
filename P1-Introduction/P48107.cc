#include <iostream>
using namespace std;

int main() {
   int a,b;
   cin >> a >> b;
   int d;
   d = a/b;
   int r;
   r = a - (b*d);
   cout <<  d << " " << r << endl;    
}