#include <iostream>
using namespace std;

int main () {
    int n,haux,maux,saux,h = 0,m = 0,s = 0;
    char c1,c2;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> haux >> c1 >> maux >> c2 >> saux;
        h = h + haux;
        m = m + maux;
        s = s + saux;
        
        if (s >= 60){
            s = s - 60;
            m = m + 1;
        }
        if (m >= 60){
            m = m - 60;
            h = h + 1;
        }
    }
    cout << h << "H " << m << "M "  << s << "S" << endl;
}