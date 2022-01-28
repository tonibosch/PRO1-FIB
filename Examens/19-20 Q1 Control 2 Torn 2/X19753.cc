#include<iostream>
using namespace std;

bool is_power_2(int n){
    if(n == 1)return true;
    else if(n%2 == 0 and n != 0) return is_power_2(n/2);
    else return false;
}
    
int main () {
    int n, pos = 1;
    bool found = false;
    cin >> n;
    while (n != -1 and not found){
        if(is_power_2(n)){
            found = true;
            cout << pos << endl;
        }
        ++pos;
        cin >> n;
    }
    if (not found) cout << 0 << endl;
}