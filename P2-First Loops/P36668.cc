#include<iostream>
using namespace std;

int main () {
	int n;
	cin >> n;
	int i = 0;
	
	while (n>0){
		i = i + n*n;
		n = n -1;
		}
	cout<<i<<endl;	
}