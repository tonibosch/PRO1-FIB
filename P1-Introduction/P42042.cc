#include <iostream>
using namespace std;

int main(){
	char c;
	cin>>c;
	
	if('A' <= c and c <= 'Z'){
		cout<<"majuscula"<<endl;
		}
	else cout<<"minuscula"<<endl;
	
	if(c=='A' or c=='E' or c=='I' or c=='O' or c=='U' or c=='a' or
	 c=='e' or c=='i' or c=='o' or c=='u'){
	 	cout<<"vocal"<<endl;
		}
	else cout<<"consonant"<<endl;
	
}

