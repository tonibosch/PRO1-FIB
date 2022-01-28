#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector<int> v_seq;

bool gran_a_petit(int a, int b){
    if (a > b)return true;
    else return false;
}

int main (){
    int n;
    while (cin >> n){
        v_seq v(n);
        for (int i = 0; i < v.size(); ++i) cin >> v[i];
        sort (v.begin(),v.end(),gran_a_petit);
        bool primer = true;
        for (int i = 0; i < v.size(); ++i){
            if(primer) {
                cout << v[i];
                primer = false;
            }
            else cout << " " << v[i];
        }
        cout << endl;
    }
}
