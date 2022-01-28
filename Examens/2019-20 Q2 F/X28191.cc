#include <iostream>
using namespace std;

int time_lapse(int time_1, int time_2) {
    if(time_1 < time_2) return time_2 - time_1;
    else if(time_1 > time_2) {
        return (60-time_1)+time_2;
    }
    else return 60;
}
    
    
int main () {
    int k;
    cin >> k;
    int suma_t = 0;
    int time_1, time_2;
    cin >> time_1;
    
    bool found = false;
    int i = 1;
    while(cin >> time_2 and time_2 != -1 and not found) {
        suma_t += time_lapse(time_1,time_2);
        if(k < suma_t) found = true;
        else time_1 = time_2;
        ++i;
    }
    if(found) cout << i << endl;
    else cout << 0 << endl;
}