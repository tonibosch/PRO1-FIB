#include <iostream>
using namespace std;

int main () {
    
    int input;
    cin >> input;
    
    int n= input;
    //Les files
    while(n>0){
        
        for (int j=0 ; j< n-1; ++j){
            cout<< "+";
        }cout<<"/";
        
        int diff= input-n;
        for (int x=0 ; x<diff ; ++x){
            cout<< "*";
        }cout << endl;
        
        --n;
    }
}