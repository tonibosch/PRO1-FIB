#include <iostream>
using namespace std;

int main (){
    int n1,n2;
    char op;
    while (cin >> n1 and n1 >= 0){
        cin >> op >> n2;
        if (op == '+') cout << n1 + n2 << endl;
        else if (op == '-') cout << n1 - n2 << endl;
        else cout << n1 * n2 << endl;
    }
}