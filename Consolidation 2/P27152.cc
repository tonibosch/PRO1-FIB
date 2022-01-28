#include <iostream>
using namespace std;

int valorlletres(char c){
    if(c == 'a' or c == 'e') return 1;
    if(c == 'o' or c == 's') return 2;
    if(c == 'd' or c == 'i' or c == 'n' or c == 'r') return 3;
    if(c == 'c' or c == 'l' or c == 't' or c == 'u') return 4;
    if(c == 'm' or c == 'p') return 5;
    if(c == 'b' or c == 'f' or c == 'g' or c == 'h' or c == 'j' or c == 'q' or c == 'v' or c == 'x' or c == 'y' or c == 'z') return 6;
    else return 7;
}
    
int main () {
    int suma = 0;
    char c;
    while(cin >>c){
        suma = suma + valorlletres(c);
    }
    cout << suma << endl;
}
