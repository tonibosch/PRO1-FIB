#include <vector>
#include <iostream>
using namespace std;

typedef vector< vector<int> > Matriu;

Matriu producte (const Matriu& A, const Matriu& B){
    int filaMC = A.size();
    int colMC = B[0].size();
    Matriu C(filaMC, vector<int> (colMC));
    for (int i = 0; i < filaMC; ++i){
        for (int j = 0; j < colMC; ++j){
            for (int k = 0; k < B.size(); ++k){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}

int main ()
{
    int p, q, r;
    while (cin >> p >> q >> r) {
        Matriu A(p,vector<int>(q));
        Matriu B(q,vector<int>(r));
        for (int i=0; i<p; ++i) {
            for (int j=0; j<q; ++j) {
                cin >> A[i][j];
        }   }
        for (int i=0; i<q; ++i) {
            for (int j=0; j<r; ++j) {
                cin >> B[i][j];
        }   }
        Matriu C = producte(A,B);
        for (int i=0; i<p; ++i) {
            for (int j=0; j<r; ++j) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }   
        cout << endl;
    }
}
