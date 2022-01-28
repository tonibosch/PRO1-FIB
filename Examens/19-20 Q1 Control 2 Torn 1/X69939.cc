#include <iostream>
using namespace std;

int time_lapse(int time_1, int time_2){
    if(time_1 < time_2) return (time_2 - time_1);
    else if(time_1 > time_2){
        time_1 = 60 - time_1;
        return (time_2 + time_1);
    }
    else return 60;
}
    
int main () {
    int t1, t2, aux = 0;
    bool first = true;
    bool metronom = true;
    cin >> t1;
    while (cin >> t2 and t2 != -1 and metronom){
        if(first){
            aux = time_lapse(t1,t2);
            first = false;
        }
        else {
            if(time_lapse(t1,t2) != aux) metronom = false;
        }
        t1 = t2;
    }
    if(metronom) cout << aux << endl;
    else cout << 0 << endl;
}