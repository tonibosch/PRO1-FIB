#include <iostream>
using namespace std;

int suma_digits(int n){
	if(n < 10) return n;
	else return n%10 + suma_digits(n/10);
}

int reduccio_digits(int n){
	int sdig = suma_digits(n); 
	if (sdig < 10)return sdig;
	else return reduccio_digits(sdig);
}


int main() {
  int n;
  while (cin >> n) {
  	
    cout << reduccio_digits(n) << endl;
  }
}