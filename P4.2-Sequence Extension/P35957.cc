#include <iostream>
using namespace std;

int cdig (int x){
	int ndig = 1;	
    while ( x > 10){
        x = x / 10;
        ndig = ndig + 1;
	}
	return ndig;
}

int ncentr (int inp){
	int sizeinp = cdig (inp);
	for (int j = 0; j < (sizeinp/2); ++j){
        inp = inp / 10;
	}
	return inp % 10;
}

int main () {
    int n,x,y;
    cin >> n >> x;
    int i = 1; // i = 0;
    bool error = false;
    
	int nx = cdig (x);
        
    if (nx % 2 == 0) error = true;
   
	int mitjant = ncentr(x); 
   

    while (i < 2*n and error == false){
        cin >> y;
        int ny = cdig(y);
        if (ny % 2 == 0) error = true;
                
		int mitj = ncentr(y);

        if (mitjant != mitj) error = true; 
        ++i;
    }
    
    if (error) {
        if (i % 2 == 0) cout << "A" << endl;
        else cout << "B" << endl;
    }
    
    else cout << "=" << endl;
        
}

