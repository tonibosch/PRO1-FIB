#include <iostream>
using namespace std;

int main() {
    int i;
    cin >> i;

    bool trobat = false;
    int x,j = 1;
    while (not trobat and cin >> x) {
        if (j == i) trobat = true;
        ++j;
    }
    if (trobat) cout << "A la posicio " << i << " hi ha un " << x << "." << endl;
    else cout << "Posicio incorrecta." << endl;
}