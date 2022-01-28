#include <iostream>
using namespace std;

int main (){
    string s;
    int i = 0,iCatboy = 0, iGekko = 0, iOwlette = 0;
    bool firstCatboy = false;
    bool firstGekko = false;
    bool firstOwlette = false;
    bool trobats = false;
    
    while (cin >> s and not trobats){
        if(not firstCatboy and s == "Catboy"){
            firstCatboy = true;
            iCatboy = i;
        }
        if(not firstGekko and s == "Gekko"){
            firstGekko = true;
            iGekko = i;
        }
        if(not firstOwlette and s == "Owlette"){
            firstOwlette = true;
            iOwlette = i;
        }
        if(firstCatboy and firstGekko and firstOwlette) trobats = true;
        ++i;
    }
    
    if(iCatboy < iGekko and iCatboy < iOwlette) {
        if(iGekko < iOwlette) cout << "Catboy" << endl << "Gekko" << endl << "Owlette" << endl;
        else cout << "Catboy" << endl << "Owlette" << endl << "Gekko" << endl;
    }
        
    else if(iGekko < iCatboy and iGekko < iOwlette) {
        if(iCatboy < iOwlette) cout << "Gekko" << endl << "Catboy" << endl << "Owlette" << endl;
        else cout << "Gekko" << endl << "Owlette" << endl << "Catboy" << endl;
    }
        
    else{
        if(iCatboy < iGekko) cout << "Owlette" << endl << "Catboy" << endl << "Gekko" << endl;
        else cout << "Owlette" << endl << "Gekko" << endl << "Catboy" << endl;
    }
}