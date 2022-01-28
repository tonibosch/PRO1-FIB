#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int avalua(const vector<int>& P, int x){
	int n = P.size();
	int r = 0;
	for (int i = 0; i < n; ++i){
		r = r + P[i]*pow(x,i);
	}
	return r;
}

int main()
{
    int n;
    while (cin >> n) {
        vector<int> P(n);
        for (int i=0; i<n; ++i) cin >> P[i];
        int x;  cin >> x;
        cout << avalua(P,x) << endl;
    }
}