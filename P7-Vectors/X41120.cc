#include<iostream>
#include <vector>
using namespace std;

 vector<int> calcula_cims(const vector<int>& munt){
 	vector<int>pics;
	for (int i = 1; i < munt.size()-1; ++i){
		if (munt[i] > munt[i-1] and munt[i] > munt[i+1]) pics.push_back(munt[i]); //cada vegada que troba un cim l'afegeix al vector de cims
	}
	return pics;
 }
 
 int main (){
 	int n; cin >> n;
 	vector<int> munt(n);
	for (int i = 0; i < munt.size(); ++i) cin >> munt[i]; // llegir els cims
	
	vector<int> res = calcula_cims (munt);
	int npics = res.size();
	cout << npics << ":";
	
	for (int j = 0; j < npics; ++j) cout << " " << res[j]; //Treure els cims
	cout << endl;
	
	bool nothing = true;
	for (int i = 0; i < npics-1;++i){
		if (res[i] > res[npics-1]) { 		//Treure els pics més gran que l'últim cim
			if (not nothing) cout << " ";
			cout << res[i];
			nothing = false;
		}
	}
	if (nothing) cout << "-" << endl;		//Si no hi ha cims més grans que l'últim treure "-"
	else cout << endl;			
 }