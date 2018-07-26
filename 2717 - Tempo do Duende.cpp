#include <iostream>
 
using namespace std;
 
int main() {
    int minutos, p1, p2;
    
    cin >> minutos >> p1 >> p2;
    
    if(p1 + p2 > minutos) {
        cout << "Deixa para amanha!" << endl;
    }
    
    else {
        cout << "Farei hoje!" << endl;
    }
 
    return 0;
}