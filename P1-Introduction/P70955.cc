#include <iostream>
using namespace std;

int main() {
   int a,b,c,d,e;
   cin >> a >> b >> c >> d >> e;
 int f;
 f = a*31536000;
 int g;
 g = b*86400;
 int h;
 h = c*3600;
 int i;
 i = d*60;
 
 int j;
 j = f+g+h+i+e;
   cout <<  j << endl;    
}

