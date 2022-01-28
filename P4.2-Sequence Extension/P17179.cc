#include <iostream>
using namespace std;

int main () {
	cout.setf(ios::fixed);
    cout.precision(4);
	int n;
	cin >> n;
	
 	for (int i = 0; i < n; ++i){
 		int naux;
 		cin >> naux;
		double n1,maxt,max,min,mint,mit;
		cin >> n1; 
		maxt = n1; 
		mint = n1;
		mit = n1;
		
		for (int j = 1; j < naux; ++j){
			double n2;
			cin >> n2; 
			if (n1 < n2){
				max = n2;
				min = n1;
			} 
			else {
				max = n1; 
				min = n2;
			} 
		
			if(maxt < max) maxt = max;
			if(mint > min) mint = min; 
			mit = mit + n2;
		
			n1 = n2;
		}
	cout << mint << " " << maxt << " " << (mit/naux) << endl;
	
	}		
}