#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Track {
  string artist, title, genre;
  int year;
};

/*Funcio que ordena totes les cançons d’aquest gènere ordenades per artista, i dins del mateix artista, per any i finalment per títol.*/
bool comp(const Track &a, const Track &b) {
    if(a.artist != b.artist) return a.artist < b.artist;
    else if(a.artist == b.artist and a.year != b.year) return a.year < b.year;
    else return a.title < b.title;
}

/*Funcio que llegeix l'artista, el titol de la canço, el seu genere i l'any amb aquest ordre i ho guarda al vector<Track>*/
vector<Track> read_tracks(int n) {
    vector<Track> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].artist >> v[i].title >> v[i].genre >> v[i].year; 
    }
    return v;
}

/*Funcio que treu per pantalla l'artista, l'any de la canço, el titol i el genere*/
void print_track(const Track &t) {
  cout << t.artist;
  cout << " (" << t.year;
  cout << ") " << t.title << " (" << t.genre << ")" << endl;
}

int main() {
    int n; 
    cin >> n;
    vector<Track> songs = read_tracks(n);                //Error
    string g;
    while (cin >> g) {
        vector<Track> res;
        for (int i = 0; i < n; ++i) {
            //Si el genere introduit (s) coincideix amb algun genere guardat a la mediateca digital que tregui totes les cançons del genere per pantalla.
            if(g == songs[i].genre) res.push_back(songs[i]);
        }
        //Ordenam el vector aixi tal com sens indica a l'enunciat
        sort(res.begin(), res.end(), comp);
        //Anar treguent el vector per la pantalla
        for (int j = 0; j < res.size(); ++j) print_track(res[j]);
    }
}
