#include <iostream>
using namespace std;

int main () {
	int n;
	
	while (cin >> n){ 
		int maxt,max;
		int n1;
		cin >> n1; 
		maxt = n1; 
		for (int i = 1; i < n; ++i){
			int n2;
			cin >> n2; 
			if (n1 < n2) max = n2; 
			else max = n1; 
			
			if(maxt < max) maxt = max; 
			
			n1 = n2;
		}
		cout << maxt << endl;	
	}	
}