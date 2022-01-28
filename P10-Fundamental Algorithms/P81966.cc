#include <iostream>
#include <vector>
using namespace std;

/* Es una funcio recursiva que retorna la posició on es troba x dins del subvector v[esq..dre]. Si x no pertany a v[esq..dre] o si esq > dre, retorna -1.*/
int posicio(double x, const vector<double>& v, int esq, int dre) {
    if(esq > dre) return -1;
    int i = (esq+dre)/2;
    if(v[i] > x) return posicio (x,v,esq, i - 1);
    if(v[i] < x) return posicio (x,v,i + 1,dre);
    return i;
}
