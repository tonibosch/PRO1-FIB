#include <iostream>
#include <cmath>
using namespace std;

double distancia(double x1, double y1, double x2, double y2){
    double restax = x1 - x2;
    double restay = y1 - y2;
    double x = restax * restax;
    double y = restay * restay;
    return sqrt(x + y);
}

int main () {
    cout.setf(ios::fixed);
    cout.precision(4);
    string w;
    while (cin >> w){
    double x1,y1,x2,y2,trajecte = 0;
    cin >> x1 >> y1;
        bool first = true;
        double x1principi = x1;
        double y1principi = y1;

        while ((x1 != x1principi or y1 != y1principi) or first == true){
            first = false;
            cin >> x2 >> y2;
            trajecte = trajecte + distancia(x1,y1,x2,y2);
            x1 = x2;
            y1 = y2;
        }
        cout << "Trajecte " << w << ": " << trajecte << endl;
    }
}
