#include <iostream>
#include <vector>
using namespace std;

bool find_element(const vector<double>& v, double x, double &e) {
    bool trobat = false;
    for (int i = 0; i < v.size(); ++i){
        if((v[i] <= x/2) or (v[i] >= 2*x)){
            e = v[i];
            trobat = true;
        }
    }
    if(trobat) return true;
    else return false;
}
    
int main() {
   cout.setf(ios::fixed); 
   cout.precision(2);
   int n;
   cin >> n;
   vector<double> v(n);

   double mean;
   mean = 0;
   for (int i = 0; i < v.size(); ++i){
       cin >> v[i];
       mean += v[i];
   }
   mean /= v.size();
   
   double elem;
   bool found = find_element(v,mean,elem);
   if (found) cout << elem << endl;
   else cout << "not found" << endl;
}    