#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
if (t > 30 and t >= 100){
    cout<<"fa calor"<<endl;
    cout<<"l'aigua bulliria"<<endl;
    }
if (t > 30 and t < 100) cout<<"fa calor"<<endl;

if (t < 10 and t <= 0){
    cout<<"fa fred"<<endl;
    cout<<"l'aigua es gelaria"<<endl;
    }
if (t < 10 and t > 0) cout<<"fa fred"<<endl;

if(10 <= t and t <= 30) cout<<"s'esta be"<<endl;

}