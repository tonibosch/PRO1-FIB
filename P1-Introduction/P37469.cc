#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
    int h = N / 3600;
    N = (N-3600*h);
    int m = N/60;
    N = (N- 60*m);
    int s = N;
	cout<<h<<" "<<m<<" "<<s<<endl;	
}