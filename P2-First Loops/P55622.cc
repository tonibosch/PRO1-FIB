#include <iostream>
using namespace std;

int main () {
	int n;
	cin>>n;
	int aux = n;
	int i = 0;
	
	if(n != 0){
		while( n != 0 ) {
			n=  n / 10;
			++i;
			}
	cout<<"El nombre de digits de "<< aux <<" es "<<i<<"."<<endl;
	}
	else cout << "El nombre de digits de "<< n <<" es 1."<<endl;
}