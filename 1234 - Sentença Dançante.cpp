#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
	string entra;
	bool sobe = true;
	
	while(getline(cin, entra)) {
		
		for(int i = 0; entra[i] != '\0'; i++) {
			if(entra[i] == ' ')
				continue;
			
			if(sobe) {
				if(entra[i] >= 'a' && entra[i] <= 'z') 
					entra[i] -= 32;	
			}
			
			else {
				if(entra[i] >= 'A' && entra[i] <= 'Z') 
					entra[i] += 32;
			}
			
			sobe = !sobe;
		}
		
		sobe = true;
		cout << entra << endl;
	}
	
	
	 
	return 0;
}