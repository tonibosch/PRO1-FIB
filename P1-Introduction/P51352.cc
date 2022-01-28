#include <iostream>
using namespace std;

int main(){
	char elem1,elem2;
	cin>>elem1>>elem2;
	
	if(elem1 == 'A' and elem2 == 'P')cout<<1<<endl;
	if(elem1 == 'P' and elem2 == 'A')cout<<2<<endl;
	
	if(elem1 == 'A' and elem2 == 'V')cout<<2<<endl;
	if(elem1 == 'V' and elem2 == 'A')cout<<1<<endl;
	
	if(elem1 == 'P' and elem2 == 'V')cout<<1<<endl;
	if(elem1 == 'V' and elem2 == 'P')cout<<2<<endl;

	if(elem1 == 'A' and elem2 == 'A')cout<<"-"<<endl;
	if(elem1 == 'P' and elem2 == 'P')cout<<"-"<<endl;
	if(elem1 == 'V' and elem2 == 'V')cout<<"-"<<endl;	
 
 	
}

