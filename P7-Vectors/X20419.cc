#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

const int LONG_ALFABET='z'-'a'+1;

char lletra_mes_frequent(const string& s){
	int n = s.length();
	vector<int> v(LONG_ALFABET, 0);
	
	for (int i = 0; i < n; ++i){
		++v[s[i] - 'a'];
	}
	int max = 0, pos = 0;
	
	for (int i = 0; i < LONG_ALFABET; ++i){
		if (v[i] > max){
			max = v[i];
			pos = i;
		}
	}
	return pos + 'a';
}
	
int main (){
	cout.setf(ios::fixed);
	cout.precision(2);
	int n;
	cin >> n;
	vector<string> s(n);
	
	double total = 0;
	for (int i = 0; i < n; ++i) {
		cin >> s[i];
		total = total + s[i].length();
	}
	cout << total/n << endl;
	
	for (int i = 0; i < n; ++i){
		if (total/n <= s[i].length()) cout << s[i] << ": " << lletra_mes_frequent(s[i]) << endl;
	}	
}