#include <iostream>
#include <string>
#include <vector>
using namespace std;

void invlletres(const string& s) {
	int x = s.length();
	for (int i = x-1; i >= 0; --i ) cout << s[i];
	cout << endl;
}

int main (){
	int n; 
	cin >> n;
	vector<string> v(n);
	
	for (int i = 0; i < n; ++i) cin >> v[i];
	
	for (int i = n - 1; i >= 0; --i ) invlletres(v[i]);
}