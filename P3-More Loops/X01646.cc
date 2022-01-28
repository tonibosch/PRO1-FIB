#include <iostream>
using namespace std;

int main ()  {
    int base, n;
    cin >> base;
  	 
    while (cin >> n){   
   		int sol = 0;
    	int naux = 0;  
    	
		cout << n << ": ";    
		
         while (n > 0) {
       		naux = n % base;
            n = n /base;
            sol = sol + naux;
     		}  
			     
    cout << sol << endl;
    
	}
	
}