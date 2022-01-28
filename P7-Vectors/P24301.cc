#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenacio(const vector<int> & V1, const vector<int> & V2){
	vector<int> conc(V1.size()+ V2.size());
	for (int i = 0; i < V1.size(); ++i) conc[i]= V1[i];
    for (int i = 0; i < V2.size(); ++i) conc[V1.size() + i] = V2[i];
    return conc;
}

int main() {
  int n1;
  while (cin >> n1) {
    vector<int> V1(n1);
    for (int i = 0; i < n1; ++i) cin >> V1[i];		//Llegeixes els elements de V1
    int n2;
    cin >> n2;
    vector<int> V2(n2);
    for (int i = 0; i < n2; ++i) cin >> V2[i];		//Llegeixes els elements de V2	
    vector<int> res = concatenacio(V1, V2);
    cout << res.size() << endl;
    for (int i = 0; i < (int)res.size(); ++i) cout << " " << res[i];
    cout << endl;
  }
}