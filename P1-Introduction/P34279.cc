P34279#include <iostream>
using namespace std;

int main() {
	int h,min,seg,n;
	cin>>h>>min>>seg;
	n=seg + 1;
	
	if(n == 60){
		min= min +1;
		n=0;
	if(min == 60){
		h= h +1;
		min=0;
	}	
	if (h == 24) h = 0;
	}
		if(h<10){
		cout<<"0"<<h<<":";
		}
		else cout<<h<<":";
		
		if(min<10){
		cout<<"0"<<min<<":";		
		}
		else cout<<min<<":";
		
		if(n<10){
		cout<<"0"<<n<<endl;		
		}	
		else cout<<n<<endl;
		
}
	

