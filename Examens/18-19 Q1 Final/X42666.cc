#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Info {
    string name;
    int targets;
    int aproxs;
    int fails;
    int points;
};

void llegir_jugadors(vector<Info>& jugadors, int k) {
    int mid = jugadors.size();
    for (int i = 0; i < mid; ++i) {
        cin >> jugadors[i].name >> jugadors[i].targets >> jugadors[i].aproxs;
        jugadors[i].fails = k - jugadors[i].targets - jugadors[i].aproxs;
        jugadors[i].points = (jugadors[i].targets*3) + jugadors[i].aproxs;
    }
}

bool comp (Info& a, Info& b) {
    if(a.points != b.points) return a.points > b.points;
    else if(a.points == b.points and a.fails != b.fails) return a.fails < b.fails;
    else return a.name < b.name;
}
 
 
void mostrar_jugadors(const vector<Info>& jugadors) {
    int n = jugadors.size();
    for (int j = 0; j < n; ++j) {
        cout << jugadors[j].name << " " << jugadors[j].points << " " << jugadors[j].fails << endl;
    }
}

int main() {
    int n,k;
    cin >> n >> k;
    vector<Info> jugadors(n);
    llegir_jugadors(jugadors,k);
    sort(jugadors.begin(), jugadors.end(), comp); 
    mostrar_jugadors(jugadors);
}