#include <vector>
#include <iostream>
using namespace std;

typedef vector< vector<int> > Matriu;

Matriu producte (const Matriu& A, const Matriu& B){
    int x = A.size();
    Matriu C(x, vector<int>(x));
    for (int i = 0;i < x; ++i){
        for (int j = 0; j < x; ++j){
            for (int k = 0; k < x; ++k)C[i][j]= C[i][j] + A[i][k] * B[k][j];
        }
    }
    return C;
}
            
int main ()
{
    int n;
    while (cin >> n) {
        Matriu A(n, vector<int>(n));
        Matriu B(n, vector<int>(n));
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cin >> A[i][j];
        }   }
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cin >> B[i][j];
        }   }
        Matriu C = producte(A,B);
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }   
        cout << endl;
    }
}
