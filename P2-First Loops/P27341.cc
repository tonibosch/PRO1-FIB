#include <iostream>
using namespace std;

int main () {
	int a,b;
while (cin >> a >> b){
	int sol = 0;
	int c = 0;
	for (int i = a; i <= b; ++i){
		sol = sol + (a+c) * (a+c) * (a+c);
		++c;
		
	}
	cout << "suma dels cubs entre " << a << " i " << b << ": " << sol << endl;

}
}