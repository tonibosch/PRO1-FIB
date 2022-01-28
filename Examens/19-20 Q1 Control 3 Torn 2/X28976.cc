#include <iostream>
#include <vector>
using namespace std;

struct Player {
    string name;
    double score;     // mitjana anotadora
};

struct Team {
    string tname;
    Player mvp;       // jugador millor valorat
};

typedef vector<Team> League;

//Pre: -
//Post: Fica la informacio dels equips en un vector creat per structs.
League read_data() {
    int n;
    cin >> n;
    League equips(n);
    for (int i = 0; i < n; ++i) {
        cin >> equips[i].tname >> equips[i].mvp.name >> equips[i].mvp.score;
    }
    return equips;
}

int main() {
    League equips = read_data();
    char c;
    double s;
    while (cin >> c >> s) {
        int n = equips.size();
        cout << "-- begin query" << endl;
        for (int i = 0; i < n;++i) {
            //Treu per pantalla el nom d’aquells jugadors l’equip dels quals comenci amb la lletra c 
            //i la seva mitjana anotadora sigui superior a s.
            if(c == equips[i].tname[0] and s < equips[i].mvp.score) cout << equips[i].mvp.name << endl;
        }
        cout << "-- end query" << endl;
    }
        
}