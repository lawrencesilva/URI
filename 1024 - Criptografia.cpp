#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
	string entra, copia;
	int quantos;
	
	cin >> quantos;
	
	cin.ignore();
	
	while(quantos > 0) {
		getline(cin, entra);
		
		for(int i = 0; entra[i] != '\0'; i++) {
			if((entra[i] >= 65 && entra[i] <= 90) || (entra[i] >= 97 && entra[i] <= 122))
				entra[i] += 3;
		}
		
		for(int i = 0; i < entra.length(); i++) {
			copia[i] = entra[entra.length() - 1 - i];
		}
		
		for(int i = entra.length()/2; i < entra.length(); i++) {
			copia[i]--;
		}
		
		for(int i = 0; i < entra.length(); i++) {
			cout << copia[i];
		}
		cout << endl;
		quantos--;
	}	
	
	
	 
	return 0;
}