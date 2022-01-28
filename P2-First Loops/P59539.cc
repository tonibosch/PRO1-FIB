#include <iostream>
using namespace std;

int main () {
  cout.setf(ios::fixed);
  cout.precision(4);
	double n;
	cin>>n;
	double i = 0;
	
	while(n > 0){
		i = i + 1/n;
		--n;
	}
	cout<<i<<endl;
}