#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

// Pre: mat is an n*n square matrix, where n >= 2
// Post: it returns true if mat is a zero-sum tridiagonal matrix,
//       false otherwise
bool is_zerosum_tridiagonal(const Matrix& mat) {
    int f = mat.size();
    int c = mat[0].size();
    int suma_d_princ = 0, suma_d_no_princ = 0;
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            if(j == i) suma_d_princ += mat[i][j];
            else if(j == i+1) suma_d_no_princ += mat[i][j];
            else if(i == j+1) suma_d_no_princ += mat[i][j];
            else {
                if(mat[i][j] != 0) return false;
            }
        }
    }
    if(suma_d_princ != suma_d_no_princ) return false;
    else return true;
}

Matrix read_matrix(int n) {
    Matrix m(n, Row(n));
    for (int i=0; i < n; ++i)
          for (int j = 0; j < n; ++j)
               cin >> m[i][j];
    return m;
}

int main() {
    int n;
    while (cin >> n) {
          Matrix a = read_matrix(n);
          if (is_zerosum_tridiagonal(a)) cout << "TRUE" << endl;
          else cout << "FALSE" << endl;
    }
}