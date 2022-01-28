#include <iostream>
#include <vector>
using namespace std;

bool find_element(const vector<int>& v, int &e){
    int seq_dreta = 0;
    bool trobat = false;
    for (int i = 0; i < v.size(); ++i) seq_dreta += v[i];
    
    for (int z = 0; z < v.size(); ++z){
        if(v[z] == seq_dreta-v[z]){
            trobat = true;
            e = v[z];
        }
        seq_dreta -= v[z];
    }
    if(trobat) return true;
    else return false;
}
    
int main() {
  int n;
  cin >> n;
  vector<int> seq(n);

  for (int i = 0; i < seq.size(); ++i) cin >> seq[i];               //Llegir el vector seq               
  
  int elem;
  bool found = find_element(seq, elem);
  if (found) cout << elem << endl;
  else cout << "not found" << endl;
}