#include <iostream>
using namespace std;

int sum_min_max(int x,int y,int z){
	if (x >= y and y >= z) return x + z;
	
	else if (x >= z and z >= y) return x + y;
	
	else if (y >= x and x >= z) return y + z;	
	
	else if (y >= z and z >= x) return y + x;
	
	else if (z >= x and x >= y) return z + y;
	
	else return z + x;
}


int main() {
  int x,y,z;
  while (cin >> x >> y >> z) cout << sum_min_max(x,y,z) << endl;
}