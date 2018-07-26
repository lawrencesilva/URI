#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	
	int foram, voltaram, quem;
	bool imprimiu = false;
	
	while(cin >> foram >> voltaram) {
		int identifica[foram];
		
		for(int i = 0; i < foram; i++) {
			identifica[i] = 0;
		}
		
		for(int i = 0; i < voltaram; i++) {
			cin >> quem;
			identifica[quem - 1] = 1;
		}
		
		for(int i = 0; i < foram; i++) {
			if(identifica[i] == 0) {
				cout << i + 1 << " ";
				imprimiu = true;
			}
		}
		
		if(imprimiu == false)
			cout << "*";
			
		cout << endl;
		
		imprimiu = false;	
	}
	
	return 0;
}