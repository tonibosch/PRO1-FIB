#include <iostream>
#include <vector>
using namespace std;

struct Things {
    string name;
    string color;
    string poison;
    string burns;
    double height;
};

typedef vector<Things> Forest;

void read_data(Forest& v) {
    // ADD YOUR CODE HERE 
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        Things nova;
        cin >> nova.name >> nova.color >> nova.poison >> nova.burns >> nova.height;
        v.push_back(nova);
    }
}

int count(const Forest& v, string name, string color, string poison, string burns, double height) {
    // ADD YOUR CODE HERE 
    int n = v.size();
    int count = 0;
    for (int j = 0; j < n; ++j) {
        if ((v[j].name == name or name == "*") and (v[j].color == color or color == "*") and (v[j].poison == poison or poison == "*") and (v[j].burns == burns or burns == "*") and (v[j].height >= height)) ++count;
    }
    return count;
}

int main() {
    Forest v;
    read_data(v);    
    // ADD YOUR CODE HERE
    string n,c,p,b;
    double h;
    while (cin >> n >> c >> p >> b >> h) {
        cout << count(v,n,c,p,b,h) << endl;
    }
}