#include <vector>
#include <iostream>
using namespace std;

int samelast(const vector<int>& v, int n, int& count){
	for (int i = 0; i < n-1; ++i) {
		if (v[i] == v[n-1]) count = count + 1;
	}
	return count;
}

int main (){
	int n,x,count = 0;
	cin >> n;
	vector <int> v(n);
	
	for (int i = 0; i < n; ++i) {
		cin >> x;
		v[i] = x;  
	}
	
	samelast(v, n, count);
	cout << count << endl;
}