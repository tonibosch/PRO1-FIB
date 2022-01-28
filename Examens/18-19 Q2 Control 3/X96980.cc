#include <iostream>
#include <vector>
using namespace std;

struct Game {
    string home;           // home team
    int shome;             // home team's score
    string visitor;        // visitor team
    int svisitor;        // visitor team's score
}; 

int scoring_ability(const vector<Game>& v, const string& team) {
    int diferencia_punts = 0;
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        if(team == v[i].home) 
            diferencia_punts += v[i].shome;
        else if (team == v[i].visitor) 
            diferencia_punts -= v[i].svisitor;
        else {}
    }
    return diferencia_punts;
}

// Pre: n is a natural; the input has available the information of n games
// Post: returns a vector with n correctly initialized games
vector<Game> read_games(int n) {
    vector<Game> Partits(n);
    for (int i = 0; i < n; ++i) {
        cin >> Partits[i].home >> Partits[i].shome >> Partits[i].visitor >> Partits[i].svisitor;
    }
    return Partits;
}

int main() {
    int n;
    cin >> n;
    vector<Game> Partits = read_games(n);
    string team;
    while (cin >> team) {
        cout << team << " " << scoring_ability(Partits, team) << endl;
    }
}