#include <iostream>
using namespace std;

int main() {
	char c;
	cin >> c;
	if('A'<= c and c <='Z') {
	char result= (c -'A') +'a';
	cout <<result << endl;
    }
	else {
	char result= c +'A'-'a';
	cout <<result << endl;
   }

}
