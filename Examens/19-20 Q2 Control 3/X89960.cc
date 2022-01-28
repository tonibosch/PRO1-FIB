#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Tren {
    string id_tren;
    string destino;
    string hora;
};

struct InfDest {
    string destino;
    string primer_id;
    int freq;
};

vector<Tren> lee_info_trenes(int n) {
    vector<Tren> v_tren(n);
    for (int i = 0; i < n; ++i) {
        cin >> v_tren[i].id_tren >> v_tren[i].destino >> v_tren[i].hora;
    }
    return v_tren;
}

bool cmp_tren(const Tren& v1, Tren& v2) {
    if (v1.destino != v2.destino) return v1.destino < v2.destino;
    else if (v1.destino == v2.destino and v1.hora != v2.hora) return v1.hora < v2.hora;
    else return v1.id_tren < v2.id_tren;
}

//pre: m > 0  es el numero de destinos y v es el vector de trenes
//     con la info de cada <Tren>. El vector v no es vacio y esta 
//     ordenado por (1) criterio principal: destino
//     (2) criterio secundario: hora    (3) Ãºltimo criterio:
//     identificador de tren.
//     
//
//post: construye un vector de  <InfDest>  con la info recogida
//      de cada destino, su frecuencia y su primer tren
vector<InfDest> crea_v_inf_dest(const vector<Tren>& v, int m) {
    vector<InfDest> v_inf_dest(m);
    v_inf_dest[0].destino = v[0].destino;
    v_inf_dest[0].primer_id = v[0].id_tren;
    v_inf_dest[0].freq = 1;
    
    int j = 0;
    for (int i = 1; i < v.size(); ++i) {
        if (v_inf_dest[j].destino == v[i].destino) ++v_inf_dest[j].freq;
        else {
            ++j;
            v_inf_dest[j].destino = v[i].destino;
            v_inf_dest[j].primer_id = v[i].id_tren; 
            v_inf_dest[j].freq = 1;
        }
    }
    return v_inf_dest;
}
            
bool cmp_inf_dest(const InfDest& a, InfDest& b) {
    if(a.freq != b.freq) return a.freq > b.freq;
    else return a.destino < b.destino;
}

void escribir_resultados(const vector<InfDest> v_inf_dest) {
    int n = v_inf_dest.size();
    for (int z = 0; z < n; ++z) {
        cout << v_inf_dest[z].destino << " " << v_inf_dest[z].freq;
        cout << " " << v_inf_dest[z].primer_id << endl;
    }
}

int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<Tren> v_tren = lee_info_trenes(n);
    sort(v_tren.begin(), v_tren.end(), cmp_tren);
    vector<InfDest> v_inf_dest = crea_v_inf_dest(v_tren, m);
    sort(v_inf_dest.begin(), v_inf_dest.end(), cmp_inf_dest);
    escribir_resultados(v_inf_dest);
}